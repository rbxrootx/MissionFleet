
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0051587A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [edx + 0xd8]
    __asm test eax, eax
    __asm je loc_0051589D
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [eax + 0x78]
    __asm jmp loc_005158C5
loc_0051589D:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x70], 0
    __asm je loc_005158BB
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x70]
    __asm cmp dword ptr [eax + 0x78], 0
    __asm je loc_005158BB
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_005158C2
loc_005158BB:
    __asm mov dword ptr [ebp - 8], 0
loc_005158C2:
    __asm mov eax, dword ptr [ebp - 8]
loc_005158C5:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
