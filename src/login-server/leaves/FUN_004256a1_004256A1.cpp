// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004256A1 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004256a1_004256A1() {
    __asm {
        push 44005ch
        ; Exact mapped bytes FF 15 04 C2 43 00: call dword ptr [0x43c204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4256c5
        __asm _emit 0x74
        __asm _emit 0x15
        push 440040h
        push eax
        ; Exact mapped bytes FF 15 FC C1 43 00: call dword ptr [0x43c1fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4256c5
        __asm _emit 0x74
        __asm _emit 0x05
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
        ; Exact mapped bytes E9 99 FF FF FF: jmp 0x425663
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
