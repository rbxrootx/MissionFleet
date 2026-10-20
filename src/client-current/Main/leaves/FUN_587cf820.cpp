// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CF820 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_587cf820() {
    __asm {
        sub esp, 2ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 28h], eax
        mov edx, dword ptr [esp + 30h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0fch]
        xor eax, eax
        cmp ecx, 0c8h
        ; Exact mapped bytes 75 18: jne 0x587cf85d
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [esi + 0cch]
        mov ecx, dword ptr [esi + 0d0h]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes EB 1B: jmp 0x587cf878
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 64h
        ; Exact mapped bytes 75 1A: jne 0x587cf87c
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 0b8h]
        mov ecx, dword ptr [esi + 0bch]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [esp + 8], ecx
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        lea eax, [esp + 8]
        push eax
        add ecx, 4
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AC F5 FF FF: call 0x587cee40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 98h]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x587cf935
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x587cf935
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 75 08: jne 0x587cf8c2
        __asm _emit 0x75
        __asm _emit 0x08
        cmp ecx, dword ptr [esi + 94h]
        ; Exact mapped bytes 74 73: je 0x587cf935
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [esi + 0d0h]
        imul edx, eax
        push edi
        mov edi, dword ptr [esi + 0c8h]
        add edx, ecx
        cmp dword ptr [esi + 0fch], 64h
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 94h], ecx
        mov edx, dword ptr [edi + edx*4]
        mov dword ptr [esi + 104h], edx
        pop edi
        ; Exact mapped bytes 75 42: jne 0x587cf935
        __asm _emit 0x75
        __asm _emit 0x42
        imul eax, dword ptr [esp + 8]
        lea eax, [eax + ecx + 1]
        push eax
        push 5899b468h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 500h]
        add esp, 0ch
        lea edx, [esp + 0ch]
        push edx
        ; Exact mapped bytes E8 36 FA F8 FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 500h]
        ; Exact mapped bytes E8 DB F9 F8 FF: call 0x5875f310
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 99 D2 1A 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
