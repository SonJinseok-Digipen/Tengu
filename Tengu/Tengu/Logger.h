#pragma once
#include"Core.h"
#include <spdlog/spdlog.h>
namespace Tengu
{
	class TENGU_API Logger
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>GetClientLogger() { return s_ClientLogger; }
	private:
		 inline static std::shared_ptr<spdlog::logger>s_CoreLogger;
		 inline static std::shared_ptr<spdlog::logger>s_ClientLogger;
	};

}
#define TENGU_CORE_ERROR(...) Tengu::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define TENGU_CORE_WARN(...)  Tengu::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define TENGU_CORE_INFO(...)  Tengu::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define TENGU_CORE_TRACE(...) Tengu::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define TENGU_CORE_FATAL(...) Tengu::Logger::GetCoreLogger()->fatal(__VA_ARGS__)