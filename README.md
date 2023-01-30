# Medição de Temperatura e Velocidade dos Ventos


Este repositório é sobre o experimento de coleta da temperatura e velocidade do vento para a calibração de um simulador de dinâmica dos fluídos.

O experimento consiste em colocar um secador de cabela a distância de um grid 3x5 de sensores DHT-11. Foram coletados dados com o secador e o Grid a uma distância de 30 cm, 60 cm, 90 cm e 120 cm e para cada uma dessas distâncias foram feitas 10 amostras. A figura abaixo mostra a montagem do grid.

![assets\grid.jpeg](https://github.com/GPMM/Wind-with-Temperature-Dataset/blob/e3895f3d50b9681c0db8ff90f0f2d90eb94bc484/asset/grid.jpeg)

Todos os sensores foram ligados ao Arduino Mega além de um modulo relê. Para executar um experimento o arquivo python era executado e quando o arduíno era conectado ao computar, o modulo relê acionava, o código python começava a escrever o arquivo com as informações vindas do arduíno. Após a coleta dos dados o código python era terminado, o ar condicionado ligado e era esperado que os sensores tivesse uma variação máxima de 1°C.

As pastas deste repositório estão organizadas como:

- Python - Scripit em python que coleta os dados e os dados coletados, bem como os datasets prontos.
- Arduino - Script em C++ que faz as leituras do sensor
- assets - Imagens do experimento
- PowerBI - Pasta com Report e analises dos dados
