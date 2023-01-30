# Medição de Temperatura e Velocidade dos Ventos


Este repositório é sobre o experimento de coleta da temperatura e velocidade do vento para a calibração de um simulador de dinâmica dos fluídos.

O experimento consiste em colocar um secador de cabela a distância de um grid 3x5 de sensores DHT-11. Foram coletados dados com o secador e o Grid a uma distância de 30 cm, 60 cm, 90 cm e 120 cm e para cada uma dessas distâncias foram feitas 10 amostras. A figura abaixo mostra a montagem do grid.

![alt text](assets\grid.jpeg)

Todos os sensores foram ligados ao Arduino Mega além de um modulo relê. Para executar um experimento o arquivo python era executado e quando o arduíno era conectado ao computar, o modulo relê acionava, o código python começava a escrever o arquivo com as informações vindas do arduíno. Após a coleta dos dados o código python era terminado, o ar condicionado ligado e era esperado que os sensores tivesse uma variação máxima de 1°C.

