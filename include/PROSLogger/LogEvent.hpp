#pragma once

#include <functional>

#include "LogLevel.hpp"

namespace PROSLogger {
    struct LoggerEvent {
        LogLevel level;
        std::string groupId;
        std::string message;
        std::string formattedMessage;
    };

    typedef std::function<void(const LoggerEvent)> Subscriber;
}
