// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004C870 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_1004c870_1004C870() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x1004c892
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esp + 0ch]
        inc edx
        push edx
        push eax
        push 0
        push 0
        push 800100f0h
        ; Exact mapped bytes E8 C1 F6 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1
        push 800100f0h
        ; Exact mapped bytes E8 AC F6 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
