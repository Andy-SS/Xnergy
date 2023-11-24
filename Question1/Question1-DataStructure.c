////////////////////////////////////////////////////////////////////////////////
/// @file Question1-DataStructure.c
/// @author Andy Chen
/// 
/// @brief 
/// 
/// @version 0.1
/// @date 2023-11-24
/// 
/// 
////////////////////////////////////////////////////////////////////////////////

typedef struct handshakeMessage
{
  uint8_t u8MessageHead; // type of the message
  uint16_t u16Size; // size of data
  uint8_t u8Datas[100]; // handshake message 100 bytes
  uint16_t u16CRC; // handshake message checksum
} HandshakeMessage_t;

typedef struct RealTimeMessage
{
  uint8_t u8MessageHead; // type of the message
  uint16_t u16Size; // size of data
  uint8_t u8Datas[50]; // real time message 50 bytes
  uint16_t u16CRC; // real time message checksum
} RealTimeMessage_t;

//============================
// Second solution
typedef struct Message
{
  uint8_t u8MessageHead; // type of the message
  uint16_t u16Size; // size of data
  uint8_t *u8Data; // point to message array
  uint16_t u16CRC; // message checksum
} Message_t;
uint8_t handshakeMessage[100];
uint8_t RealTimeMessage[50];

