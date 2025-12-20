#pragma once

#include <esp_timer.h>

#include <cstdint>

namespace OpenShock {
  inline int64_t micros() {
    return esp_timer_get_time();
  }

  inline int64_t millis() {
    return esp_timer_get_time() / 1000LL;
  }
}
