// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EA0383 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58ea0383() {
    __asm {
        ; Exact mapped bytes 0F 85 1A 0F 03 00: jne 0x58ed12a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 BF B4 0F: mov di, 0xfb4
        __asm _emit 0x66
        __asm _emit 0xbf
        __asm _emit 0xb4
        __asm _emit 0x0f
        ; Exact mapped bytes 0F BF FC: movsx edi, sp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfc
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 D0 EF 02 00: jmp 0x58ecf36c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
