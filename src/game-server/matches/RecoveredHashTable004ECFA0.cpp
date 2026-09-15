// Exact recovered hash/table primitive.
extern "C" __declspec(naked) void Recovered004ECFA0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov dword ptr [ebp-4], 0
    __asm hash_loop:
    __asm mov eax, dword ptr [ebp+8]
    __asm movsx ecx, byte ptr [eax]
    __asm test ecx, ecx
    __asm je hash_done
    __asm mov edx, dword ptr [ebp-4]
    __asm shl edx, 5
    __asm add edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm movsx ecx, byte ptr [eax]
    __asm add edx, ecx
    __asm mov dword ptr [ebp-4], edx
    __asm mov edx, dword ptr [ebp+8]
    __asm add edx, 1
    __asm mov dword ptr [ebp+8], edx
    __asm jmp short hash_loop
    __asm hash_done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
