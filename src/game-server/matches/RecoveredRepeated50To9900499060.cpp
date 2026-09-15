extern "C" void Call004990A0();
extern "C" void Call0049AA40();
extern "C" void Call0049AA70();
extern "C" void Call0049AB80();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00499060()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0049AA70
    __asm test eax, eax
    __asm je loc_0049908E
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004990A0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0049AA40
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 4
    __asm call Call0049AB80
loc_0049908E:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
