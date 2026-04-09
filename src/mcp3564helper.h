/*
  Yarrboard

  Author: Zach Hoeken <hoeken@gmail.com>
  Website: https://github.com/hoeken/yarrboard
  License: GPLv3
*/

#ifndef YARR_MCP3564_H
#define YARR_MCP3564_H

#include "adchelper.h"

#ifdef YB_PWM_CHANNEL_CURRENT_ADC_DRIVER_MCP3564

#include <MCP3x6x.h>

class MCP3564Helper : public ADCHelper
{
  public:
    MCP3564Helper(float vref, MCP3564* adc, uint16_t samples = RA_DEFAULT_SIZE, uint32_t window_ms = RA_DEFAULT_WINDOW);
    void requestADCReading(uint8_t channel) override;
    bool isADCReady() override;
    uint32_t loadReadingFromADC(uint8_t channel) override;

  private:
    uint32_t _channelAddresses[8] = {MCP_CH0, MCP_CH1, MCP_CH2, MCP_CH3, MCP_CH4, MCP_CH5, MCP_CH6, MCP_CH7};
    MCP3564* _adc;
};

#endif // YB_PWM_CHANNEL_CURRENT_ADC_DRIVER_MCP3564

#endif /* !YARR_MCP3564_H */
