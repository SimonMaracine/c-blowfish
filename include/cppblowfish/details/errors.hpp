#ifndef ERRORS_H
#define ERRORS_H

#include <stdexcept>
#include <string>

namespace cppblowfish {
    class AlreadyInitializedError : public std::logic_error {
    public:
        explicit AlreadyInitializedError(const std::string& message)
            : std::logic_error(message) {}
        explicit AlreadyInitializedError(const char* message)
            : std::logic_error(message) {}
    };

    class KeyError : public std::logic_error {
    public:
        explicit KeyError(const std::string& message)
            : std::logic_error(message) {}
        explicit KeyError(const char* message)
            : std::logic_error(message) {}
    };
}

#endif  // ERRORS_H
