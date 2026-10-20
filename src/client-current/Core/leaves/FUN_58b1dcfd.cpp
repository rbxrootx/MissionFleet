// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B1DCFD .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58b1dcfd() {
    __asm {
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 87 D6 42 00: call 0x58f4b38b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd6
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 0F CE: bswap esi
        __asm _emit 0x0f
        __asm _emit 0xce
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 0F BF FA: movsx edi, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfa
        ; Exact mapped bytes 66 87 FF: xchg di, di
        __asm _emit 0x66
        __asm _emit 0x87
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 44 A7 43 00: jmp 0x58f5845b
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xa7
        __asm _emit 0x43
        __asm _emit 0x00
    }
}
