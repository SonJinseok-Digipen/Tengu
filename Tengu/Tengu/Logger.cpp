#include "Logger.h"
#include<spdlog/sinks/stdout_color_sinks.h>
void Tengu::Logger::Init()
{
	
	
	spdlog::set_pattern("[%H:%M:%S.%f] %n\t  %v%$");
	s_CoreLogger = spdlog::stdout_color_mt("TENGU");
	s_CoreLogger->set_level(spdlog::level::trace);

	s_ClientLogger = spdlog::stdout_color_mt("APP");
	s_ClientLogger->set_level(spdlog::level::trace);
	
}
