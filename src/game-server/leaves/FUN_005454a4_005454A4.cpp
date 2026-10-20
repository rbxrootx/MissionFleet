// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005454A4 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_005454a4_005454A4() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 97 FF FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 81 C1 70 10 00 00: add ecx, 0x1070
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D7 E2 FF FF: call 0x543790
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
