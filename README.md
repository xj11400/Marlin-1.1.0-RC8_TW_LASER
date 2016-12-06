# Marlin-1.1.0-RC8_TW_LASER
Marlin-1.1.0-RC8 Chinese(tradtional) & Laser control   
Marlin v1.1.0-RC8 繁體中文＋雷射控制顯示
    
Mcode:

* M900 Sxxx  : Laser ttl (0~255)   
* M901: LASER Driver Power On   
* M902: Laser Driver Power OFF
   
      
   
@pins_RAMPS.h   
 #define LASER_TTL_PIN  6   
 #define LASER_POWER_PIN  40
 
＠configuration.h  
 #define LASER_CONTROL   
 #define LCD_LANGUAGE tw

