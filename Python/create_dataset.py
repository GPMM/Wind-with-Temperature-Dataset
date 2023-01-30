import pandas as pd 
import os 

root = "data_05012023"
list_csv_files = os.listdir(root)

df = pd.DataFrame()
for k,file in enumerate(list_csv_files):

    df_partial = pd.read_csv(f"{root}/{file}")
    df_partial['run'] = file.split(".")[0]
    
    if k == 0:
        df = df_partial.copy()
    else:
        df = pd.concat([df,df_partial])


df.to_excel("dataset_05012023/DataSetTemperatura05012023.xlsx")
