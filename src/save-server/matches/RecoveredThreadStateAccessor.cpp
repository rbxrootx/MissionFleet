// ECX supplies the thread-local storage wrapper. EAX returns its state pointer.
// Preserve the original debug assertion and breakpoint path, including its loop.
extern "C" void Factory0053D720();
extern "C" void Target00543A5C();
extern "C" char Data00671FE0;
extern "C" void Assert00528D40();
extern "C" __declspec(naked) void *Recovered0053D630()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm push offset Factory0053D720
    __asm mov ecx, dword ptr [ebp-8]
    __asm call Target00543A5C
    __asm mov dword ptr [ebp-4], eax
    __asm check_state:
    __asm cmp dword ptr [ebp-4], 0
    __asm jne assertion_done
    __asm push 0aeh
    __asm push offset Data00671FE0
    __asm call Assert00528D40
    __asm test eax, eax
    __asm je assertion_done
    __asm int 3
    __asm assertion_done:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne check_state
    __asm mov eax, dword ptr [ebp-4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
