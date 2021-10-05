void setup() {
    WiFi.onEvent(Wifi_disconnected, SYSTEM_EVENT_STA_DISCONNECTED);
}

void Wifi_disconnected(WiFiEvent_t event, WiFiEventInfo_t info){
  Serial.println("Desconectado del WiFi!!!");
  Serial.print("Motivo: ");
  Serial.println(info.disconnected.reason);
  Serial.println("Reconectando...");
  WiFi.begin(ssid, password);
}
