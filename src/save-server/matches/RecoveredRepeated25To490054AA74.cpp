extern "C" void Call0054AA07();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0054AA74()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 8], 0
    __asm je loc_0054AA98
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 8]
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 8]
    __asm mov eax, dword ptr [ecx]
    __asm push edx
    __asm call dword ptr [eax + 8]
    __asm jmp loc_0054AAA0
loc_0054AA98:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AA07
loc_0054AAA0:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
