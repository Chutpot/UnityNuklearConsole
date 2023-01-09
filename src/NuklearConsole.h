#ifndef _NUKLEAR_CONSOLE_H_
#define _NUKLEAR_CONSOLE_H_

#include "..\3rdparty\UnityNuklearLoader\UnityNuklearLoader.h"

class NuklearConsole : public NuklearApp
{
public:
	NuklearConsole();
	~NuklearConsole();
	void UNITY_INTERFACE_EXPORT Render(nk_context* context);
private:

};



#endif // !_NUKLEAR_CONSOLE_H_
