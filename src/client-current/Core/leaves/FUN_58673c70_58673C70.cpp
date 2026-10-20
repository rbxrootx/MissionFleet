// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58673C70 .. +0x397 bytes.
extern "C" __declspec(naked) void FUN_58673c70_58673C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 20h], ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 0C E1 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 34 E6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x34
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 82 E1 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x82
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 51: jne 0x58673cfd
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AC 55 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x55
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 36: jne 0x58673cf2
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AC F8 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 1
        ; Exact mapped bytes 75 26: jne 0x58673cf2
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BC F8 FF FF: call 0x58673590
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58673ce7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 2
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673cf0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 06: jmp 0x58673cf8
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes E9 96 02 00 00: jmp 0x58673f93
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 F8 FF FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x58673d46
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 34 E6 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 33 E6 FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B 55 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 0B: jne 0x58673d38
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 4
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673d41
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 3
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes E9 4D 02 00 00: jmp 0x58673f93
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 3D 02 00 00: je 0x58673f8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F8 E5 0D 00: call 0x58752350
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FE 88 E8 FF: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 3A: jge 0x58673da0
        __asm _emit 0x7d
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 33 E6 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 33 E6 FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 54 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x54
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 0B: jne 0x58673d92
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 4
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673d9b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 5
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x58673f8b
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 48 1A E2 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1a
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x58673de5
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AC 54 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x54
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 1B: jne 0x58673dd7
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AC F7 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 3
        ; Exact mapped bytes 75 0B: jne 0x58673dd7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, 7
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673de0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 6
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E9 A6 01 00 00: jmp 0x58673f8b
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E3 19 E2 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x19
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x58673e2a
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 54 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x54
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1B: jne 0x58673e1c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 F7 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58673e1c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 9
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673e25
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 8
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x58673f8b
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 2ch], 1
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58673e51
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 87 0B E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x58673ef9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 67 0B E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 1ch]
        shr edx, cl
        and edx, dword ptr [eax + 268h]
        ; Exact mapped bytes 75 69: jne 0x58673ef4
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A0 91 E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x58673ef4
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 55 91 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        push 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3D 91 E1 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 8]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x58673ef4
        __asm _emit 0x75
        __asm _emit 0x0f
        movzx edx, word ptr [ebp - 0ch]
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x58673ef4
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58673e48
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 07: je 0x58673f08
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 36: jge 0x58673f46
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 53 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1B: jne 0x58673f3b
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 F6 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 0B: jne 0x58673f3b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 0bh
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673f44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 0ah
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 45: jmp 0x58673f8b
        __asm _emit 0xeb
        __asm _emit 0x45
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 36: jne 0x58673f82
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 53 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x58673f77
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C F6 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 0bh
        ; Exact mapped bytes 75 0B: jne 0x58673f77
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 0dh
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673f80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 0ch
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x58673f8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 0eh
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 06: jmp 0x58673f93
        __asm _emit 0xeb
        __asm _emit 0x06
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 88 76 02 00 00: mov word ptr [eax + 0x276], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp eax, -1
        ; Exact mapped bytes 74 0C: je 0x58673fbe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 278h], 0
        ; Exact mapped bytes 75 0E: jne 0x58673fcc
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 82 74 02 00 00: mov ax, word ptr [edx + 0x274]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BF 82 74 02 00 00: movsx eax, word ptr [edx + 0x274]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, eax
        ; Exact mapped bytes 74 13: je 0x58673ff1
        __asm _emit 0x74
        __asm _emit 0x13
        movzx ecx, word ptr [ebp - 10h]
        push ecx
        movzx edx, word ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E0 31 00 00: call 0x586771d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 12 00 00 00: call 0x58674010
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
