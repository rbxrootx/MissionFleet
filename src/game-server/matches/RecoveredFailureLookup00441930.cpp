// Exact recovered failure callback/server lookup helper.
extern "C" __declspec(naked) void Recovered00441930()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], 0cccccccch
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-8], ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 65535
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ecx+eax*4]
    __asm mov dword ptr [ebp-4], edx
    __asm jmp short check_node
    __asm next_node:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+8]
    __asm mov dword ptr [ebp-4], ecx
    __asm check_node:
    __asm cmp dword ptr [ebp-4], 0
    __asm je missing
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm cmp eax, dword ptr [ebp+8]
    __asm jne retry_trampoline
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ecx+4]
    __asm jmp short finished
    __asm retry_trampoline:
    __asm jmp short next_node
    __asm missing:
    __asm xor eax, eax
    __asm finished:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
