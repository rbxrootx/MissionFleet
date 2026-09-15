extern "C" void Call004F1872();
extern "C" void Call004F5B75();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004F336A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ecx + 8]
    __asm push edx
    __asm call Call004F5B75
    __asm test eax, eax
    __asm je loc_004F338C
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004F3394
loc_004F338C:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call004F1872
loc_004F3394:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
