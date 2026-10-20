// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047900C .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_0047900c_0047900C() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 A0 CB 5D 00: mov ecx, 0x5dcba0
        __asm _emit 0xb9
        __asm _emit 0xa0
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 BC FF FF: call 0x474ce0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 C0 F7 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
