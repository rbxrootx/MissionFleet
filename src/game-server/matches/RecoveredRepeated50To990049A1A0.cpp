extern "C" void Call0049A1E0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0049A1A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm lea eax, [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0049A1E0
    __asm and eax, 0xff
    __asm test eax, eax
    __asm je loc_0049A1CD
    __asm mov ecx, dword ptr [ebp + 8]
    __asm imul ecx, ecx, 0x30
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x10]
    __asm mov eax, dword ptr [eax + ecx]
    __asm jmp loc_0049A1CF
loc_0049A1CD:
    __asm xor eax, eax
loc_0049A1CF:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
