
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0056379B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0x70
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x5c], 0
    __asm jne loc_005637B8
    __asm mov eax, 0x8000ffff
    __asm jmp loc_005637D2
loc_005637B8:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x5c]
    __asm add ecx, 0x40
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x5c]
    __asm mov edx, dword ptr [eax + 0x40]
    __asm push ecx
    __asm call dword ptr [edx + 0x10]
loc_005637D2:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
