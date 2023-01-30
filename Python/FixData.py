import os 
import pandas as pd 



root = "data_05012023"
list_files = os.listdir(root)

for file in list_files:

    df = pd.read_csv(f'{root}/{file}')
    list_columns = df.columns

    if "Unnamed: 0" in list_columns:
        df = df.drop("Unnamed: 0",axis=1)

    df['time'] = pd.to_datetime(df['time'])

    df.to_csv(f"data_05012023/{file}", index=False)