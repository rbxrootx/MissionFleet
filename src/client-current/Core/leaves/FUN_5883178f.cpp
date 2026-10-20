// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883178F .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5883178f() {
    __asm {
        ; Exact mapped bytes E8 8A DA 01 00: call 0x5884f21e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 03: jne 0x5883179b
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 32 46 03 00: call 0x58865dd2
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x588317ab
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 80 DA 01 00: call 0x5884f229
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB ED: jmp 0x58831798
        __asm _emit 0xeb
        __asm _emit 0xed
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
