// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4B90 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_587c4b90() {
    __asm {
        ; Exact mapped bytes 0F B6 44 24 04: movzx eax, byte ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B3 CF 1A 00: call 0x58971b52
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
