#include "Logger.h"


Logger* Logger::m_instance{ nullptr };


Logger* Logger::GetInstance(const std::string& initializetorName)
{
    if (m_instance == nullptr)
    {
        m_instance = new Logger(initializetorName);
    }

    return m_instance;
}

void Logger::Log(const std::string& message)
{
    std::cout << m_loggerName << ": " << message << std::endl;
}

Logger::Logger(const std::string& initializerName)
{
    m_loggerName = initializerName;
}
