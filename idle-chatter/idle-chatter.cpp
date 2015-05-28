#include <SADXModLoader.h>

DataArray(ControllerData, Controllers, 0x03B0E9C8, 8);

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void OnFrame()
	{
		if (Controllers[0].PressedButtons & Buttons_Z)
		{
			CharObj2* player = GetCharObj2(0);
			if (player != nullptr)
				player->IdleTime = 0x7FFF;
		}
	}
}
