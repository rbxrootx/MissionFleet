// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437EC3 .. +0x3B bytes.
extern "C" __declspec(naked) void _GetClipboardOwner_COleDataSource__SGPAV1_XZ_00437EC3() {
    __asm {
        push esi
        push 437efeh
        mov ecx, 44fc60h
        ; Exact mapped bytes E8 75 EF FF FF: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x437ef5
        __asm _emit 0x74
        __asm _emit 0x19
        push 440880h
        ; Exact mapped bytes E8 EA F9 FF FF: call 0x4378d0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 18 C6 43 00: call dword ptr [0x43c618]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x437ef9
        __asm _emit 0x74
        __asm _emit 0x08
        and dword ptr [esi + 8], 0
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 8]
        pop esi
        ret
    }
}
