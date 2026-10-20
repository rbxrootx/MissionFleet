// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B5D7 .. +0x286 bytes.
extern "C" __declspec(naked) void FUN_0048b5d7_0048B5D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x48b622
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 E2 FF FF: call 0x48988e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 E9 FF FF: call 0x489f3a
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 89 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DD: jmp 0x48b5ff
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 30 06 00 00: call 0x48bc60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x48b682
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 7E 09 00 00: call 0x48bfc0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 33: je 0x48b680
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1A: je 0x48b679
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 6C D1 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x48b680
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB A0: jmp 0x48b622
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A6 0D 00 00: call 0x48c430
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 40c54h]
        ; Exact mapped bytes E8 A8 06 00 00: call 0x48bd40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 40c54h]
        ; Exact mapped bytes E8 6A 06 00 00: call 0x48bd10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x48b759
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 40c54h]
        ; Exact mapped bytes E8 A4 0A 00 00: call 0x48c160
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        and eax, 0ffffh
        cmp eax, 8
        ; Exact mapped bytes 75 19: jne 0x48b6ed
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F5 D0 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x48b754
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 53: je 0x48b754
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 1D 62 FB FF: call 0x441930
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1F: je 0x48b73b
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 03 C7 FF FF: call 0x487e2b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 08: jne 0x48b739
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1C B7 FF FF: call 0x486e55
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x48b754
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 75 13: jne 0x48b754
        __asm _emit 0x75
        __asm _emit 0x13
        mov esi, esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8C D0 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F FF FF FF: jmp 0x48b698
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 40c54h]
        ; Exact mapped bytes E8 79 05 00 00: call 0x48bce0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 40c54h]
        ; Exact mapped bytes E8 EB 05 00 00: call 0x48bd60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 40c54h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 40c50h]
        mov dword ptr [ecx + 40c54h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 40c50h], edx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 63 05 00 00: call 0x48bd10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x48b83a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 9D 09 00 00: call 0x48c160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 74 53: je 0x48b835
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 3C 61 FB FF: call 0x441930
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1F: je 0x48b81c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 22 C6 FF FF: call 0x487e2b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 75 08: jne 0x48b81a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3B B6 FF FF: call 0x486e55
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x48b835
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 75 13: jne 0x48b835
        __asm _emit 0x75
        __asm _emit 0x13
        mov esi, esp
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB CF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x48b79f
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 98 04 00 00: call 0x48bce0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 87 CF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
