# ZeroCaliber_SDK
SDK for the game ZeroCaliber

Useful game info:
```
Objects:
0x2F844E8 (already in sdk)

TotalObjects: 
0x2F844FC (already in sdk)

GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 55
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x55 xxx????xxxxx

GWorld:
48 8B 1D ? ? ? ? 48 85 DB 74 3B 41
\x48\x8B\x1d\x00\x00\x00\x00\x48\x85\xDB\x74\x3B\x41 xxx????xxxxxx

ProcessEvent: 65
CreateDefaultObject: 102

void init_sdk()
{
	SDK::UObject::GObjects = 0;

	auto gname_addr = FindPattern("48 8B 05 ? ? ? ? 48 85 C0 75 55");
	auto offset = *reinterpret_cast<uint32_t*>(gname_addr + 3);
	SDK::FName::GNames = reinterpret_cast<decltype(SDK::FName::GNames)>(*reinterpret_cast<uintptr_t*>(gname_addr + 7 + offset));
}
```

Useful files:
- ZC_Basic.cpp
- ZC_Basic.hpp
- ZC_CoreUObject_classes.hpp
- ZC_CoreUObject_functions.cpp
- ZC_Engine_classes.hpp
- ZC_Engine_functions.cpp
- ZC_ZeroCaliber_classes.hpp
- ZC_ZeroCaliber_Functions.cpp
