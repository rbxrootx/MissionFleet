// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FB620 .. +0xC91 bytes.
extern "C" __declspec(naked) void FUN_584fb620_584FB620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes 0F 84 57 0C 00 00: je 0x584fc2a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x584fb6ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x584fb67b
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 31 0C 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 BA 92 F8 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 09: jne 0x584fb69a
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 14 0C 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x584fb6cc
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 48 FF FF FF: call dword ptr [ebp - 0xb8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 7D 92 F8 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x584fb6cc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x584fb6ed
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 19: je 0x584fb6eb
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x584fb6eb
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 18h], 0
        xor eax, eax
        ; Exact mapped bytes E9 C1 0B 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9E: jmp 0x584fb68b
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        sub eax, 200h
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 4
        ; Exact mapped bytes 0F 87 9B 0B 00 00: ja 0x584fc2a6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 24 8D BC C2 4F 58: jmp dword ptr [ecx*4 + 0x584fc2bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xc2
        __asm _emit 0x4f
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 254h], 0
        ; Exact mapped bytes 74 16: je 0x584fb737
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 250h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8A 0D 00 00: call 0x584fc4c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A 0B 00 00: jmp 0x584fc2a6
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 92 F8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 A1 F8 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 08 00 00: je 0x584fc025
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 258h], 0
        ; Exact mapped bytes 0F 85 BD 08 00 00: jne 0x584fc025
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD B9 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 0E 00 00: call 0x584fc600
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A3 08 00 00: jne 0x584fc025
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 B9 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 36 32 00 00: call 0x584fe9d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0b8h], -1
        ; Exact mapped bytes 74 2B: je 0x584fb7d2
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 11 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 DF 0A 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0D 08 00 00: jmp 0x584fbfdf
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 91 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 07 00 00: je 0x584fbfdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 91 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E9 91 F8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        test edx, edx
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x584fb907
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x584fb907
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x584fb82f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 91 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 0E 00 00: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F 8D B8 00 00 00: jge 0x584fb902
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB B8 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 DC 0D 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 25 A0 F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x584fb8fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 90 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 80 42 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 69: jne 0x584fb8fd
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 90 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FC 5C 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x584fb8fd
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 90 F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, ax
        shl edx, 10h
        or edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 50h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 10 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x10
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 AF 09 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x584fb826
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E0 04 00 00: jmp 0x584fbde7
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        and edx, 10000000h
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x584fb9c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x584fb9c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 B7 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F5 0C 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 9F F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 64: je 0x584fb9bd
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 90 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 39 5C 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x584fb9bd
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 90 F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, ax
        shl ecx, 10h
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 60h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 0F 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0f
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 EF 08 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 04 00 00: jmp 0x584fbde7
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0b4h], 0c1h
        ; Exact mapped bytes 74 31: je 0x584fba02
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0b4h], 1c1h
        ; Exact mapped bytes 74 22: je 0x584fba02
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0b4h], 1c1h
        ; Exact mapped bytes 74 13: je 0x584fba02
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0b4h], 3c1h
        ; Exact mapped bytes 0F 85 CA 02 00 00: jne 0x584fbccc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x584fbccc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 8F F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 0C 00 00: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 8E B2 00 00 00: jle 0x584fbae6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 8F F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 3
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C4 40 FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x584fbae6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 8F F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 3
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 3E 5B 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5b
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x584fbae6
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF B6 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 3
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B2 0B 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FB 9D F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 45: je 0x584fbae1
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 8E F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, ax
        shl edx, 10h
        or edx, 3
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 0E 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 CB 07 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x584fbbba
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 8E F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 0B 00 00: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 0F 8E B9 00 00 00: jle 0x584fbbba
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 8E F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 4
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 F7 3F FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x584fbbba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 8E F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        push 0
        push 4
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 71 5A 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5a
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x584fbbba
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 B5 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 4
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 E5 0A 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2E 9D F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 51: je 0x584fbbba
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 8E F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx eax, ax
        shl eax, 10h
        or eax, 4
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 88h], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 0D 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F2 06 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 09: jmp 0x584fbbcc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x584fbcc7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F B5 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 4A 0A 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 93 9C F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x584fbcc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 8D F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 E8 3E FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x584fbcc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 8D F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1E 0A 00 00: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7E 7B: jle 0x584fbcc2
        __asm _emit 0x7e
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 8D F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 43 59 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x59
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x584fbcc2
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 8D F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, ax
        shl edx, 10h
        or edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 0C 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0c
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 EA 05 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x584fbbc3
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x584fbde7
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        and edx, 3fh
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x584fbde7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x584fbde7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 09: jmp 0x584fbd07
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 4
        ; Exact mapped bytes 0F 8F D6 00 00 00: jg 0x584fbde7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 B4 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 0F 09 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 58 9B F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9b
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x584fbde2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 8C F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 AD 3D FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3d
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x584fbde2
        __asm _emit 0x75
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 8C F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        push 0
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 23 58 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x584fbde2
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 8C F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, ax
        shl edx, 10h
        or edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 0B 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0b
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 CA 04 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x584fbcfe
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 11h], 0
        mov dword ptr [ebp - 28h], 5
        ; Exact mapped bytes EB 09: jmp 0x584fbdfd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 20h
        ; Exact mapped bytes 0F 8D DA 00 00 00: jge 0x584fbee1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E B3 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 19 08 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 62 9A F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x584fbedc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 8B F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 B7 3C FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x584fbedc
        __asm _emit 0x75
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 8B F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 2D 57 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x57
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x584fbedc
        __asm _emit 0x74
        __asm _emit 0x55
        mov byte ptr [ebp - 11h], 1
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 8B F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, ax
        shl ecx, 10h
        or ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 0A 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D0 03 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x584fbdf4
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 11h]
        test eax, eax
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x584fbfdf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 3
        ; Exact mapped bytes EB 09: jmp 0x584fbeff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes 0F 8F D6 00 00 00: jg 0x584fbfdf
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C B2 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 17 07 00 00: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 60 99 F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x584fbfda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 8A F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 B5 3B FB FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x584fbfda
        __asm _emit 0x75
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 8A F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 2B 56 25 00: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x584fbfda
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 8A F8 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx ecx, ax
        shl ecx, 10h
        or ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0f0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0d8h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 09 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D2 02 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x584fbef6
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 0C B2 FD FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 0
        push 0
        push 0
        push 2712h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 70 CD FD FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 B1 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 B2 29 00 00: call 0x584fe9d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 87 02 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7C 02 00 00: jmp 0x584fc2a6
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 258h], 0
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x584fc0fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 50h
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x584fc0f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 54h
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x584fc0f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5A 9F FC FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax], 0c8h
        ; Exact mapped bytes 7E 78: jle 0x584fc0f6
        __asm _emit 0x7e
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 89 F8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8E 98 F8 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x584fc0f6
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F B0 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 05 00 00: call 0x584fc620
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x584fc0f6
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 B0 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 05 00 00: call 0x584fc600
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x584fc0f6
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 250h], 1
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 B0 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 A1 07 1B 00: call 0x586ac890
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x1b
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 01 00 00: jmp 0x584fc2a6
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 258h], 0
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x584fc255
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 88 F8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 E3 97 F8 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x584fc220
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + eax + 64h]
        xor edx, 55h
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + ecx + 58h]
        xor ecx, 55h
        sub edx, ecx
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        movzx eax, word ptr [ecx + eax + 58h]
        xor eax, 55h
        sub edx, eax
        mov ecx, 2
        shl ecx, 1
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + ecx + 58h]
        xor ecx, 55h
        sub edx, ecx
        mov eax, 2
        imul ecx, eax, 0
        ; Exact mapped bytes 66 89 54 0D F4: mov word ptr [ebp + ecx - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xf4
        mov edx, 2
        imul eax, edx, 0
        ; Exact mapped bytes 0F BF 4C 05 F4: movsx ecx, word ptr [ebp + eax - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xf4
        test ecx, ecx
        ; Exact mapped bytes 74 63: je 0x584fc217
        __asm _emit 0x74
        __asm _emit 0x63
        mov dword ptr [ebp - 34h], 2
        cmp dword ptr [ebp - 34h], 6
        ; Exact mapped bytes 73 02: jae 0x584fc1c3
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x584fc1c9
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 E1 4F 33 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4f
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        xor edx, edx
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 89 54 05 F4: mov word ptr [ebp + eax - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xf4
        mov ecx, 2
        shl ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 6
        ; Exact mapped bytes 73 02: jae 0x584fc1e5
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x584fc1eb
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 BF 4F 33 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4f
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        xor edx, edx
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 89 54 05 F4: mov word ptr [ebp + eax - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xf4
        push 0
        push 6
        lea ecx, [ebp - 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 8001020ch
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 07 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x584fc2ac
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x584fc255
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 87 F8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 96 F8 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x584fc255
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED AE FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 04 00 00: call 0x584fc740
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AF 75 1A 00: call 0x586a3800
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x75
        __asm _emit 0x1a
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 57: jmp 0x584fc2ac
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes EB 4F: jmp 0x584fc2a6
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 250h], 0
        ; Exact mapped bytes 74 17: je 0x584fc27a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 254h], 0
        ; Exact mapped bytes 75 09: jne 0x584fc278
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 06 00 00: call 0x584fc8b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x584fc2a6
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 87 F8 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 96 F8 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x584fc29d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 09 00 00: call 0x584fcbd0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x584fc2a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 0D 00 00: call 0x584fcfc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 34h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
    }
}
