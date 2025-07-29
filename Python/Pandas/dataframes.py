import pandas as pd
import os

weather = [
    {"City" : "Sopore", "Event" : "Sunny", "Date": "01/05/2002"},
    {"City" : "Srinagar", "Event" : "Rainy", "Date": "02/05/2002"},
    {"City" : "Jammu", "Event" : "Cloudy", "Date": "03/05/2002"},
    {"City" : "Delhi", "Event" : "Sunny", "Date": "04/05/2002"}
]

df = pd.DataFrame(weather)
df.index("City")
print(df["City"])
df.to_csv("Weather.csv")
