// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D766 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_0043d766_0043D766() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 78 32 5D 00: mov ecx, 0x5d3278
        __asm _emit 0xb9
        __asm _emit 0x78
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 DD 26 00 00: call 0x43fe50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 66 B0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
