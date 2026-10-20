// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1AAD .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_004d1aad_004D1AAD() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 00 18 00 00: push 0x1800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 51 68 00: push 0x685118
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF 3D F9 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3d
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
