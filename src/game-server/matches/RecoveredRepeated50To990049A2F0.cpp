extern "C" void Call0049A1E0();
extern "C" void Call0049A3D0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0049A2F0()
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
    __asm je loc_0049A31A
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0049A3D0
    __asm jmp loc_0049A31C
loc_0049A31A:
    __asm xor eax, eax
loc_0049A31C:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
