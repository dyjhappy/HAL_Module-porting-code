1. 在hal库图形化界面中配置SCL、SDA引脚，均配置为开漏输出 -> 悬浮
2. 导入 OLED.h、OLED.c、OLEDFont.h、OLEDFont.c 文件
3. #include "OLED.h" 、 #include "OLEDFont.h"
4. 在OLED.c中修改引脚定义 GPIO_Port、SCL_GPIO_Pin、SDA_GPIO_Pin
5. 在main.c中调用OLED_Init()初始化OLED
6. 测试代码：
	OLED_ShowChar(1, 1, 'A');
	OLED_ShowString(1, 3, "HelloWorld!");
	OLED_ShowNum(2, 1, 12345, 5);
	OLED_ShowSignedNum(2, 7, -66, 2);
	OLED_ShowHexNum(3, 1, 0xAA55, 4);
	OLED_ShowBinNum(4, 1, 0xAA55, 16);