from flask import Flask, jsonify
from bs4 import BeautifulSoup
import requests

app = Flask(__name__)


@app.route('/get/<requested_product>')
def fetch_details(requested_product):
    print(requested_product)

    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36"
    }

    flipkart_url = f'https://www.flipkart.com/search?q={requested_product}'
    amazon_url = f'https://www.amazon.in/s?k={requested_product}'

    Response = requests.get(flipkart_url)
    html_page = BeautifulSoup(Response.text, 'html.parser')

    products = html_page.find_all(class_='bhgxx2 col-12-12')

    results = {}
    flipkart = {}
    amazon = {}

    for product in products:
        try:
            product_name = product.find(class_='_3wU53n').text
            if product_name is not None:
                product_price = product.find(class_='_1vC4OE _2rQ-NK').text

                if requested_product.lower() in product_name.lower():
                    flipkart[product_name] = product_price
        except Exception as e:
            print(e)

    results["Resuts from flipkart"] = flipkart

    Response = requests.get(amazon_url)
    html_page = BeautifulSoup(Response.text, 'html.parser')

    products = html_page.find_all(
        class_='s-include-content-margin s-border-bottom s-latency-cf-section')

    for product in products:
        try:
            product_name = product.find(
                class_='a-size-medium a-color-base a-text-normal').text
            if product_name is not None:
                product_price = product.find(class_='a-price-whole').text

                if requested_product.lower() in product_name.lower():
                    amazon[product_name] = product_price

        except Exception as e:
            print(e)

    results["Resuts from Amazon"] = amazon

    return jsonify(results)


if __name__ == '__main__':
    app.run(debug=True, port=3000)