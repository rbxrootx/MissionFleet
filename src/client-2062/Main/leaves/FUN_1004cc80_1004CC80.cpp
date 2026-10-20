// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CC80 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_1004cc80_1004CC80() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 06 0F 01 80: push 0x80010f06
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes E8 B6 F2 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
