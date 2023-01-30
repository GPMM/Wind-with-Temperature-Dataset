import pandas as pd

df = pd.read_excel("dataset_05012023\DataSetTemperatura05012023.xlsx")

list_runs = list(df['run'].unique())
list_sensor = [f'a{i}' for i in range(1,16)]

dict_variation = {'run':list_runs}
for sensor in list_sensor:
    list_variation = []
    for run in list_runs:
        df_partial = df.query(f"run == '{run}'")
        max = df_partial[sensor].max()
        min = df_partial[sensor].min()
        list_variation.append(max-min)
    
    dict_variation[sensor] = list_variation


df_variation = pd.DataFrame(dict_variation)


df_variation.to_excel("dataset_05012023/variacao_max.xlsx")

