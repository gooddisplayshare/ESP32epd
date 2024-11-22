#ifndef _EPD_H_
#define _EPD_H_

#define EPD_WIDTH   1360/2
#define EPD_HEIGHT  480
#define EPD_ARRAY  EPD_WIDTH*EPD_HEIGHT/8  

//Full screen update display
void EPD_Init(void); 
void EPD_WhiteScreen_ALL(const unsigned char *datas);
void EPD_Init_180(void);  
void EPD_WhiteScreen_ALL180(const unsigned char *datas);
void EPD_WhiteScreen_White(void);
void EPD_WhiteScreen_Black(void);
void EPD_DeepSleep(void);
//Partial update display 
void EPD_Init_Part(void);
void EPD_WhiteScreen_ALL_P(const unsigned char *oldDatas,const unsigned char *newDatas); 
//GUI display                           
void EPD_Display(unsigned char *Image);                       
#endif



