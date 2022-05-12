/*
   Copyright (C) 2021 SFini
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
  * @file Config.h
  * 
  * configuration information
  */
#pragma once

#define CITY_NAME        "City"

// change to your location
#define LATITUDE         47.69732 
#define LONGITUDE         8.63493

#define OPENWEATHER_SRV  "api.openweathermap.org"
#define OPENWEATHER_PORT 80
#define OPENWEATHER_API  "your openweathermap api key"
#define DAILY_DISPLAY    // comment to enable hourly display

/* Define up to 10 Access Points here */
#define WIFI_SSID0       "your wifi ssid"
#define WIFI_SSID0_PWD       "your wifi pwd"
#define WIFI_SSID1       "your wifi ssid"
#define WIFI_SSID1_PWD       "your wifi pwd"
/* #define WIFI_SSID2       "your wifi ssid"
#define WIFI_SSID2_PWD       "your wifi pwd"
#define WIFI_SSID3       "your wifi ssid"
#define WIFI_SSID3_PWD       "your wifi pwd"
#define WIFI_SSID4       "your wifi ssid"
#define WIFI_SSID4_PWD       "your wifi pwd"
#define WIFI_SSID5       "your wifi ssid"
#define WIFI_SSID5_PWD       "your wifi pwd"
#define WIFI_SSID6       "your wifi ssid"
#define WIFI_SSID6_PWD       "your wifi pwd"
#define WIFI_SSID7       "your wifi ssid"
#define WIFI_SSID7_PWD       "your wifi pwd"
#define WIFI_SSID8       "your wifi ssid"
#define WIFI_SSID8_PWD       "your wifi pwd"
#define WIFI_SSID9       "your wifi ssid"
#define WIFI_SSID9_PWD       "your wifi pwd"
*/
/* ... etc */

/* Choose which data you want shown in the top left corner of the screen
    0 - WiFi AP name
    1 - BTC/USD
*/
#define DISPLAY_TOPLEFT 1
