// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004233DF .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004233df_004233DF() {
    __asm {
        ; Exact mapped bytes A1 5C 10 45 00: mov eax, dword ptr [0x45105c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        lea ecx, [eax + eax*4]
        ; Exact mapped bytes A1 60 10 45 00: mov eax, dword ptr [0x451060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        lea ecx, [eax + ecx*4]
        cmp eax, ecx
        ; Exact mapped bytes 73 14: jae 0x423407
        __asm _emit 0x73
        __asm _emit 0x14
        mov edx, dword ptr [esp + 4]
        sub edx, dword ptr [eax + 0ch]
        cmp edx, 100000h
        ; Exact mapped bytes 72 07: jb 0x423409
        __asm _emit 0x72
        __asm _emit 0x07
        add eax, 14h
        ; Exact mapped bytes EB E8: jmp 0x4233ef
        __asm _emit 0xeb
        __asm _emit 0xe8
        xor eax, eax
        ret
    }
}
