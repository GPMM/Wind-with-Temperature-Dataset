from importlib.resources import read_text
from re import X
import pandas as pd
import datetime
import os

files = os.listdir("raw_data_05012023")

for file in files:

    df = pd.read_table(f"raw_data_05012023/{file}", delimiter=";", header=None)

    # Rename Columns

    df.columns = ['time','a1','a2','a3','a4','a5','a6','a7','a8','a9','a10','a11','a12',
                  'a13','a14','a15',""]

    # Convert time columns

    df['time'] = df['time'].apply(lambda x: datetime.datetime.fromtimestamp(x).strftime('%c'))

    file = file.replace(".txt",".csv")
    df.to_csv(f"data_05012023/{file}")
