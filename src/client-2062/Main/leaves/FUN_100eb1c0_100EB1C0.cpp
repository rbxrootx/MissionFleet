// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EB1C0 .. +0x185 bytes.
extern "C" __declspec(naked) void FUN_100eb1c0_100EB1C0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        sub esp, 104h
        mov eax, dword ptr [edx]
        push esi
        mov esi, ecx
        push edi
        mov ecx, eax
        and ecx, 3
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x100eb27e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 2
        mov ecx, dword ptr [esi + 5c0ch]
        lea edi, [esi + 5c28h]
        and eax, 7fffh
        push edi
        mov dword ptr [edi], eax
        mov eax, dword ptr [edx]
        shr eax, 11h
        mov dword ptr [esi + 5c2ch], eax
        ; Exact mapped bytes E8 EE 27 F2 FF: call 0x1000d9f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x100eb31a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c0ch]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [eax + 84h]
        mov eax, dword ptr [esi + 5c2ch]
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esi + 37ch]
        push ecx
        mov ecx, dword ptr [eax + 10474h]
        push edx
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 28h]
        push 101ac408h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 24h
        lea ecx, [esp + 8]
        lea edx, [esp + 0ch]
        push 0
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 18h]
        push eax
        push ecx
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x100eb314
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x100eb31a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 2
        push eax
        ; Exact mapped bytes E8 3A 0F F4 FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c0ch]
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 8C 27 F2 FF: call 0x1000da30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 6D: je 0x100eb31a
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 5c0ch]
        add edi, 37ch
        lea ecx, [esi + 37ch]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [eax + 84h]
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push ecx
        lea ecx, [esp + 1ch]
        mov edx, dword ptr [eax + 10474h]
        mov eax, dword ptr [eax + 1047ch]
        push edx
        push eax
        push 101ac3cch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 20h
        lea edx, [esp + 8]
        lea eax, [esp + 0ch]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 14h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0e9ch]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x100eb33a
        __asm _emit 0x74
        __asm _emit 0x16
        lea eax, [esi + 5c28h]
        lea ecx, [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 5c04h]
        ; Exact mapped bytes E8 16 93 F2 FF: call 0x10014650
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x93
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
