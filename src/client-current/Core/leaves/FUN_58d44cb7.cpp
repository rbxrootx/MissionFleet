// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D44CB7 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_58d44cb7() {
    __asm {
        ; Exact mapped bytes 0F 82 57 80 FA FF: jb 0x58cecd14
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x57
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 EC FE FF FF: lea eax, [ebp - 0x114]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 4F FC FF: jmp 0x58d09c0d
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
    }
}
