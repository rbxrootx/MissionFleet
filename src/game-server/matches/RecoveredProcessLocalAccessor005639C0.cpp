// Retrieve process-local MFC data through the supplied factory and assert it exists.
extern "C" char Factory00563A10;
extern "C" void GetData00548B44();
extern "C" char File005C5AF0;
extern "C" void Assert00534A00();
extern "C" __declspec(naked) void *Recovered005639C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm push offset Factory00563A10
    __asm mov ecx, dword ptr [ebp-8]
    __asm call GetData00548B44
    __asm mov dword ptr [ebp-4], eax
    __asm check_data:
    __asm cmp dword ptr [ebp-4], 0
    __asm jne data_ready
    __asm push 0ceh
    __asm push offset File005C5AF0
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je data_ready
    __asm int 3
    __asm data_ready:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne check_data
    __asm mov eax, dword ptr [ebp-4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
