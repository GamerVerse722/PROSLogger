#pragma once

#include "LogEvent.hpp"
#include "LogLevel.hpp"

namespace PROSLogger::Manager {
    void setLevel(LogLevel level);
    LogLevel getLevel();

    void setConsoleEnabled(bool enabled);
    bool isConsoleEnabled();

    void subscribe(const Subscriber& callback);
    void notify(const LoggerEvent& event);
}
