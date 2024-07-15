#include "nvs_flash.h"
#include "esp_log.h"

void app_main(void)
{
    ESP_ERROR_CHECK( nvs_flash_init() );
    initialise_wifi();
    xTaskCreate(&wifi_enterprise_example_task, "wifi_enterprise_example_task", 4096, NULL, 5, NULL);
}