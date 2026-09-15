extern "C" void *Data0043C248;
extern "C" void *Data0043C250;
extern "C" void *Data0043C254;
extern "C" void *Data0043C258;
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered0040769D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm push 0
    __asm push 0x80
    __asm push 3
    __asm push 0
    __asm push 1
    __asm push 0x80000000
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm add eax, 4
    __asm push eax
    __asm call dword ptr [Data0043C250]
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], -1
    __asm je loc_00407708
    __asm push 0
    __asm push 0
    __asm mov ecx, dword ptr [ebp + 8]
    __asm add ecx, 0x48
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm push edx
    __asm call dword ptr [Data0043C248]
    __asm push 0
    __asm lea eax, [ebp - 0xc]
    __asm push eax
    __asm push 4
    __asm lea ecx, [ebp - 8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm push edx
    __asm call dword ptr [Data0043C254]
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm call dword ptr [Data0043C258]
    __asm mov eax, dword ptr [ebp - 8]
    __asm jmp loc_0040770B
loc_00407708:
    __asm or eax, 0xffffffff
loc_0040770B:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
