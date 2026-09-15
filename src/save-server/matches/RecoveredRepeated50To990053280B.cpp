extern "C" void *Data0068BF5C;
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0053280B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x14
    __asm mov dword ptr [ebp - 0x14], ecx
    __asm mov eax, dword ptr [ebp - 0x14]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov edx, dword ptr [eax + 4]
    __asm mov dword ptr [ebp - 0xc], edx
    __asm mov ecx, dword ptr [eax + 8]
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov edx, dword ptr [eax + 0xc]
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm lea edx, [ebp - 0x10]
    __asm push edx
    __asm call dword ptr [Data0068BF5C]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [eax + 4], edx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 8], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
