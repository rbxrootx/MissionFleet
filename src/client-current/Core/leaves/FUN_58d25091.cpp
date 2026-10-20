// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D25091 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58d25091() {
    __asm {
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 0F BF F2: movsx esi, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes E9 C2 F9 E0 FF: jmp 0x58b34a5d
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
    }
}
