// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B4F3 .. +0xC54 bytes.
extern "C" __declspec(naked) void FUN_0040b4f3_0040B4F3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439e6dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1768h
        ; Exact mapped bytes E8 EB 39 01 00: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1764h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x40b531
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 01 0C 00 00: jmp 0x40c132
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x0c
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
        ; Exact mapped bytes 0F 85 74 0B 00 00: jne 0x40c0b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1768h], edx
        cmp dword ptr [ebp - 1768h], 80017001h
        ; Exact mapped bytes 0F 87 96 00 00 00: ja 0x40b5f7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80017001h
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x40b7cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80011200h
        ; Exact mapped bytes 77 45: ja 0x40b5c2
        __asm _emit 0x77
        __asm _emit 0x45
        cmp dword ptr [ebp - 1768h], 80011200h
        ; Exact mapped bytes 0F 84 76 04 00 00: je 0x40ba03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 8001000fh
        ; Exact mapped bytes 0F 84 B9 04 00 00: je 0x40ba56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80011000h
        ; Exact mapped bytes 0F 84 75 03 00 00: je 0x40b922
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80011100h
        ; Exact mapped bytes 0F 84 42 03 00 00: je 0x40b8ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F5 0A 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80016001h
        ; Exact mapped bytes 0F 84 A3 04 00 00: je 0x40ba75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80016002h
        ; Exact mapped bytes 0F 84 F1 04 00 00: je 0x40bad3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80017000h
        ; Exact mapped bytes 0F 84 BB 02 00 00: je 0x40b8ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C0 0A 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80017005h
        ; Exact mapped bytes 77 41: ja 0x40b644
        __asm _emit 0x77
        __asm _emit 0x41
        cmp dword ptr [ebp - 1768h], 80017005h
        ; Exact mapped bytes 74 5A: je 0x40b669
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebp - 1768h], 80017002h
        ; Exact mapped bytes 0F 84 42 02 00 00: je 0x40b861
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80017003h
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x40b6f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 80017004h
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x40b783
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 0A 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 8001e001h
        ; Exact mapped bytes 0F 84 67 08 00 00: je 0x40bebb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1768h], 8001e002h
        ; Exact mapped bytes 0F 84 CD 04 00 00: je 0x40bb31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 0A 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 24h
        ; Exact mapped bytes 75 7F: jne 0x40b6f1
        __asm _emit 0x75
        __asm _emit 0x7f
        push 24h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1764h]
        add edx, 16ch
        push edx
        ; Exact mapped bytes E8 36 35 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1764h]
        add eax, 16ch
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 CF 83 FF FF: call 0x403a7f
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x40b6b6
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x40b6f1
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 0
        mov eax, dword ptr [ebp - 1764h]
        add eax, 16ch
        push eax
        ; Exact mapped bytes E8 77 34 01 00: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 16ch
        push ecx
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes E8 0F 49 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C1 09 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10h], 10h
        ; Exact mapped bytes 75 7F: jne 0x40b77e
        __asm _emit 0x75
        __asm _emit 0x7f
        push 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 144h
        push ecx
        ; Exact mapped bytes E8 A9 34 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 1764h]
        add edx, 144h
        push edx
        ; Exact mapped bytes A1 DC DA 44 00: mov eax, dword ptr [0x44dadc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c80h]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 B5 7D FF FF: call 0x4034f2
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x40b743
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x40b77e
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 0
        mov edx, dword ptr [ebp - 1764h]
        add edx, 110h
        push edx
        ; Exact mapped bytes E8 E9 33 01 00: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp - 1764h]
        add eax, 110h
        push eax
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes E8 82 48 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 34 09 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 18h
        ; Exact mapped bytes 75 3E: jne 0x40b7ca
        __asm _emit 0x75
        __asm _emit 0x3e
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1764h]
        add eax, 154h
        push eax
        ; Exact mapped bytes E8 1D 34 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 154h
        push ecx
        ; Exact mapped bytes 8B 15 DC DA 44 00: mov edx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 8C 7F FF FF: call 0x403756
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E8 08 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 24h
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x40b85c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1764h]
        add eax, 110h
        push eax
        ; Exact mapped bytes E8 CD 33 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 110h
        push ecx
        ; Exact mapped bytes 8B 15 DC DA 44 00: mov edx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 0E 76 FF FF: call 0x402e28
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x40b820
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3C: jmp 0x40b85c
        __asm _emit 0xeb
        __asm _emit 0x3c
        push 0
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 110h
        push ecx
        ; Exact mapped bytes E8 0C 33 01 00: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp - 1764h]
        add edx, 110h
        push edx
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes E8 A4 47 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 56 08 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 10h
        ; Exact mapped bytes 75 3E: jne 0x40b8a8
        __asm _emit 0x75
        __asm _emit 0x3e
        push 10h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1764h]
        add edx, 134h
        push edx
        ; Exact mapped bytes E8 3E 33 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1764h]
        add eax, 134h
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 4A 78 FF FF: call 0x4030f2
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0A 08 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 10h
        ; Exact mapped bytes 75 44: jne 0x40b8fa
        __asm _emit 0x75
        __asm _emit 0x44
        push 10h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1764h]
        add edx, 190h
        push edx
        ; Exact mapped bytes E8 F2 32 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1764h]
        add eax, 190h
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes A1 DC DA 44 00: mov eax, dword ptr [0x44dadc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c80h]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 EA 72 FF FF: call 0x402be4
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B8 07 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 57 70 FF FF: call 0x402974
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 07 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x40b937
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 176ch], 0
        ; Exact mapped bytes EB 1A: jmp 0x40b951
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 449540h
        ; Exact mapped bytes E8 58 89 FF FF: call 0x4042a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 176ch], eax
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x40b966
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1770h], 0
        ; Exact mapped bytes EB 15: jmp 0x40b97b
        __asm _emit 0xeb
        __asm _emit 0x15
        push 38h
        push 449558h
        ; Exact mapped bytes E8 2E 89 FF FF: call 0x4042a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1770h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 38h
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], edx
        ; Exact mapped bytes 75 72: jne 0x40b9fe
        __asm _emit 0x75
        __asm _emit 0x72
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x40b99e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 1F: jge 0x40b9c8
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 38h
        mov edx, dword ptr [ebp + 0ch]
        add edx, ecx
        push edx
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 0e4h
        ; Exact mapped bytes E8 4A 09 00 00: call 0x40c310
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CD: jmp 0x40b995
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 1764h]
        mov ecx, dword ptr [eax + 100h]
        mov edx, dword ptr [ebp + 8]
        add ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 1764h]
        mov dword ptr [eax + 100h], ecx
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 42 8A FF FF: call 0x404440
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B4 06 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 10h
        ; Exact mapped bytes 75 45: jne 0x40ba51
        __asm _emit 0x75
        __asm _emit 0x45
        push 10h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1764h]
        add eax, 190h
        push eax
        ; Exact mapped bytes E8 9D 31 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1764h]
        add ecx, 190h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 86 6F FF FF: call 0x4029d7
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 61 06 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes E8 90 45 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 42 06 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1764h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 BD 09 00 00: call 0x40c440
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 96 09 00 00: call 0x40c420
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x40ba9a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 69 09 00 00: call 0x40c400
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2E: je 0x40bace
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes 74 21: je 0x40bacc
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80026001h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 45 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C1: jmp 0x40ba8f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes E9 E4 05 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1764h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 5F 09 00 00: call 0x40c440
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 38 09 00 00: call 0x40c420
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x40baf8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0B 09 00 00: call 0x40c400
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2E: je 0x40bb2c
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes 74 21: je 0x40bb2a
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80026002h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D6 44 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C1: jmp 0x40baed
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes E9 86 05 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 18h
        ; Exact mapped bytes 0F 85 78 03 00 00: jne 0x40beb6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1594h]
        ; Exact mapped bytes E8 67 87 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 18h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 1610h]
        push edx
        ; Exact mapped bytes E8 5E 30 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 1610h]
        push eax
        lea ecx, [ebp - 1594h]
        ; Exact mapped bytes E8 BD 21 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 15f8h]
        ; Exact mapped bytes E8 E7 60 00 00: call 0x411c69
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 15f8h]
        push ecx
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 E1 69 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 8
        push 449574h
        lea ecx, [ebp - 15f8h]
        ; Exact mapped bytes E8 71 62 00 00: call 0x411e1f
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1618h]
        ; Exact mapped bytes E8 F7 86 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 1590h]
        ; Exact mapped bytes E8 E8 86 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 1598h]
        ; Exact mapped bytes E8 D9 86 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 1620h]
        ; Exact mapped bytes E8 CA 86 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BE 86 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 AF 86 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        mov edx, dword ptr [ebp - 1594h]
        push edx
        push 449590h
        lea eax, [ebp - 1618h]
        push eax
        ; Exact mapped bytes E8 C2 0E 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 0
        lea ecx, [ebp - 1618h]
        ; Exact mapped bytes E8 E3 86 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push -1
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 53 6C 00 00: call 0x41288e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1614h], 0
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 60 D8 FF FF: call 0x4094b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 161ch], eax
        push 1454h
        push 0
        lea ecx, [ebp - 158ch]
        push ecx
        ; Exact mapped bytes E8 77 2E 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 39 D8 FF FF: call 0x4094b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 01 00 00: je 0x40be19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 36 88 FF FF: call 0x4044c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x40bdeb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1614h]
        cmp edx, dword ptr [ebp - 161ch]
        ; Exact mapped bytes 0F 8D 47 01 00 00: jge 0x40bdeb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1620h]
        push eax
        push 4495d4h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 AA 73 00 00: call 0x413065
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        push 4495e0h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 96 73 00 00: call 0x413065
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 1590h]
        push edx
        push 4495ech
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 7F 73 00 00: call 0x413065
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1598h]
        push eax
        push 4495f8h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 68 73 00 00: call 0x413065
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        push ecx
        push 449604h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 51 73 00 00: call 0x413065
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1620h]
        ; Exact mapped bytes E8 D3 0D 02 00: call 0x42caf2
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CB 0D 02 00: call 0x42caf2
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1590h]
        ; Exact mapped bytes E8 DE 85 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 96 2D 01 00: call 0x41eace
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        lea ecx, [ebp - 1598h]
        ; Exact mapped bytes E8 C4 85 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 7C 2D 01 00: call 0x41eace
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1624h], eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 AA 85 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 62 2D 01 00: call 0x41eace
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        cmp dword ptr [ebp - 130h], 1eh
        ; Exact mapped bytes 7C 59: jl 0x40bdd7
        __asm _emit 0x7c
        __asm _emit 0x59
        lea ecx, [ebp - 1620h]
        ; Exact mapped bytes E8 87 85 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 1614h]
        imul edx, edx, 34h
        lea eax, [ebp + edx - 1574h]
        push eax
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 67 85 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1614h]
        imul ecx, ecx, 34h
        lea edx, [ebp + ecx - 158ch]
        push edx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1614h]
        imul eax, eax, 34h
        mov ecx, dword ptr [ebp - 1624h]
        mov dword ptr [ebp + eax - 155ch], ecx
        mov edx, dword ptr [ebp - 1614h]
        add edx, 1
        mov dword ptr [ebp - 1614h], edx
        ; Exact mapped bytes E9 94 FE FF FF: jmp 0x40bc7f
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 161ch]
        mov dword ptr [ebp - 13ch], eax
        push 0
        push 1454h
        lea ecx, [ebp - 158ch]
        push ecx
        push 0
        push 0
        push 8002e002h
        mov ecx, dword ptr [ebp - 1764h]
        ; Exact mapped bytes E8 E7 41 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 3E 6B 00 00: call 0x412962
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 15f8h]
        ; Exact mapped bytes E8 89 61 00 00: call 0x411fb8
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 6D 1D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 61 1D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 1620h]
        ; Exact mapped bytes E8 52 1D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 1598h]
        ; Exact mapped bytes E8 43 1D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 1590h]
        ; Exact mapped bytes E8 34 1D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 1618h]
        ; Exact mapped bytes E8 25 1D 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 F0 68 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 15f8h]
        ; Exact mapped bytes E8 42 5E 00 00: call 0x411ce6
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1594h]
        ; Exact mapped bytes E8 F5 1C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x40bf5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 60h
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x40bf57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        push 0
        lea ecx, [ebp - 1684h]
        push ecx
        ; Exact mapped bytes E8 FB 2B 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 60h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 1684h]
        push eax
        ; Exact mapped bytes E8 C6 2C 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1684h]
        push ecx
        ; Exact mapped bytes 8B 15 DC DA 44 00: mov edx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 5F 7D FF FF: call 0x403c7a
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1684h]
        push ecx
        ; Exact mapped bytes 8B 15 DC DA 44 00: mov edx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 AF 7D FF FF: call 0x403ce8
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1684h]
        push ecx
        ; Exact mapped bytes 8B 15 DC DA 44 00: mov edx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 23 7F FF FF: call 0x403e7a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 2
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x40c001
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10h], 60h
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x40bffc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        push 0
        lea eax, [ebp - 16e4h]
        push eax
        ; Exact mapped bytes E8 5A 2B 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 60h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 16e4h]
        push edx
        ; Exact mapped bytes E8 25 2C 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 16e4h]
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 77 7F FF FF: call 0x403f33
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x40bffc
        __asm _emit 0x74
        __asm _emit 0x3c
        lea eax, [ebp - 16e4h]
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 78 7D FF FF: call 0x403d56
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 16e4h]
        push eax
        ; Exact mapped bytes 8B 0D DC DA 44 00: mov ecx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c80h]
        mov ecx, dword ptr [edx + 40d00h]
        ; Exact mapped bytes E8 7E 7C FF FF: call 0x403c7a
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x40c0b7
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 3
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x40c0b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 60h
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x40c0b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        push 0
        lea edx, [ebp - 1744h]
        push edx
        ; Exact mapped bytes E8 B5 2A 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 60h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1744h]
        push ecx
        ; Exact mapped bytes E8 80 2B 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1744h]
        push edx
        ; Exact mapped bytes A1 DC DA 44 00: mov eax, dword ptr [0x44dadc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c80h]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 1A 7C FF FF: call 0x403c7a
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 1744h]
        push edx
        ; Exact mapped bytes A1 DC DA 44 00: mov eax, dword ptr [0x44dadc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c80h]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 6B 7C FF FF: call 0x403ce8
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 1744h]
        push edx
        ; Exact mapped bytes A1 DC DA 44 00: mov eax, dword ptr [0x44dadc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c80h]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 E0 7D FF FF: call 0x403e7a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 1744h]
        push edx
        ; Exact mapped bytes A1 DC DA 44 00: mov eax, dword ptr [0x44dadc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c80h]
        mov ecx, dword ptr [ecx + 40d00h]
        ; Exact mapped bytes E8 0A 7D FF FF: call 0x403dc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 79: jmp 0x40c132
        __asm _emit 0xeb
        __asm _emit 0x79
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8002h
        ; Exact mapped bytes 75 69: jne 0x40c132
        __asm _emit 0x75
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1774h], edx
        cmp dword ptr [ebp - 1774h], 8002d012h
        ; Exact mapped bytes 74 02: je 0x40c0e3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4F: jmp 0x40c132
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 1ch
        ; Exact mapped bytes 75 46: jne 0x40c132
        __asm _emit 0x75
        __asm _emit 0x46
        push 1ch
        push 0
        lea ecx, [ebp - 1760h]
        push ecx
        ; Exact mapped bytes E8 E4 29 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 1760h]
        push eax
        ; Exact mapped bytes E8 AF 2A 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1760h]
        push ecx
        ; Exact mapped bytes 8B 15 DC DA 44 00: mov edx, dword ptr [0x44dadc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c80h]
        mov ecx, dword ptr [eax + 40d00h]
        ; Exact mapped bytes E8 DD 7A FF FF: call 0x403c0f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
