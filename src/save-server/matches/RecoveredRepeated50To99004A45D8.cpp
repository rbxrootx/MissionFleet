
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004A45D8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x90]
    __asm and ecx, 0x80000
    __asm test ecx, ecx
    __asm je loc_004A4600
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx + 0xa4], eax
    __asm jmp loc_004A460C
loc_004A4600:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [ecx + 0xa4], edx
loc_004A460C:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x90]
    __asm or ecx, 0x40
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x90], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
