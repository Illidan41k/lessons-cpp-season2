#pragma once
#include <string>
#include <iostream>

// Singleton


class Logger
{
public:

	Logger(Logger& other) = delete;

	static Logger* GetInstance(const std::string& initializetorName);

	void Log(const std::string& message);

	~Logger()
	{
		//it doesn't work. but it even mustn't! it's okay!
		std::cout << "logger destroyed!" << std::endl;
	}

private:
	Logger() = default;
	
	Logger(const std::string& initializerName);

	std::string m_loggerName{};

	static Logger* m_instance;
};

