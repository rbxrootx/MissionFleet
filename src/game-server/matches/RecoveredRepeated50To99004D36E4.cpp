extern "C" void Call004D3720();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004D36E4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x3c]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm je loc_004D371A
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x3c]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004D3720
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004D3720
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0x3c], eax
loc_004D371A:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
