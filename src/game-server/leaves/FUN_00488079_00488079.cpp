// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00488079 .. +0x618 bytes.
extern "C" __declspec(naked) void FUN_00488079_00488079() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 20ch]
        mov ecx, 83h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 200h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x4880b4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C3 05 00 00: jmp 0x488677
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 5A 05 00 00: jne 0x488622
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 204h], edx
        cmp dword ptr [ebp - 204h], 8001000fh
        ; Exact mapped bytes 77 3B: ja 0x48811b
        __asm _emit 0x77
        __asm _emit 0x3b
        cmp dword ptr [ebp - 204h], 8001000fh
        ; Exact mapped bytes 0F 84 16 05 00 00: je 0x488606
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 204h]
        add eax, 7ffeffffh
        mov dword ptr [ebp - 204h], eax
        cmp dword ptr [ebp - 204h], 6
        ; Exact mapped bytes 0F 87 12 05 00 00: ja 0x488620
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes FF 24 8D 91 86 48 00: jmp dword ptr [ecx*4 + 0x488691]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x00
        cmp dword ptr [ebp - 204h], 80010109h
        ; Exact mapped bytes 74 25: je 0x48814c
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 204h], 8001010ah
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x4881d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 204h], 8001010bh
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x48825f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 04 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 200h]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ebp - 0d4h], eax
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 C0 E8 F9 FF: call 0x426a40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 C4 E8 F9 FF: call 0x426a60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 0
        push 0
        push 0d8h
        lea ecx, [ebp - 0d8h]
        push ecx
        push 0
        push 80020010h
        push 80020010h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 5F F0 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 04 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 200h]
        mov eax, dword ptr [edx + 44h]
        and eax, 0f0000000h
        cmp eax, 20000000h
        ; Exact mapped bytes 75 50: jne 0x48823d
        __asm _emit 0x75
        __asm _emit 0x50
        push 40h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 6ch
        push ecx
        lea edx, [ebp - 11ch]
        push edx
        ; Exact mapped bytes E8 1B 0E 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 0ddh], 0
        mov dword ptr [ebp - 0dch], 0
        push 0
        push 44h
        lea eax, [ebp - 11ch]
        push eax
        push 0
        push 8001010ah
        push 80020012h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 F7 EF FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x48825a
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 8001010ah
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 D8 EF FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 03 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 200h]
        mov edx, dword ptr [ecx + 44h]
        and edx, 0f0000000h
        cmp edx, 10000000h
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x48830d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], 0
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 1E 13 00 00: call 0x4895b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1f0h], ecx
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 8B E7 F9 FF: call 0x426a40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 1e8h], eax
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 8F E7 F9 FF: call 0x426a60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 0ffffh
        mov dword ptr [ebp - 1e4h], eax
        mov dword ptr [ebp - 120h], 0
        push 0
        push 0d8h
        lea edx, [ebp - 1f4h]
        push edx
        push 0
        push 8001010bh
        push 80020011h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 27 EF FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x48832a
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 8001010bh
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 08 EF FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F1 02 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 8002h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 D9 0F 00 00: call 0x489320
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8002h
        push 80010100h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 C9 EE FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 02 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1f8h], edx
        mov esi, esp
        mov eax, dword ptr [ebp - 1f8h]
        push eax
        ; Exact mapped bytes FF 15 AC 28 5E 00: call dword ptr [0x5e28ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 53 04 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        push 40h
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        add edx, 6ch
        push edx
        ; Exact mapped bytes E8 7B 0C 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 200h]
        mov byte ptr [eax + 0abh], 0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x488460
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 F7 6F FC FF: call 0x44f3d0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 03 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x488460
        __asm _emit 0x74
        __asm _emit 0x62
        push 0
        push 0
        push 0
        push 8003h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 17 EE FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 46ch
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 DA B4 F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 200h]
        mov dword ptr [eax + 0ach], 3
        push 0
        push 8000h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 C2 0E 00 00: call 0x489320
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x4884a4
        __asm _emit 0xeb
        __asm _emit 0x44
        mov dword ptr [ebp - 1fch], 5c4600h
        push 0
        mov esi, esp
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E 03 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp - 1fch]
        push edx
        push 8003h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 8E ED FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 8005h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80010100h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 67 ED FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 8005h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 3D 0E 00 00: call 0x489320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x488620
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 200h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x488591
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 CA BA F7 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x488591
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 200h]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 B3 6E FC FF: call 0x44f3d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC 8D F7 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 E4 EA FF FF: call 0x487014
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x48856d
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 200h]
        mov ecx, dword ptr [edx + 4ch]
        ; Exact mapped bytes E8 8E 6E FC FF: call 0x44f3d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 E1 FB FF: call 0x446670
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8006h
        push 80000002h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 C7 EC FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x48858f
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 8006h
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 A3 EC FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x4885b3
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 8006h
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 7F EC FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6B: jmp 0x488620
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4885e2
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 8004h
        push 80000002h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 52 EC FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x488604
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8004h
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 2E EC FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x488620
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 12 EC FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 55: jmp 0x488677
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20ch], eax
        cmp dword ptr [ebp - 20ch], 80020300h
        ; Exact mapped bytes 74 02: je 0x48863c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x488677
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 200h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 2F: je 0x488677
        __asm _emit 0x74
        __asm _emit 0x2f
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        mov ecx, dword ptr [edx + 4ch]
        mov eax, dword ptr [ebp - 200h]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 69 01 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 20ch
        cmp ebp, esp
        ; Exact mapped bytes E8 55 01 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
