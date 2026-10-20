// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449EB5 .. +0x34 bytes.
extern "C" __declspec(naked) void _AfxEnableControlContainer__YAXPAVCOccManager___Z_00449EB5() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 19: jne 0x449ed8
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, 686a40h
        ; Exact mapped bytes E8 17 15 00 00: call 0x44b3e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 93 67 0F 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [eax + 1038h], esi
        ; Exact mapped bytes EB 0E: jmp 0x449ee6
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes E8 86 67 0F 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1038h], ecx
        pop esi
        pop ebp
        ret
    }
}
