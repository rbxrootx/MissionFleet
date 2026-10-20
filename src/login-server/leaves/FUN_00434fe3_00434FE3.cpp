// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434FE3 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00434fe3_00434FE3() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 26: je 0x435011
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x435011
        __asm _emit 0x74
        __asm _emit 0x1f
        push eax
        ; Exact mapped bytes FF 15 CC C4 43 00: call dword ptr [0x43c4cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x435011
        __asm _emit 0x74
        __asm _emit 0x12
        push -1
        push 0
        push 0b1h
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 3E F4 FF FF: call 0x434454
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
