
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00422900()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x44
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm push ecx
    __asm lea edi, [ebp - 0x44]
    __asm mov ecx, 0x11
    __asm mov eax, 0xcccccccc
    __asm rep stosd
    __asm pop ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 0x10], 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 8], 0
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
