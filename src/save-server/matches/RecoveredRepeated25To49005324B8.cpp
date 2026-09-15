extern "C" void *Data0068BEAC;
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered005324B8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call dword ptr [Data0068BEAC]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
