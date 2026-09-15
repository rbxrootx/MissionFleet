extern "C" void Call00564786();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00564D0C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0xdc], 0
    __asm je loc_00564D2D
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ecx + 0xdc]
    __asm call Call00564786
loc_00564D2D:
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0xe0], 0
    __asm je loc_00564D47
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xe0]
    __asm call Call00564786
loc_00564D47:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
