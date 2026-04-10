# Version 2.5.1

## 🛠️ Improvements & Enhancements

- Moved MCP3564 ADC helper into its own dedicated file (`mcp3564helper.cpp/h`)
- Removed ADS1115Helper class (not used in FrothFET)
- Removed unused JavaScript libraries (Sortable, c3, d3)
- Removed deprecated FrothFET Rev D board configuration
- Removed unused `validate.cpp/h`

## 🐛 Bug Fixes

- Fixed disabled channel stats rows not hiding properly in the UI
- Fixed firmware updater page

## Infrastructure

- Repository split: FrothFET firmware is now in its own dedicated repository
  - Removed all Brineomatic and SendIt source code, channel types, and UI files
  - Removed non-FrothFET board configurations and logos
- Updated URLs to reflect new repository location
- Removed local development settings from `platformio.ini`

---