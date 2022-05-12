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
  * @file EPDWifi.h
  * 
  * Helper functions for the wifi connection.
  */
#pragma once
#include <WiFi.h>
#include <WiFiMulti.h>

/* Start and connect to the wifi */
bool StartWiFi(int &rssi) 
{
   IPAddress dns(8, 8, 8, 8); // Google DNS

   WiFiMulti wifiMulti;

   WiFi.mode(WIFI_STA);
   WiFi.disconnect();
   WiFi.setAutoConnect(true);
   WiFi.setAutoReconnect(true);

/* add AP's here with AP Name, AP Password pairs */
   #ifdef WIFI_SSID0
   wifiMulti.addAP(WIFI_SSID0 , WIFI_SSID0_PWD);
   #endif
   #ifdef WIFI_SSID1 
   wifiMulti.addAP(WIFI_SSID1 , WIFI_SSID1_PWD);
   #endif
   #ifdef WIFI_SSID2
   wifiMulti.addAP(WIFI_SSID2 , WIFI_SSID2_PWD);
   #endif
   #ifdef WIFI_SSID3
   wifiMulti.addAP(WIFI_SSID3 , WIFI_SSID3_PWD);
   #endif
   #ifdef WIFI_SSID4
   wifiMulti.addAP(WIFI_SSID4 , WIFI_SSID4_PWD);
   #endif
   #ifdef WIFI_SSID5
   wifiMulti.addAP(WIFI_SSID5 , WIFI_SSID5_PWD);
   #endif
   #ifdef WIFI_SSID6
   wifiMulti.addAP(WIFI_SSID6 , WIFI_SSID6_PWD);
   #endif
   #ifdef WIFI_SSID7
   wifiMulti.addAP(WIFI_SSID7 , WIFI_SSID7_PWD);
   #endif
   #ifdef WIFI_SSID8
   wifiMulti.addAP(WIFI_SSID8 , WIFI_SSID8_PWD);
   #endif
   #ifdef WIFI_SSID9
   wifiMulti.addAP(WIFI_SSID9 , WIFI_SSID9_PWD);
   #endif
   
   Serial.println("Connecting WiFi...");
   if(wifiMulti.run() == WL_CONNECTED) {
      Serial.print("Connected to ");
      Serial.println(WiFi.SSID());
   }

   for (int retry = 0; WiFi.status() != WL_CONNECTED && retry < 30; retry++) {
      delay(500);
      Serial.print(".");
   }

   rssi = 0;
   if (WiFi.status() == WL_CONNECTED) {
      rssi = WiFi.RSSI();
      Serial.println("WiFi connected at: " + WiFi.localIP().toString());
      return true;
   } else {
      Serial.println("WiFi connection *** FAILED ***");
      return false;
   }
}

/* Stop the wifi connection */
void StopWiFi() 
{
   Serial.println("Stop WiFi");
   WiFi.disconnect();
   WiFi.mode(WIFI_OFF);
}
