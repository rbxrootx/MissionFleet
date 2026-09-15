extern "C" void Call0049CEA0();
extern "C" void Call0049DA9F();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0049E985()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm jmp loc_0049E996
loc_0049E98D:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm add eax, 0x10
    __asm mov dword ptr [ebp + 0xc], eax
loc_0049E996:
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm sub edx, 1
    __asm mov dword ptr [ebp + 0x10], edx
    __asm test ecx, ecx
    __asm je loc_0049E9C5
    __asm sub esp, 0x10
    __asm mov ecx, esp
    __asm mov dword ptr [ebp - 4], esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm call Call0049CEA0
    __asm mov dword ptr [ebp - 8], eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call0049DA9F
    __asm jmp loc_0049E98D
loc_0049E9C5:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
