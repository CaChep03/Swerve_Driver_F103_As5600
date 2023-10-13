# Swerve_Driver_F103_As5600
Swerve drive driver using stm32f103c8t6 with PID controller using angle feedback from AS5600

Using I2C1 to get dât from Master with 0x15 address, I2C2 to communicate with AS5600 to get the feedback angle.
Data from Master to Swerve_Driver_F103_As5600 have structure as below:
{0x05, High_Byte, Low_Byte}
0x05 is the head byte.
