extern "C" void Call0054A9D7();
extern "C" void Call0054AAA4();
extern "C" void Call0054AC71();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0054AD56()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AAA4
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ecx], eax
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm cmp dword ptr [edx], 0
    __asm je loc_0054AD82
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054A9D7
    __asm xor eax, eax
    __asm jmp loc_0054ADA4
loc_0054AD82:
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AC71
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ecx], eax
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm cmp dword ptr [edx], 0
    __asm je loc_0054AD9F
    __asm xor eax, eax
    __asm jmp loc_0054ADA4
loc_0054AD9F:
    __asm mov eax, 0x80004002
loc_0054ADA4:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
