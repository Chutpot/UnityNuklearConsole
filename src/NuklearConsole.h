#pragma once

#include "..\3rdparty\UnityNuklearLoader\UnityNuklearLoader.h"
#include <string>

class NuklearConsole : public NuklearApp
{
public:
	NuklearConsole();
	~NuklearConsole();
	void UNITY_INTERFACE_EXPORT Render(nk_context* context);
	void SetOpen(bool isOpen);
private:
	bool m_isOpen;
	std::string* m_buffer;
	inline static int m_size = 255;
	int m_length;
};
