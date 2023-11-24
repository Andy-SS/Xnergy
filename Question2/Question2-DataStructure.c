////////////////////////////////////////////////////////////////////////////////
/// @file Question2-DataStructure.c
/// @author Andy Chen
/// 
/// @brief 
/// 
/// @version 0.1
/// @date 2023-11-24
/// 
/// 
////////////////////////////////////////////////////////////////////////////////

/**
 * The data from UART
 * 
*/
struct ModbusRTUMessage {
  uint8_t slaveAddress;
  uint8_t functionCode;
  uint8_t Data[252];
  uint16_t crc;
};


/**
 * The data structure use between MCU A and MCU B
 * 
*/
struct SPICommand
{
  uint8_t functionCode;// read or write
  uint8_t Data[7];
};




