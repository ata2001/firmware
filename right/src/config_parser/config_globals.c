#include "config_globals.h"
#include "attributes.h"
#include "eeprom.h"

static uint8_t hardwareConfig[HARDWARE_CONFIG_SIZE];
static uint8_t ATTR_DATA2 stagingUserConfig[USER_CONFIG_SIZE];
static uint8_t validatedUserConfig[USER_CONFIG_SIZE];

config_buffer_t HardwareConfigBuffer = { hardwareConfig };
config_buffer_t StagingUserConfigBuffer = { stagingUserConfig };
config_buffer_t ValidatedUserConfigBuffer = { validatedUserConfig };

bool ParserRunDry;

bool IsConfigBufferIdValid(config_buffer_id_t configBufferId)
{
    return ConfigBufferId_HardwareConfig <= configBufferId && configBufferId <= ConfigBufferId_ValidatedUserConfig;
}

config_buffer_t* ConfigBufferIdToConfigBuffer(config_buffer_id_t configBufferId)
{
    switch (configBufferId) {
        case ConfigBufferId_HardwareConfig:
            return &HardwareConfigBuffer;
        case ConfigBufferId_StagingUserConfig:
            return &StagingUserConfigBuffer;
        case ConfigBufferId_ValidatedUserConfig:
            return &ValidatedUserConfigBuffer;
        default:
            return NULL;
    }
}

uint16_t ConfigBufferIdToBufferSize(config_buffer_id_t configBufferId)
{
    switch (configBufferId) {
        case ConfigBufferId_HardwareConfig:
            return HARDWARE_CONFIG_SIZE;
        case ConfigBufferId_StagingUserConfig:
        case ConfigBufferId_ValidatedUserConfig:
            return USER_CONFIG_SIZE;
        default:
            return 0;
    }
}
