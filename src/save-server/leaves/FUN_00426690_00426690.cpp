// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426690 .. +0x3C5 bytes.
extern "C" __declspec(naked) void FUN_00426690_00426690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 638h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 638h]
        mov ecx, 18eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 7F 03 00 00: je 0x426a3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 0F 84 6C 03 00 00: je 0x426a3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 B3 10 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb3
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 5f8h], eax
        mov eax, dword ptr [ebp - 5f8h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 F8 E6 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E B2 FD FF: call 0x40193d
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 8C 69 0A 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 5D B0 FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 5D B3 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        push 1
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 3D B3 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        push 2
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 1D B3 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        push 3
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 FD B2 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        push 64h
        push 0
        lea edx, [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 0F F1 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 0e4h], -1
        ; Exact mapped bytes 0F 84 76 02 00 00: je 0x426a37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ech], -1
        ; Exact mapped bytes 0F 84 69 02 00 00: je 0x426a37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0e8h], -1
        ; Exact mapped bytes 0F 84 5C 02 00 00: je 0x426a37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0f0h], -1
        ; Exact mapped bytes 75 3F: jne 0x426823
        __asm _emit 0x75
        __asm _emit 0x3f
        push 4b1h
        push 0
        lea eax, [ebp - 5a8h]
        push eax
        ; Exact mapped bytes E8 C9 F0 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 4b1h
        lea ecx, [ebp - 5a8h]
        push ecx
        push 63315ch
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 AA AD FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 0f4h], -1
        ; Exact mapped bytes 75 35: jne 0x426861
        __asm _emit 0x75
        __asm _emit 0x35
        lea edx, [ebp - 5c4h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD A8 FD FF: call 0x401118
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1ch
        lea eax, [ebp - 5c4h]
        push eax
        push 63315ch
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 6C AD FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        push 78h
        lea ecx, [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 1C AA FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 01 00 00: je 0x426a35
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 AA FD FF: call 0x401343
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 5cch]
        ; Exact mapped bytes E8 72 A8 FD FF: call 0x40111d
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov edi, dword ptr [edx + 0ch]
        mov ecx, 1eh
        lea esi, [ebp - 0e0h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea eax, [ebp - 5e4h]
        push eax
        ; Exact mapped bytes E8 ED BC 07 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 5e4h]
        ; Exact mapped bytes E8 3D EC 0F 00: call 0x525512
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 5e4h]
        ; Exact mapped bytes E8 14 EC 0F 00: call 0x5254f7
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 5e4h]
        ; Exact mapped bytes E8 EB EB 0F 00: call 0x5254da
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        push 6343b4h
        lea ecx, [ebp - 5e0h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 14h
        cmp esi, esp
        ; Exact mapped bytes E8 E4 E4 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 5e0h]
        push edx
        ; Exact mapped bytes E8 B8 F6 03 00: call 0x465fd0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 48h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 54h
        push ecx
        lea edx, [ebp - 5ech]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 40c98h
        ; Exact mapped bytes E8 CB AE FD FF: call 0x401811
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 5cch], ecx
        mov dword ptr [ebp - 5c8h], edx
        lea eax, [ebp - 5f4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        add ecx, 40c98h
        ; Exact mapped bytes E8 ED A9 FD FF: call 0x40135c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 5cch]
        push edx
        ; Exact mapped bytes E8 5A A8 FD FF: call 0x4011d6
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4269a1
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 5cch]
        ; Exact mapped bytes E8 B7 AC FD FF: call 0x40164a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [edx + 60h], eax
        ; Exact mapped bytes EB 0D: jmp 0x4269ae
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 60h], 0
        push 78h
        lea eax, [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 3A AC FD FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 BC 66 0A 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 63310ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 F5 E3 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A AA FD FF: call 0x401438
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C A7 FD FF: call 0x40116d
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA AC FD FF: call 0x401717
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 B0 FD FF: call 0x401ae6
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x426a3f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 A8 FD FF: call 0x401311
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 638h
        cmp ebp, esp
        ; Exact mapped bytes E8 9F E3 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
