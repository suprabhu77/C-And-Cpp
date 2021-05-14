import requests
from bs4 import BeautifulSoup
page = requests.get('https://freefrontend.com/')
bSoup = BeautifulSoup(page.content,'html.parser')
result = bSoup.find_all('a')
print(result)