
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004CF04F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0
loc_004CF05A:
    __asm mov eax, dword ptr [ebp + 8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm test ecx, ecx
    __asm je loc_004CF087
    __asm mov edx, dword ptr [ebp - 4]
    __asm shl edx, 5
    __asm add edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm add edx, ecx
    __asm mov dword ptr [ebp - 4], edx
    __asm mov edx, dword ptr [ebp + 8]
    __asm add edx, 2
    __asm mov dword ptr [ebp + 8], edx
    __asm jmp loc_004CF05A
loc_004CF087:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
