// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F1FF .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5884f1ff() {
    __asm {
        ; Exact mapped bytes E8 B3 16 00 00: call 0x588508b7
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 03: jne 0x5884f20b
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 EE 04 00 00: call 0x5884f6fe
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x5884f21b
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 DA 16 00 00: call 0x588508f3
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB ED: jmp 0x5884f208
        __asm _emit 0xeb
        __asm _emit 0xed
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
