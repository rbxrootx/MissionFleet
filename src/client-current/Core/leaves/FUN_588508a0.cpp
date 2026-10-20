// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588508A0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_588508a0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 08: mov ebp, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 74 24 14: push dword ptr [esp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 A0 FE FF FF: call 0x58850750
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
