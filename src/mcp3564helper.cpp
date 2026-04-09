/*
  Yarrboard

  Author: Zach Hoeken <hoeken@gmail.com>
  Website: https://github.com/hoeken/yarrboard
  License: GPLv3
*/

#include "mcp3564helper.h"

#ifdef YB_PWM_CHANNEL_CURRENT_ADC_DRIVER_MCP3564

#include <YarrboardDebug.h>

MCP3564Helper::MCP3564Helper(float vref, MCP3564* adc, uint16_t samples, uint32_t window_ms)
    : ADCHelper(8, vref, 23, samples, window_ms), _adc(adc)
{
}

void MCP3564Helper::requestADCReading(uint8_t channel)
{
  this->_adc->startMux(_channelAddresses[channel]);
}

bool MCP3564Helper::isADCReady()
{
  return this->_adc->isComplete();
}

uint32_t MCP3564Helper::loadReadingFromADC(uint8_t channel)
{
  int32_t result = this->_adc->readResult();
  if (result < 0)
    result = 0;

  return result;
}

#endif // YB_PWM_CHANNEL_CURRENT_ADC_DRIVER_MCP3564
