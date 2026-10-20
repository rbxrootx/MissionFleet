// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CA390 .. +0x326 bytes.
extern "C" __declspec(naked) void FUN_586ca390_586CA390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 EA 02 00 00: jne 0x586ca68d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 75 10: jne 0x586ca3c1
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 06 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CA 02 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 78h]
        ; Exact mapped bytes 75 4D: jne 0x586ca419
        __asm _emit 0x75
        __asm _emit 0x4d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 02 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca3eb
        __asm _emit 0x75
        __asm _emit 0x11
        push 1b1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 E3 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca3f8
        __asm _emit 0x74
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 06 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca414
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 F3 CD E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D E9 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 4D: jne 0x586ca471
        __asm _emit 0x75
        __asm _emit 0x4d
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 02 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca443
        __asm _emit 0x75
        __asm _emit 0x11
        push 281h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 E3 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca450
        __asm _emit 0x74
        __asm _emit 0x0d
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 06 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca46c
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 9B CD E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 05 E9 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1A 02 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 75 4D: jne 0x586ca4cc
        __asm _emit 0x75
        __asm _emit 0x4d
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 02 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca49e
        __asm _emit 0x75
        __asm _emit 0x11
        push 379h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 E2 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca4ab
        __asm _emit 0x74
        __asm _emit 0x0d
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 05 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca4c7
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 40 CD E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AA E8 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 75 4D: jne 0x586ca527
        __asm _emit 0x75
        __asm _emit 0x4d
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 01 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca4f9
        __asm _emit 0x75
        __asm _emit 0x11
        push 411h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B E2 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca506
        __asm _emit 0x74
        __asm _emit 0x0d
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 05 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca522
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 E5 CC E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F E8 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 75 4D: jne 0x586ca582
        __asm _emit 0x75
        __asm _emit 0x4d
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 01 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca554
        __asm _emit 0x75
        __asm _emit 0x11
        push 551h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 E2 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe2
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca561
        __asm _emit 0x74
        __asm _emit 0x0d
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 05 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca57d
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 8A CC E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 E7 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 75 4D: jne 0x586ca5dd
        __asm _emit 0x75
        __asm _emit 0x4d
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 01 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca5af
        __asm _emit 0x75
        __asm _emit 0x11
        push 609h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 E1 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe1
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca5bc
        __asm _emit 0x74
        __asm _emit 0x0d
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 04 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca5d8
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 2F CC E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 99 E7 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x586ca68b
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 75 4A: jne 0x586ca635
        __asm _emit 0x75
        __asm _emit 0x4a
        push 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 00 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca60a
        __asm _emit 0x75
        __asm _emit 0x11
        push 719h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A E1 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca617
        __asm _emit 0x74
        __asm _emit 0x0d
        push 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 04 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca633
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 D4 CB E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3E E7 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 56: jmp 0x586ca68b
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 75 48: jne 0x586ca68b
        __asm _emit 0x75
        __asm _emit 0x48
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 00 00 00: call 0x586ca6c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586ca662
        __asm _emit 0x75
        __asm _emit 0x11
        push 829h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 E1 EC FF: call 0x58598770
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x586ca66f
        __asm _emit 0x74
        __asm _emit 0x0d
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 04 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ca68b
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 7C CB E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 2bch
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E6 E6 E0 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe6
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x586ca6ae
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp + 0ch], 0ef10h
        ; Exact mapped bytes 75 18: jne 0x586ca6ae
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 03 00 00: call 0x586caa80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 09 00 00: call 0x586cb070
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
