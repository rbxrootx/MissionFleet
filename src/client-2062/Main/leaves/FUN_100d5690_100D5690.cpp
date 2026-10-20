// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D5690 .. +0x3FC bytes.
extern "C" __declspec(naked) void FUN_100d5690_100D5690() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 E4 03 00 00: je 0x100d5a89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 81 E1 00 1F 00 00: and ecx, 0x1f00
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 9A 02 00 00: jne 0x100d5952
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D0 00 00 00: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 70 02 00 00: je 0x100d5937
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 50: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x50
        ; Exact mapped bytes 8B 7E 04: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6E 08: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x08
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 8B 7E 54: mov edi, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x54
        ; Exact mapped bytes 2B FD: sub edi, ebp
        __asm _emit 0x2b
        __asm _emit 0xfd
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x100d5765
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 10: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 7D 68: jge 0x100d574e
        __asm _emit 0x7d
        __asm _emit 0x68
        ; Exact mapped bytes 83 F8 F0: cmp eax, -0x10
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xf0
        ; Exact mapped bytes 7E 63: jle 0x100d574e
        __asm _emit 0x7e
        __asm _emit 0x63
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 7D 46: jge 0x100d5736
        __asm _emit 0x7d
        __asm _emit 0x46
        ; Exact mapped bytes 83 F8 F8: cmp eax, -8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xf8
        ; Exact mapped bytes 7E 41: jle 0x100d5736
        __asm _emit 0x7e
        __asm _emit 0x41
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 7D 26: jge 0x100d571f
        __asm _emit 0x7d
        __asm _emit 0x26
        ; Exact mapped bytes 83 F8 FC: cmp eax, -4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfc
        ; Exact mapped bytes 7E 21: jle 0x100d571f
        __asm _emit 0x7e
        __asm _emit 0x21
        ; Exact mapped bytes 0F BF 86 D4 00 00 00: movsx eax, word ptr [esi + 0xd4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E0: shl eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe0
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 01 00 00 00: mov dword ptr [esi + 0xd0], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 97 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 46 03 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 86 D4 00 00 00: movsx eax, word ptr [esi + 0xd4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E0: shl eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe0
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 FF 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 2F 03 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 86 D4 00 00 00: movsx eax, word ptr [esi + 0xd4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 02: shl eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 E7 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 03 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D0 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 00 03 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE D4 00 00 00 01: cmp word ptr [esi + 0xd4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x100d5856
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 01: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 37: jne 0x100d57af
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8D 48 08: lea ecx, [eax + 8]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 7E 13: jle 0x100d5793
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A2 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 D2 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 60: jne 0x100d57f7
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 02 00 00 00: mov dword ptr [esi + 0xd0], 2
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 23: jne 0x100d57d7
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 48 FC: lea ecx, [eax - 4]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfc
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 67 01 00 00: jne 0x100d5926
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 03 00 00 00: mov dword ptr [esi + 0xd0], 3
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 2E: jne 0x100d580a
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 8D 48 02: lea ecx, [eax + 2]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 14: jne 0x100d57f7
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 96 D0 00 00 00: mov dword ptr [esi + 0xd0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3E 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 6E 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 2B 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 75 23: jne 0x100d5831
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 50 FF: lea edx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x100d5926
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 05 00 00 00: mov dword ptr [esi + 0xd0], 5
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 04 96 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 05: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x100d5929
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 B9: jne 0x100d57f7
        __asm _emit 0x75
        __asm _emit 0xb9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 06 00 00 00: mov dword ptr [esi + 0xd0], 6
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 01: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 75 3B: jne 0x100d5896
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8D 48 F8: lea ecx, [eax - 8]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xf8
        ; Exact mapped bytes 83 F9 FE: cmp ecx, -2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 7D 13: jge 0x100d5876
        __asm _emit 0x7d
        __asm _emit 0x13
        ; Exact mapped bytes B8 FE FF FF FF: mov eax, 0xfffffffe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BF 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x100d5926
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 02 00 00 00: mov dword ptr [esi + 0xd0], 2
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 23: jne 0x100d58be
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 48 04: lea ecx, [eax + 4]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 51 FF FF FF: jne 0x100d57f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 03 00 00 00: mov dword ptr [esi + 0xd0], 3
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 77 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 1B: jne 0x100d58de
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8D 48 FE: lea ecx, [eax - 2]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfe
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 5C: jne 0x100d5926
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 96 D0 00 00 00: mov dword ptr [esi + 0xd0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 57 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 75 23: jne 0x100d5905
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 0A FF FF FF: jne 0x100d57f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 05 00 00 00: mov dword ptr [esi + 0xd0], 5
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 05: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 1F: jne 0x100d5929
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 18: jne 0x100d5926
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 D0 00 00 00 06 00 00 00: mov dword ptr [esi + 0xd0], 6
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F 95 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 FE 94 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 25 FF E2 00 00: and eax, 0xe2ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 0C 01 00 00 00 00 00 00: mov dword ptr [esi + 0x10c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 CC 02: or ah, 2
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x100d59eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 54: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 0F BF 8E D4 00 00 00: movsx ecx, word ptr [esi + 0xd4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 86 0C 01 00 00: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A9 94 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 D4 00 00 00: mov ax, word ptr [esi + 0xd4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x100d599e
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 50: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x50
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 7E 10: jle 0x100d59ae
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 3F: jne 0x100d59e3
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 50: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x50
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 7C 35: jl 0x100d59e3
        __asm _emit 0x7c
        __asm _emit 0x35
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 96 CC 00 00 00: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C8 00 00 00: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF E5 00 00: and ecx, 0xe5ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 CD 05: or ch, 5
        __asm _emit 0x80
        __asm _emit 0xcd
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 FC 92 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 0C 01 00 00 00 00 00 00: mov dword ptr [esi + 0x10c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x100d5a65
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 86 0C 01 00 00: inc dword ptr [esi + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7A: jmp 0x100d5a65
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 3A: jne 0x100d5a2c
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 B7 05 00 00: call 0x100d5fb0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 01 00 00: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 2C 01 00 00: cmp eax, 0x12c
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 07: jae 0x100d5a0d
        __asm _emit 0x73
        __asm _emit 0x07
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 86 0C 01 00 00: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 BE 0C 01 00 00 2C 01 00 00: cmp dword ptr [esi + 0x10c], 0x12c
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 4C: jne 0x100d5a65
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 86 10 01 00 00: mov eax, dword ptr [esi + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 42: je 0x100d5a65
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB 39: jmp 0x100d5a65
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes 66 81 F9 00 05: cmp cx, 0x500
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 32: jne 0x100d5a65
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8E DC 00 00 00: lea ecx, [esi + 0xdc]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 39 00: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x100d5a4a
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 7C F3: jl 0x100d5a3b
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes EB 1B: jmp 0x100d5a65
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 86 10 01 00 00 01 00 00 00: mov dword ptr [esi + 0x110], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 0C 01 00 00 00 00 00 00: mov dword ptr [esi + 0x10c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1D: je 0x100d5a89
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 79 38: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x38
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 0E: je 0x100d5a84
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 75 EB: jne 0x100d5a6c
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
