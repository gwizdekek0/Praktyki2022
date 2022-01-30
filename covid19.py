# Author = gwizdekek_
# ScrapyApp
# Covid-19 Cases
import requests
import bs4
import pandas as pd


url = 'https://www.worldometers.info/coronavirus/country/poland/'
result = requests.get(url)

soup = bs4.BeautifulSoup(result.text,'lxml')

cases = soup.find_all('div' ,class_= 'maincounter-number')




data = []

for i in cases:
	span = i.find('span')
	data.append(span.string)

print(data)

df = pd.DataFrame({"CoronaData": data})

df.index = ['TotalCases', ' Deaths', 'Recovered']


df.to_csv('Corona_Data.csv')
