// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D6F58A .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58d6f58a() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 66 0F CE: bswap si
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xce
        ; Exact mapped bytes 9C: pushfd
        __asm _emit 0x9c
        ; Exact mapped bytes 66 BE 39 7C: mov si, 0x7c39
        __asm _emit 0x66
        __asm _emit 0xbe
        __asm _emit 0x39
        __asm _emit 0x7c
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes 0F B7 F9: movzx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xf9
        ; Exact mapped bytes 66 0F 41 FA: cmovno di, dx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x41
        __asm _emit 0xfa
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes E9 D8 DD EE FF: jmp 0x58c5d37b
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xdd
        __asm _emit 0xee
        __asm _emit 0xff
    }
}
