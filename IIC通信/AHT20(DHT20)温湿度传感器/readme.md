使用方法
| 本库适配AHT20/DHT20等温湿度传感器

0. 工程配置
示例工程默认使用的是STM32F103C8T6的I2C1. 如有其他I2C或者非STM32需求, 仅需修改oled.h中的Send函数与Receive即可完成移植.

1. 引入
CubeIDE
将本库的aht20.c文件放入到Src文件夹, 将aht20.h文件放入Inc文件夹.

2. 使用
STM32初始化IIC完成后调用AHT20_Init()初始化AHT20
调用AHT20_Measure()可以进行一次测量
调用AHT20_Tempurature()与AHT20_Humidity()分别可以获取上次测量时的温度与湿度数据
AHT20_Init();
float temperature = 0.0, humidity = 0.0;
char message[50];

while(1){
    AHT20_Measure();
    temperature = AHT20_Tempurature();
    humidity = AHT20_Humidity();
    sprintf(message, "Temperature: %.2f, Humidity: %.2f%%\r\n", temperature, humidity);
    HAL_UART_Transmit(&huart2, (uint8_t *)message, strlen(message), HAL_MAX_DELAY);
    HAL_Delay(1000);
}

| PS: CubeIDE默认未开启对sprintf浮点数的支持, 若要使用%f, 则需勾选Project -> Proterties -> C/C++ Build -> Setting -> Tool Setting -> MCU Setting 中的 Use float with printf from newlib-nano