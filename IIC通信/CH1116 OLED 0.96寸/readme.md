| 本库适配CH1116/SH1106等系列芯片

0. 工程配置
示例工程默认使用的是STM32F103C8T6的I2C1. 如有其他I2C或SPI需求, 仅需修改oled.h中的Send函数即可完成移植.

1. 引入
CubeIDE
将本库的oled.c, font.c文件放入到Src文件夹, 将oled.h, font.h文件放入Inc文件夹.

2. 使用
STM32初始化IIC完成后调用OLED_Init()初始化OLED. 注意STM32启动比OLED上电快, 可等待20ms再初始化OLED
调用OLED_NewFrame()开始绘制新的一帧
调用OLED_DrawXXX()系列函数绘制图形到显存 调用OLED_Printxxx()系列函数绘制文本到显存
调用OLED_ShowFrame()将显存内容显示到OLED
OLED_Init();

while(1){
    OLED_NewFrame();
    OLED_PrintString(i, i, "波特律动hello", &font16x16, OLED_COLOR_NORMAL);
    OLED_ShowFrame();
    HAL_Delay(100);
}