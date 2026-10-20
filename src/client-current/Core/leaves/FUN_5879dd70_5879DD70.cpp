// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DD70 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_5879dd70_5879DD70() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x5879de64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5879de63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 10h]
        push esi
        ; Exact mapped bytes E8 2E 20 00 00: call 0x5879fdc0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [edi], 0
        test byte ptr [esi + 78h], 2
        ; Exact mapped bytes 74 0F: je 0x5879ddb0
        __asm _emit 0x74
        __asm _emit 0x0f
        lea eax, [esi + 84h]
        push eax
        ; Exact mapped bytes E8 03 F1 00 00: call 0x587aceb0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        lea eax, [esi + 0bch]
        push eax
        push esi
        ; Exact mapped bytes E8 E3 49 00 00: call 0x587a27a0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 128h]
        push esi
        ; Exact mapped bytes E8 07 8C 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 124h]
        mov dword ptr [esi + 128h], 0
        push esi
        ; Exact mapped bytes E8 F1 8B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 12ch]
        push esi
        ; Exact mapped bytes E8 E5 8B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 130h]
        push esi
        ; Exact mapped bytes E8 D9 8B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 274h]
        mov dword ptr [esi + 124h], 0
        push esi
        mov dword ptr [esi + 12ch], 0
        mov dword ptr [esi + 130h], 0
        ; Exact mapped bytes E8 AF 8B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 1e0h]
        mov dword ptr [esi + 274h], 0
        push esi
        ; Exact mapped bytes E8 99 8B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 140h]
        mov dword ptr [esi + 1e0h], 0
        push esi
        ; Exact mapped bytes E8 83 8B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 40h
        mov dword ptr [esi + 140h], 0
        push esi
        ; Exact mapped bytes E8 E0 8A 00 00: call 0x587a6940
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop esi
        pop edi
        ret
    }
}
