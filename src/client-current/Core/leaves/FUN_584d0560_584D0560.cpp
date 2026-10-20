// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D0560 .. +0xE6E bytes.
extern "C" __declspec(naked) void FUN_584d0560_584D0560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 29ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp - 208h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 22 0E 00 00: je 0x584d13b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x584d065e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 14: ja 0x584d05cb
        __asm _emit 0x77
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 F6 0D 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 67 43 FB FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 218h], edx
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 75 09: jne 0x584d05f3
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 D0 0D 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 41: jmp 0x584d0634
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 218h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 238h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes FF 95 C8 FD FF FF: call dword ptr [ebp - 0x238]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 18 43 FB FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 218h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x584d0634
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2A: jmp 0x584d065e
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 218h], 0
        ; Exact mapped bytes 74 1F: je 0x584d065c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 218h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 11: ja 0x584d065c
        __asm _emit 0x77
        __asm _emit 0x11
        mov dword ptr [ebp - 218h], 0
        xor eax, eax
        ; Exact mapped bytes E9 65 0D 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 83: jmp 0x584d05e1
        __asm _emit 0xeb
        __asm _emit 0x83
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 214h], edx
        cmp dword ptr [ebp - 214h], 10fh
        ; Exact mapped bytes 77 3B: ja 0x584d06b1
        __asm _emit 0x77
        __asm _emit 0x3b
        cmp dword ptr [ebp - 214h], 10fh
        ; Exact mapped bytes 0F 84 E6 01 00 00: je 0x584d086c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 214h]
        sub eax, 100h
        mov dword ptr [ebp - 214h], eax
        cmp dword ptr [ebp - 214h], 5
        ; Exact mapped bytes 0F 87 14 0D 00 00: ja 0x584d13b8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes FF 24 8D D4 13 4D 58: jmp dword ptr [ecx*4 + 0x584d13d4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0x4d
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 214h]
        sub edx, 201h
        mov dword ptr [ebp - 214h], edx
        cmp dword ptr [ebp - 214h], 8fh
        ; Exact mapped bytes 0F 87 E5 0C 00 00: ja 0x584d13b8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 214h]
        movzx ecx, byte ptr [eax + 584d1408h]
        ; Exact mapped bytes FF 24 8D EC 13 4D 58: jmp dword ptr [ecx*4 + 0x584d13ec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x4d
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 23ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B4 0C 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 240h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 95 C0 FD FF FF: call dword ptr [ebp - 0x240]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8E 0C 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 68 0C 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 248h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 95 B8 FD FF FF: call dword ptr [ebp - 0x248]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 0C 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 24ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1C 0C 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 11h
        ; Exact mapped bytes 75 19: jne 0x584d07c7
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 0ech], 0
        xor eax, eax
        ; Exact mapped bytes E9 FC 0B 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x584d07d5
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 208h]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes E9 EC 0B 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 95 78 FD FF FF: call dword ptr [ebp - 0x288]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C6 0B 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 0dh
        ; Exact mapped bytes 75 16: jne 0x584d081a
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0dh
        push 290h
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 E4 44 89 58: call dword ptr [0x588944e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 99 0B 00 00: jmp 0x584d13b8
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 0ech], 0
        ; Exact mapped bytes 74 10: je 0x584d083e
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 0ech], 0
        ; Exact mapped bytes E9 75 0B 00 00: jmp 0x584d13b8
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 28ch], ecx
        cmp dword ptr [ebp - 28ch], 0dh
        ; Exact mapped bytes 74 02: je 0x584d085a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x584d0867
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 208h]
        mov byte ptr [edx + 0a8h], 1
        ; Exact mapped bytes E9 4C 0B 00 00: jmp 0x584d13b8
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 7E 20 36 00: call 0x588328f5
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x20
        __asm _emit 0x36
        __asm _emit 0x00
        mov dword ptr [ebp - 230h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 800h
        ; Exact mapped bytes 0F 84 AA 04 00 00: je 0x584d0d39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 96 0D 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 90h]
        sub edx, 2
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 71 04 00 00: jge 0x584d0d22
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 800h
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes E8 3B 20 36 00: call 0x58832901
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x20
        __asm _emit 0x36
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        mov ecx, dword ptr [ebp - 208h]
        mov esi, dword ptr [ecx + 90h]
        sub esi, 2
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 4A 0D 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        cmp dword ptr [ebp - 20ch], esi
        ; Exact mapped bytes 7E 17: jle 0x584d0907
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 88h], 0
        xor eax, eax
        ; Exact mapped bytes E9 BA 0A 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea eax, [ebp - 204h]
        push eax
        push 800h
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        ; Exact mapped bytes E8 DD 1F 36 00: call 0x58832901
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1f
        __asm _emit 0x36
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 20ch]
        cmp eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 0F 8E BF 00 00 00: jle 0x584d09fc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 E8 0C 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20ch]
        lea edx, [eax + ecx - 1]
        mov dword ptr [ebp - 21ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x584d0969
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 21ch]
        sub eax, 1
        mov dword ptr [ebp - 21ch], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 88h]
        cmp dword ptr [ebp - 21ch], edx
        ; Exact mapped bytes 7C 6E: jl 0x584d09f7
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 20ch]
        sub edx, dword ptr [ecx + 88h]
        add edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, 2
        cmp edx, ecx
        ; Exact mapped bytes 7E 02: jle 0x584d09b6
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x584d09f7
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 20ch]
        sub edx, dword ptr [ecx + 88h]
        add edx, dword ptr [ebp - 21ch]
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 21ch]
        mov al, byte ptr [eax + esi]
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x584d095a
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x584d0add
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 20ch]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 8D C9 00 00 00: jge 0x584d0add
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov esi, dword ptr [eax + 94h]
        add esi, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 FF 0B 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        sub eax, dword ptr [ecx + 94h]
        add esi, eax
        mov edx, dword ptr [ebp - 208h]
        cmp esi, dword ptr [edx + 90h]
        ; Exact mapped bytes 0F 8F 8C 00 00 00: jg 0x584d0add
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 D4 0B 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        sub eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 250h], eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 80h]
        add ecx, eax
        mov dword ptr [ebp - 254h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 94h]
        add eax, dword ptr [ebp - 20ch]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        add edx, eax
        mov dword ptr [ebp - 258h], edx
        mov eax, dword ptr [ebp - 250h]
        push eax
        mov ecx, dword ptr [ebp - 254h]
        push ecx
        mov edx, dword ptr [ebp - 258h]
        push edx
        ; Exact mapped bytes E8 B6 BD 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbd
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 94h]
        add ecx, dword ptr [ebp - 20ch]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        sub eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 7F 31: jg 0x584d0b33
        __asm _emit 0x7f
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 20ch]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 94h]
        push ecx
        ; Exact mapped bytes E8 62 BD 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xbd
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 44: jmp 0x584d0b77
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, 2
        mov edx, dword ptr [ebp - 208h]
        sub ecx, dword ptr [edx + 94h]
        push ecx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 94h]
        push edx
        ; Exact mapped bytes E8 1C BD 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbd
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 84h]
        add edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 84h], edx
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 94h]
        add edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 94h], edx
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 94h]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 7E 18: jle 0x584d0be5
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ecx + 94h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 8ch]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 90h]
        sub ecx, 2
        cmp eax, ecx
        ; Exact mapped bytes 7F 2A: jg 0x584d0c4a
        __asm _emit 0x7f
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 8ch]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 80h]
        mov byte ptr [ecx + eax], 0
        ; Exact mapped bytes EB 1C: jmp 0x584d0c66
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov byte ptr [edx + eax], 0
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 25ch], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 260h], edx
        lea eax, [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 94h]
        sub eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 98h]
        push edx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes FF 95 A0 FD FF FF: call dword ptr [ebp - 0x260]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 294h]
        mov dword ptr [ecx + 0f4h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ebp - 294h]
        mov dword ptr [eax + 0f0h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [edx + 0fch], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [edx + 0f8h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 88h], 0
        xor eax, eax
        ; Exact mapped bytes E9 88 06 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 8
        ; Exact mapped bytes 75 1A: jne 0x584d0d5e
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 100h
        ; Exact mapped bytes 75 0D: jne 0x584d0d5e
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 0F 85 ED 04 00 00: jne 0x584d124b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 C7 08 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 90h]
        sub ecx, 2
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D C4 04 00 00: jge 0x584d1244
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 0fch]
        cmp ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes 0F 84 A3 01 00 00: je 0x584d0f41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 22ch], 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 0f8h]
        cmp ecx, dword ptr [eax + 0fch]
        ; Exact mapped bytes 7D 26: jge 0x584d0de8
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 234h], edx
        ; Exact mapped bytes EB 24: jmp 0x584d0e0c
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 234h], eax
        mov ecx, dword ptr [ebp - 234h]
        mov dword ptr [ebp - 228h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x584d0e38
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 228h]
        add edx, 1
        mov dword ptr [ebp - 228h], edx
        mov eax, dword ptr [ebp - 22ch]
        add eax, 1
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 ED 07 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 228h], eax
        ; Exact mapped bytes 7D 32: jge 0x584d0e7d
        __asm _emit 0x7d
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 224h]
        add eax, dword ptr [ebp - 22ch]
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 228h]
        mov dl, byte ptr [edx + esi]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes EB 9D: jmp 0x584d0e1a
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [ebp - 224h]
        add eax, dword ptr [ebp - 22ch]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov byte ptr [edx + eax], 0
        mov eax, dword ptr [ebp - 234h]
        sub eax, dword ptr [ebp - 224h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 8ch]
        sub edx, eax
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 8ch], edx
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 0fch], 0
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 14 07 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 94h], eax
        ; Exact mapped bytes 7E 17: jle 0x584d0f41
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 FB 06 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 94h], eax
        push 100h
        lea eax, [ebp - 104h]
        push eax
        push 8
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        ; Exact mapped bytes E8 A6 19 36 00: call 0x58832901
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x36
        __asm _emit 0x00
        mov dword ptr [ebp - 210h], eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ebp - 210h]
        cmp eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 0F 8E BF 00 00 00: jle 0x584d1038
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 AC 06 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 210h]
        lea edx, [eax + ecx - 1]
        mov dword ptr [ebp - 220h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584d0fa5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 220h]
        sub eax, 1
        mov dword ptr [ebp - 220h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 88h]
        cmp dword ptr [ebp - 220h], edx
        ; Exact mapped bytes 7C 6E: jl 0x584d1033
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 210h]
        sub edx, dword ptr [ecx + 88h]
        add edx, dword ptr [ebp - 220h]
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, 2
        cmp edx, ecx
        ; Exact mapped bytes 7E 02: jle 0x584d0ff2
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x584d1033
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 210h]
        sub edx, dword ptr [ecx + 88h]
        add edx, dword ptr [ebp - 220h]
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 80h]
        mov esi, dword ptr [ebp - 220h]
        mov al, byte ptr [eax + esi]
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x584d0f96
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x584d111e
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 210h]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x584d111e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov esi, dword ptr [eax + 94h]
        add esi, dword ptr [ebp - 210h]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 C3 05 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        sub eax, dword ptr [ecx + 94h]
        add esi, eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        sub eax, 2
        cmp esi, eax
        ; Exact mapped bytes 0F 8F 8C 00 00 00: jg 0x584d111e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 93 05 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        sub eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 264h], eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 208h]
        add eax, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 80h]
        add ecx, eax
        mov dword ptr [ebp - 268h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 94h]
        add eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        add edx, eax
        mov dword ptr [ebp - 26ch], edx
        mov eax, dword ptr [ebp - 264h]
        push eax
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov edx, dword ptr [ebp - 26ch]
        push edx
        ; Exact mapped bytes E8 75 B7 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xb7
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 94h]
        add ecx, dword ptr [ebp - 210h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 90h]
        sub eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 7F 31: jg 0x584d1174
        __asm _emit 0x7f
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 94h]
        push ecx
        ; Exact mapped bytes E8 21 B7 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb7
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 44: jmp 0x584d11b8
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, 2
        mov edx, dword ptr [ebp - 208h]
        sub ecx, dword ptr [edx + 94h]
        push ecx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 94h]
        push edx
        ; Exact mapped bytes E8 DB B6 37 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb6
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 6D 04 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 90h]
        sub edx, 2
        cmp eax, edx
        ; Exact mapped bytes 7F 3A: jg 0x584d1216
        __asm _emit 0x7f
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 270h], ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 37 04 00 00: call 0x584d1630
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 210h]
        mov dword ptr [ebp - 274h], eax
        mov edx, dword ptr [ebp - 270h]
        add edx, dword ptr [ebp - 274h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes EB 1C: jmp 0x584d1232
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 80h]
        mov byte ptr [eax + ecx], 0
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ecx + 88h], edx
        xor eax, eax
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x584d13c1
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 278h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 27ch], edx
        lea eax, [ebp - 29ch]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [ecx + 94h]
        sub eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 208h]
        add edx, dword ptr [eax + 98h]
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes FF 95 84 FD FF FF: call dword ptr [ebp - 0x27c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 FE 56 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x56
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 29ch]
        lea esi, [edx + eax*2]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 FA 45 FC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8C C6 00 00 00: jl 0x584d13a4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 98h]
        ; Exact mapped bytes 0F BE 0C 01: movsx ecx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x01
        test ecx, ecx
        ; Exact mapped bytes 7D 1D: jge 0x584d131b
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 98h]
        add eax, 2
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 98h], eax
        ; Exact mapped bytes EB 1B: jmp 0x584d1336
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 98h]
        add eax, 1
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 98h], eax
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 280h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 284h], ecx
        lea edx, [ebp - 29ch]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [eax + 94h]
        sub edx, dword ptr [ecx + 98h]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 208h]
        add ecx, dword ptr [edx + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x584d12b4
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes E8 44 15 36 00: call 0x588328fb
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0x36
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 34h]
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 84 FC 35 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x35
        __asm _emit 0x00
        mov esp, ebp
    }
}
