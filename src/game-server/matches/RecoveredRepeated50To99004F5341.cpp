extern "C" void Call004F5146();
extern "C" void Call004F52A1();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004F5341()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x2c
    __asm mov dword ptr [ebp - 0x28], ecx
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm lea ecx, [ebp - 0x24]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm mov ecx, dword ptr [ebp - 0x28]
    __asm call Call004F5146
    __asm push 2
    __asm lea eax, [ebp - 0x20]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 0x28]
    __asm call Call004F52A1
    __asm test eax, eax
    __asm je loc_004F5399
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm sub edx, 1
    __asm test edx, edx
    __asm jbe loc_004F5389
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm sub eax, 1
    __asm mov dword ptr [ebp - 0x2c], eax
    __asm jmp loc_004F5390
loc_004F5389:
    __asm mov dword ptr [ebp - 0x2c], 0
loc_004F5390:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm sub ecx, dword ptr [ebp - 0x2c]
    __asm mov dword ptr [ebp - 4], ecx
loc_004F5399:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
