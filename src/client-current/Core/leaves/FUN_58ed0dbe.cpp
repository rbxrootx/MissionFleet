// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58ED0DBE .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58ed0dbe() {
    __asm {
        ; Exact mapped bytes 0F 82 99 14 C5 FF: jb 0x58b2225d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C1 C5 9B: rol ebp, 0x9b
        __asm _emit 0xc1
        __asm _emit 0xc5
        __asm _emit 0x9b
        ; Exact mapped bytes 66 FF CB: dec bx
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xcb
        ; Exact mapped bytes 66 2B F2: sub si, dx
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xf2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes 0F B7 ED: movzx ebp, bp
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xed
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 66 8B EE: mov bp, si
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xee
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 55 F2 E0 FF: jmp 0x58ce0033
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xe0
        __asm _emit 0xff
    }
}
