#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include<memory>
namespace Rocher
{


	class ROCHER_API Logging
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//CORE LOG MACROS
#define RC_CORE_ERROR(...)   ::Rocher::Logging::GetCoreLogger()->error(__VA_ARGS__)
#define RC_CORE_INFO(...)    ::Rocher::Logging::GetCoreLogger()->info(__VA_ARGS__)
#define RC_CORE_WARN(...)    ::Rocher::Logging::GetCoreLogger()->warn(__VA_ARGS__)
#define RC_CORE_TRACE(...)   ::Rocher::Logging::GetCoreLogger()->trace(__VA_ARGS__)
#define RC_CORE_FATAL(...)   ::Rocher::Logging::GetCoreLogger()->fatal(__VA_ARGS__)

//Client LOG MACROS
#define RC_ERROR(...)   ::Rocher::Logging::GetClientLogger()->error(__VA_ARGS__)
#define RC_INFO(...)    ::Rocher::Logging::GetClientLogger()->info(__VA_ARGS__)
#define RC_WARN(...)    ::Rocher::Logging::GetClientLogger()->warn(__VA_ARGS__)
#define RC_TRACE(...)   ::Rocher::Logging::GetClientLogger()->trace(__VA_ARGS__)
#define RC_FATAL(...)   ::Rocher::Logging::GetClientLogger()->fatal(__VA_ARGS__)