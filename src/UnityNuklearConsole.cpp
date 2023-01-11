#include "NuklearConsole.h"

static NuklearConsole* g_nuklearCosnole = nullptr;

//Need to initialize manually app or it maybe try to register the app before loader initialized
extern "C" void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API InitializeConsole()
{
	if(!g_nuklearCosnole)
	{
		g_nuklearCosnole = new NuklearConsole();
		UnityNuklearLoader::RegisterNuklearApp(g_nuklearCosnole);
	}
}

extern "C" void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API SetOpen(bool isOpen)
{
	g_nuklearCosnole->SetOpen(isOpen);
}

// Default callbacks for Plugin load/unloads, don't initialize at here!
void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API UnityPluginLoad(IUnityInterfaces* unityInterfaces)
{
}

void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API UnityPluginUnload()
{
}
