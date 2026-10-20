// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831AF0 .. +0x2B bytes.
extern "C" __declspec(naked) void __alloca_probe_58831AF0() {
    __asm {
        push ecx
        lea ecx, [esp + 4]
        sub ecx, eax
        sbb eax, eax
        not eax
        and ecx, eax
        mov eax, esp
        and eax, 0fffff000h
        cmp ecx, eax
        ; Exact mapped bytes 72 0A: jb 0x58831b12
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, ecx
        pop ecx
        xchg esp, eax
        mov eax, dword ptr [eax]
        mov dword ptr [esp], eax
        ret
        sub eax, 1000h
        test dword ptr [eax], eax
        ; Exact mapped bytes EB E9: jmp 0x58831b04
        __asm _emit 0xeb
        __asm _emit 0xe9
    }
}
