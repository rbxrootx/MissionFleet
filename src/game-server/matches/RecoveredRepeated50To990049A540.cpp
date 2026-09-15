extern "C" void Call00499800();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0049A540()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00499800
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 0x1c], 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x24], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0x10], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
