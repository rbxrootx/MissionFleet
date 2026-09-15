
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0044FA55()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm lea eax, [ebp + 0x14]
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm mov dx, word ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call dword ptr [edx + 0x64]
    __asm mov dword ptr [ebp - 4], 0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
