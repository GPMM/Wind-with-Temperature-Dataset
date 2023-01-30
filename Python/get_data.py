import serial
import time


while True:
    try:
        porta = "COM4"
        baud = 9600
        arquivo = "raw_data_05012023/run21.txt"
        file = open(arquivo,'w')
        ser = serial.Serial(porta,baud)
        ser.flushInput()
        print("começou o experimento")
        start = time.time()
        timestemp = 0
        while timestemp < start + 1 * 60:
            data_arduino = ser.readline().decode("utf-8")
            data_arduino = str(data_arduino)
            timestemp = time.time()
            data = str(timestemp) + ";" + data_arduino + "\n"
            file.write(data)

        ser.close()
        break
    except:
        continue
    
print("Terminou o Experimento")       
