// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588404A2 .. +0x475 bytes.
extern "C" __declspec(naked) void FUN_588404a2_588404A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push edi
        push 4
        pop eax
        imul eax, eax, 0
        cmp dword ptr [eax + 589693b8h], 0
        ; Exact mapped bytes 0F 85 92 03 00 00: jne 0x5884085c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 44h], 0
        xor eax, eax
        lea edi, [ebp - 40h]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov eax, 1
        cpuid
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 40h], ebx
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], edx
        xor eax, eax
        inc eax
        imul eax, eax, 0
        ; Exact mapped bytes 0F BE 80 F0 94 96 58: movsx eax, byte ptr [eax + 0x589694f0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0xf0
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58840502
        __asm _emit 0x75
        __asm _emit 0x08
        push 0
        ; Exact mapped bytes E8 6A 67 00 00: call 0x58846c6b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push 4
        pop eax
        imul eax, eax, 0
        push 4
        pop ecx
        shl ecx, 1
        mov eax, dword ptr [ebp + eax - 44h]
        xor eax, dword ptr [ebp + ecx - 44h]
        push 4
        pop ecx
        imul ecx, ecx, 0
        mov dword ptr [ecx + 589693b8h], eax
        push 589694f0h
        ; Exact mapped bytes E8 CC BD FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 4
        pop ecx
        shl ecx, 0
        mov dword ptr [ecx + 589693b8h], eax
        mov byte ptr [ebp - 34h], 0
        xor eax, eax
        lea edi, [ebp - 33h]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        lea eax, [ebp - 34h]
        push eax
        push 589693c8h
        ; Exact mapped bytes E8 C0 03 00 00: call 0x58840917
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        xor eax, eax
        inc eax
        imul eax, eax, 0
        ; Exact mapped bytes 0F BE 80 C8 93 96 58: movsx eax, byte ptr [eax + 0x589693c8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0xc8
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58840581
        __asm _emit 0x74
        __asm _emit 0x17
        push 589693c8h
        ; Exact mapped bytes E8 83 BD FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 4
        pop ecx
        imul ecx, ecx, 3
        mov dword ptr [ecx + 589693b8h], eax
        push 0
        push 0
        push 3
        push 0
        push 3
        push 0c0000000h
        push 588f304ch
        ; Exact mapped bytes E8 B9 BD FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 290h], eax
        cmp dword ptr [ebp - 290h], -1
        ; Exact mapped bytes 0F 84 A7 02 00 00: je 0x5884085c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 294h], 0
        and dword ptr [ebp - 298h], 0
        mov byte ptr [ebp - 1ch], 0
        xor eax, eax
        lea edi, [ebp - 1bh]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        cmp dword ptr [ebp - 294h], 0
        ; Exact mapped bytes 0F 85 75 01 00 00: jne 0x58840753
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        push 0
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 25 C8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 50h], 0
        and dword ptr [ebp - 4ch], 0
        push 8
        push 0
        lea eax, [ebp - 2b4h]
        push eax
        ; Exact mapped bytes E8 0A C8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        lea eax, [ebp - 298h]
        push eax
        push 8
        lea eax, [ebp - 2b4h]
        push eax
        push 0ch
        lea eax, [ebp - 50h]
        push eax
        push 2d1400h
        push dword ptr [ebp - 290h]
        ; Exact mapped bytes FF 15 F8 41 89 58: call dword ptr [0x588941f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x58840753
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 CB 8F 01 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 28ch], eax
        cmp dword ptr [ebp - 28ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58840753
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 298h]
        push eax
        push dword ptr [ebp - 2b0h]
        push dword ptr [ebp - 28ch]
        push 0ch
        lea eax, [ebp - 50h]
        push eax
        push 2d1400h
        push dword ptr [ebp - 290h]
        ; Exact mapped bytes FF 15 F8 41 89 58: call dword ptr [0x588941f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x58840747
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28ch]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x58840726
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28ch]
        mov ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 2ach], ecx
        push 14h
        push dword ptr [ebp - 2ach]
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 CD C1 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 14h
        mov dword ptr [ebp - 29ch], eax
        cmp dword ptr [ebp - 29ch], 15h
        ; Exact mapped bytes 73 02: jae 0x588406dd
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x588406e2
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 C7 0A FF FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 29ch]
        mov byte ptr [ebp + eax - 1ch], 0
        push 14h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 C6 18 00 00: call 0x58841fbe
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push 14h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 53 45 00 00: call 0x58844c58
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 E7 BB FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 4
        pop ecx
        shl ecx, 1
        mov dword ptr [ecx + 589693b8h], eax
        mov dword ptr [ebp - 294h], 1
        mov eax, dword ptr [ebp - 28ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 15: je 0x58840747
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 28ch]
        mov ecx, dword ptr [ebp - 28ch]
        add ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 2b8h], ecx
        push dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 AE 8E 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp dword ptr [ebp - 294h], 0
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x58840850
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 21h
        push 0
        lea eax, [ebp - 74h]
        push eax
        ; Exact mapped bytes E8 A3 C6 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 210h
        push 0
        lea eax, [ebp - 284h]
        push eax
        ; Exact mapped bytes E8 8D C6 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 6bh], 0a0h
        mov byte ptr [ebp - 6ah], 0ech
        mov byte ptr [ebp - 68h], 0
        mov byte ptr [ebp - 6fh], 1
        mov byte ptr [ebp - 6eh], 1
        mov dword ptr [ebp - 74h], 200h
        push 0
        lea eax, [ebp - 2bch]
        push eax
        push 210h
        lea eax, [ebp - 284h]
        push eax
        push 21h
        lea eax, [ebp - 74h]
        push eax
        push 7c088h
        push dword ptr [ebp - 290h]
        ; Exact mapped bytes FF 15 F8 41 89 58: call dword ptr [0x588941f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x58840850
        __asm _emit 0x74
        __asm _emit 0x7f
        lea eax, [ebp - 274h]
        mov dword ptr [ebp - 2a0h], eax
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes 0F BE 44 01 14: movsx eax, byte ptr [ecx + eax + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x58840850
        __asm _emit 0x74
        __asm _emit 0x5e
        push 14h
        mov eax, dword ptr [ebp - 2a0h]
        add eax, 14h
        push eax
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 89 C0 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 14h
        mov dword ptr [ebp - 2a4h], eax
        cmp dword ptr [ebp - 2a4h], 15h
        ; Exact mapped bytes 73 02: jae 0x58840821
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x58840826
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 83 09 FF FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2a4h]
        mov byte ptr [ebp + eax - 1ch], 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 BD BA FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 4
        pop ecx
        shl ecx, 1
        mov dword ptr [ecx + 589693b8h], eax
        mov dword ptr [ebp - 294h], 1
        push dword ptr [ebp - 290h]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 67: je 0x588408c9
        __asm _emit 0x74
        __asm _emit 0x67
        movzx eax, byte ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58840873
        __asm _emit 0x74
        __asm _emit 0x09
        and dword ptr [ebp - 2a8h], 0
        ; Exact mapped bytes EB 11: jmp 0x58840884
        __asm _emit 0xeb
        __asm _emit 0x11
        push 4
        pop eax
        shl eax, 1
        mov eax, dword ptr [eax + 589693b8h]
        mov dword ptr [ebp - 2a8h], eax
        push 4
        pop eax
        imul eax, eax, 3
        push dword ptr [eax + 589693b8h]
        push dword ptr [ebp - 2a8h]
        push 4
        pop eax
        shl eax, 0
        push dword ptr [eax + 589693b8h]
        push 4
        pop eax
        imul eax, eax, 0
        push dword ptr [eax + 589693b8h]
        push 588f3064h
        ; Exact mapped bytes E8 9B BA FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push -1
        push 24h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 62 00 00: call 0x58846b96
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x588408e3
        __asm _emit 0x74
        __asm _emit 0x14
        push -1
        push 589693c8h
        push 18h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F9 62 00 00: call 0x58846bd9
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push 4
        pop eax
        shl eax, 1
        cmp dword ptr [eax + 589693b8h], 0
        ; Exact mapped bytes 74 09: je 0x588408fa
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [ebp - 285h], 1
        ; Exact mapped bytes EB 07: jmp 0x58840901
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp - 285h], 0
        mov al, byte ptr [ebp - 285h]
        pop edi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3D 07 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
