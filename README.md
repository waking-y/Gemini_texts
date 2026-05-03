# Gemini_texts
a test for Gemini's

一、led_callback

1、项目代码分层架构（三层架构 + 工程管理） 

├── app/                 业务应用层

│   ├── main.c           项目入口与总控中心，负责顶层逻辑组装。通过调用驱动层 API，不直接操作硬件引脚

│   └── board.c/h        板级支持包（BSP）核心，充当硬件配置表。定义 LED、按键等外设的引脚连接，是驱动与实际硬件的对接层

│

├── driver/              驱动中轴层

│   ├── led/ & botton/   通用外设驱动目录，与具体电路板无关

│   ├── *_core.c/h       驱动核心实现，包含点灯、按键中断处理等逻辑。芯片平台不变，代码可直接复用_


│   └── *_desc.h         外设描述符文件，定义结构体（如 led_desc、button_desc），作为硬件参数 + 驱动逻辑之间的桥梁

│

├── firmware/              固件库层

│   └── STM32 标准外设库    存放 STM32 官方标准外设库，提供寄存器操作、GPIO/EXTI/NVIC/SYSCFG 等底层驱动接口

│

└── mdk/                   工程管理层

​    └── Keil 工程文件      存放 Keil uVision 工程文件（.uvprojx）等，负责工程构建与编译管理

2、基于句柄封装和面向对象的回调格式，适用于小白进阶版项目管理

