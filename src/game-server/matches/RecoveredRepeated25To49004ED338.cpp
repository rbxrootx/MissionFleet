
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004ED338()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 4]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [ecx]
    __asm add esp, 8
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
