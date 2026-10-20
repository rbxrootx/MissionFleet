// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B7517B .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58b7517b() {
    __asm {
        ; Exact mapped bytes 0F 83 5B 43 FA FF: jae 0x58b194dc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 80 3A 56: cmp byte ptr [edx], 0x56
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x56
        ; Exact mapped bytes E9 AC CF 1A 00: jmp 0x58d22135
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
    }
}
