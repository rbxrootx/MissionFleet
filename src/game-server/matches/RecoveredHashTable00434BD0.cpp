// Exact recovered hash/table primitive.
extern "C" __declspec(naked) void Recovered00434BD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], 0cccccccch
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-8], ecx
    __asm mov dword ptr [ebp-4], 0
    __asm jmp short test_index
    __asm next_index:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm test_index:
    __asm cmp dword ptr [ebp-4], 65536
    __asm jge table_done
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov dword ptr [edx+ecx*4], 0
    __asm jmp short next_index
    __asm table_done:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
