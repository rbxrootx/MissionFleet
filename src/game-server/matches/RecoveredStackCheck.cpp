// Compiler helper: consume ZF from the caller's preceding stack comparison.
// No prologue may run before the branch. Preserve the original saved registers
// and CRT diagnostic path; this helper does not take ordinary C arguments.
extern "C" char Data0058B9CC;
extern "C" char Data0058B9C8;
extern "C" char Data0058B9B8;
extern "C" void Report004B0B30();

extern "C" __declspec(naked) void _chkesp()
{
    __asm jne stack_mismatch
    __asm ret
    __asm stack_mismatch:
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0
    __asm push eax
    __asm push edx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm push offset Data0058B9CC
    __asm push offset Data0058B9C8
    __asm push 2ah
    __asm push offset Data0058B9B8
    __asm push 1
    __asm call Report004B0B30
    __asm add esp, 14h
    __asm cmp eax, 1
    __asm jne restore_registers
    __asm int 3
    __asm restore_registers:
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm pop edx
    __asm pop eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
