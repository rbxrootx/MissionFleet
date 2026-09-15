extern "C" void *Data0068BF5C;
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005326BA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm neg eax
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm neg ecx
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm push edx
    __asm call dword ptr [Data0068BF5C]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
