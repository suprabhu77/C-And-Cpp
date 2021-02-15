from selenium import webdriver

from getpass import getpass
Username = input("Enter the user name: ")
password = getpass("Enter the password: ")

driver = webdriver.Chrome("C:\\driver\\chromedriver.exe")
driver.get("https://github.com/login")

username_textbox = driver.find_element_by_id("login_field")
username_textbox.send_keys(Username)

password_textbox = driver.find_element_by_id("password")
password_textbox.send_keys(password)

login_button = driver.find_element_by_name("commit")
login_button.submit()