// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439134 .. +0x23 bytes.
extern "C" __declspec(naked) void _AfxPostQuitMessage__YGXH_Z_00439134() {
    __asm {
        ; Exact mapped bytes E8 92 8E FF FF: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x43914a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x43914a
        __asm _emit 0x74
        __asm _emit 0x06
        push 1
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push dword ptr [esp + 4]
        ; Exact mapped bytes FF 15 40 C5 43 00: call dword ptr [0x43c540]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
