extern "C" void Call004A90D0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004A9094()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x3c]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm je loc_004A90CA
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x3c]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004A90D0
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004A90D0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0x3c], eax
loc_004A90CA:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
