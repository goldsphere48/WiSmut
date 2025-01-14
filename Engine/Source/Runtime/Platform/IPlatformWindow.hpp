#pragma once
#include <string>

namespace Wi
{
	struct WindowDefinition
	{
		std::string Title;
		int PositionX;
		int PositionY;
		int Width;
		int Height;
	};

	class IPlatformWindow
	{
	public:
		virtual ~IPlatformWindow() = default;
		IPlatformWindow() = default;
		IPlatformWindow(const IPlatformWindow&) = delete;
		IPlatformWindow(IPlatformWindow&&) = delete;
		IPlatformWindow& operator=(const IPlatformWindow&) = delete;
		IPlatformWindow& operator=(IPlatformWindow&&) = delete;

		virtual unsigned int GetWidth() = 0;
		virtual unsigned int GetHeight() = 0;
		virtual void Destroy() = 0;
	};
}
