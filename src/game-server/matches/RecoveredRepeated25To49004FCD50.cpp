
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004FCD50()
{
    __asm push ebp
    __asm mov ebp, esp
loc_004FCD53:
    __asm mov eax, dword ptr [ebp + 8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm mov edx, dword ptr [ebp + 8]
    __asm add edx, 2
    __asm mov dword ptr [ebp + 8], edx
    __asm test ecx, ecx
    __asm je loc_004FCD6A
    __asm jmp loc_004FCD53
loc_004FCD6A:
    __asm mov eax, dword ptr [ebp + 8]
    __asm pop ebp
    __asm ret
}
