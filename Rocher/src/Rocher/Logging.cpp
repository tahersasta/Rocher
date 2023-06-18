#include "Logging.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace Rocher
{
	std::shared_ptr<spdlog::logger> Logging::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Logging::s_ClientLogger;

	void Logging::Init()
	{
		spdlog::set_pattern("%^ [%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("HAZEL");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}