// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F7D6 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0042f7d6_0042F7D6() {
    __asm {
        push esi
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 CD 75 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 C6 64 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 74 12: je 0x42f805
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42f805
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes FF 15 B0 C4 43 00: call dword ptr [0x43c4b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [esi + 2ch], 0
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 74 08: je 0x42f813
        __asm _emit 0x74
        __asm _emit 0x08
        and dword ptr [esi + 14h], 0
        xor eax, eax
        pop esi
        ret
        push 1
        pop eax
        pop esi
        ret
    }
}
