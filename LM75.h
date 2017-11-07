// Header file for LM75A - Digital Temperature Sensor and Thermal Watchdog with 2-Wire Interface

// Register definition
#define TEMPERATURE     0x00
#define CONFIGURATION   0x01
#define T_HYST          0x02
#define T_OS            0x03

// Configuration Register Bits definition
#define FAULT_QUENE_H   0x10
#define FAULT_QUENE_L   0x08
#define OS_POLARITY     0x04
#define COMP_nINT       0x02
#define SHUTDOWN        0x01
