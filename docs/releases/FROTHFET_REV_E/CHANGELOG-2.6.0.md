# Version 2.6.0

> **Note:** This release has some breaking changes, particularly around the config system and controller architecture. Migration from v2.x should be seamless, but there may be bugs requiring a config edit.  **BACK UP YOUR CONFIG BEFORE YOU UPGRADE**

## 🚀 New Features

- **State Change Logging**
  - Backend now logs channel state changes (on/off, fuse blown, soft fuse trip, bypass, overheat) with timestamp to `/frothfet_log.json` on the device
  - New State Log tab in the UI displays the history as a sortable, searchable table
  - Logs are debounced (1-second minimum between entries) to avoid flooding during rapid events
  - Only the latest 100 entries are displayed in the UI

- **Dark Mode**
  - gridjs now respects the browser/OS dark mode preference

## 🛠️ Improvements & Enhancements

- Using [Grid.js](https://gridjs.io/) for a clean log table — sorting, search, and pagination built in
- Grid.js table renders correctly on B&G MFD displays
- Reorganized Grid.js assets into a dedicated `html/gridjs/` folder

## Infrastructure

- Updated to YarrboardFramework v3.0
- Added `sdkconfig.defaults` to enable PSRAM
- Fixed firmware OTA URL in release manifests

---