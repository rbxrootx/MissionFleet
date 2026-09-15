
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004DBB10()
{
    __asm push ebp
    __asm mov ebp, esp
loc_004DBB13:
    __asm mov eax, dword ptr [ebp + 8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm mov edx, dword ptr [ebp + 8]
    __asm add edx, 2
    __asm mov dword ptr [ebp + 8], edx
    __asm test ecx, ecx
    __asm je loc_004DBB2A
    __asm jmp loc_004DBB13
loc_004DBB2A:
    __asm mov eax, dword ptr [ebp + 8]
    __asm pop ebp
    __asm ret
}
