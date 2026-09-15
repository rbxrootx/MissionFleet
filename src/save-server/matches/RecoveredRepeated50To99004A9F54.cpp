extern "C" void Call004ADB39();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004A9F54()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x24
    __asm mov dword ptr [ebp - 0x24], ecx
    __asm mov dword ptr [ebp - 0x20], 5
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ebp - 0x14], eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov dword ptr [ebp - 0x1c], ecx
    __asm cmp dword ptr [ebp + 0x14], -1
    __asm je loc_004A9F85
    __asm mov edx, dword ptr [ebp - 0x20]
    __asm or edx, 2
    __asm mov dword ptr [ebp - 0x20], edx
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm mov dword ptr [ebp - 0x18], eax
loc_004A9F85:
    __asm cmp dword ptr [ebp + 0x18], -1
    __asm je loc_004A9F9A
    __asm mov ecx, dword ptr [ebp - 0x20]
    __asm or ecx, 8
    __asm mov dword ptr [ebp - 0x20], ecx
    __asm mov edx, dword ptr [ebp + 0x18]
    __asm mov dword ptr [ebp - 0xc], edx
loc_004A9F9A:
    __asm lea eax, [ebp - 0x20]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 0x24]
    __asm call Call004ADB39
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x14
}
