// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F36D5F .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58f36d5f() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 FD F3 23 7C 37: cmp ebp, 0x377c23f3
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0x23
        __asm _emit 0x7c
        __asm _emit 0x37
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 80 FF 6D: cmp bh, 0x6d
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0x6d
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 3B DC: cmp ebx, esp
        __asm _emit 0x3b
        __asm _emit 0xdc
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes E9 B3 2C BC FF: jmp 0x58af9a29
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x2c
        __asm _emit 0xbc
        __asm _emit 0xff
    }
}
