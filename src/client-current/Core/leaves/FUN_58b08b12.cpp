// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B08B12 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58b08b12() {
    __asm {
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes C1 FE A6: sar esi, 0xa6
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xa6
        ; Exact mapped bytes 85 F7: test edi, esi
        __asm _emit 0x85
        __asm _emit 0xf7
        ; Exact mapped bytes F6 C2 0C: test dl, 0xc
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x0c
        ; Exact mapped bytes 9D: popfd
        __asm _emit 0x9d
        ; Exact mapped bytes 0F CF: bswap edi
        __asm _emit 0x0f
        __asm _emit 0xcf
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 0F BF FA: movsx edi, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfa
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 48 4B 43 00: jmp 0x58f3d671
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x4b
        __asm _emit 0x43
        __asm _emit 0x00
    }
}
