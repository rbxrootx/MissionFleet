// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043376E .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0043376e_0043376E() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 17: je 0x43378c
        __asm _emit 0x74
        __asm _emit 0x17
        push dword ptr [esp + 8]
        push dword ptr [esp + 8]
        push dword ptr [esp + 0ch]
        ; Exact mapped bytes E8 14 01 00 00: call 0x43389a
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A3 00 00 00: call 0x43382f
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
