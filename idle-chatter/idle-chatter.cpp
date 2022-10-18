#include <SADXModLoader.h>

static constexpr char pMax = 8;

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void OnFrame()
	{
		for (uint8_t i = 0; i < pMax; i++)
		{
			if (ControllerPointers[i]->PressedButtons & Buttons_Z)
			{
				CharObj2* player = GetCharObj2(i);

				if (player != nullptr && !EV_MainThread_ptr)
					player->IdleTime = 0x7FFF;
			}
		}
	}
}