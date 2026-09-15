extern "C" void Call004D9EB0();
extern "C" void Call0054AF38();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054BD50()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AF38
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_0054BD72
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004D9EB0
loc_0054BD72:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
