
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00569215()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0x1c
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [edx + 0x58]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
