#include <SADXModLoader.h>

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void OnFrame()
	{
		if (ControllerPointers[0]->PressedButtons & Buttons_Z)
		{
			CharObj2* player = GetCharObj2(0);
			if (player != nullptr)
				player->IdleTime = 0x7FFF;
		}
	}
}
