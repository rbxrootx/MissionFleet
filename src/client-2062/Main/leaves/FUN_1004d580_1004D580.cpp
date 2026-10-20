// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D580 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_1004d580_1004D580() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
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
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 32 10 01 80: push 0x80011032
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes E8 B9 E9 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
