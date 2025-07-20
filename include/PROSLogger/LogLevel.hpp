#pragma once

#include <string>

namespace PROSLogger {
    enum LogLevel {
        DEBUG,
        INFO,
        WARN,
        ERROR
    };

    inline std::string levelToString(LogLevel level) {
        switch (level) {
            case DEBUG: return "Debug";
            case INFO: return "Info";
            case WARN: return "Warn";
            case ERROR: return "Error";
            default: return "Unknown";
        }
    }

    inline char levelToColor(const LogLevel level) {
        switch (level) {
            case DEBUG: return *"\033[0;34m";
            case INFO: return *"\033[0;32m";
            case WARN: return *"\033[0;33m";
            case ERROR: return *"\033[0;31m";
            default: return *"";
        }
    }
}
