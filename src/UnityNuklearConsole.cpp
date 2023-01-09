#include <Windows.h>
#include "NuklearConsole.h"

extern NuklearConsole* g_nuklearCosnole = nullptr;


//Need to initialize manually all apps or it maybe try to register app before loader initialized
extern "C" void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API InitializeConsole()
{
	g_nuklearCosnole = new NuklearConsole();
	UnityNuklearLoader::RegisterNuklearApp(g_nuklearCosnole);
}

// Default callbacks for Plugin load/unloads, don't initialize at here!
void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API UnityPluginLoad(IUnityInterfaces* unityInterfaces)
{
}

void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API UnityPluginUnload()
{
}

