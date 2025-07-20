#include "PROSLogger/LogManager.hpp"
#include "PROSLogger/LogEvent.hpp"

#include <vector>

namespace PROSLogger::Manager {
    LogLevel level = DEBUG;
    std::vector<Subscriber> subscribers;
    bool consoleEnabled = true;

    void setLevel(const LogLevel level) {
        Manager::level = level;
    }

    LogLevel getLevel() {
        return level;
    }

    void setConsoleEnabled(const bool enabled) {
        consoleEnabled = enabled;
    }

    bool isConsoleEnabled() {
        return consoleEnabled;
    }

    void subscribe(const Subscriber &callback) {
        subscribers.push_back(callback);
    }

    void notify(const LoggerEvent &event) {
        for (const auto& sub : subscribers) {
            sub(event);
        }
    }


}
