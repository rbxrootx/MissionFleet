// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B870 .. +0x84D bytes.
extern "C" __declspec(naked) void FUN_0041b870_0041B870() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b430h
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
        mov eax, 12bch
        ; Exact mapped bytes E8 0E A7 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 12c8h]
        mov ecx, 4afh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        push 18h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 07 A0 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63310ch
        lea edx, [ebp - 28h]
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
        ; Exact mapped bytes E8 15 95 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 11h], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 B0 5B FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 A8 5B FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 900h
        push 0
        lea eax, [ebp - 938h]
        push eax
        ; Exact mapped bytes E8 BE 9F 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        push 0
        lea ecx, [ebp - 11c0h]
        push ecx
        ; Exact mapped bytes E8 A8 9F 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 11c4h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 11c8h], edx
        mov byte ptr [ebp - 11cch], 0
        ; Exact mapped bytes 0F BF 05 34 04 67 00: movsx eax, word ptr [0x670434]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 23h
        push eax
        push 670388h
        push 24h
        ; Exact mapped bytes E8 82 07 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1228h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1228h], 0
        ; Exact mapped bytes 74 15: je 0x41b97f
        __asm _emit 0x74
        __asm _emit 0x15
        push 1ah
        mov ecx, dword ptr [ebp - 1228h]
        ; Exact mapped bytes E8 76 5F FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1274h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41b989
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1274h], 0
        mov ecx, dword ptr [ebp - 1274h]
        mov dword ptr [ebp - 1224h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 1224h]
        mov dword ptr [ebp - 11d0h], edx
        cmp dword ptr [ebp - 11c8h], 0
        ; Exact mapped bytes 75 0D: jne 0x41b9be
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 11c4h], 0
        ; Exact mapped bytes 0F 84 03 06 00 00: je 0x41bfc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11c8h], 0
        ; Exact mapped bytes 0F 85 F9 02 00 00: jne 0x41bcc4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 11c4h]
        push eax
        lea ecx, [ebp - 1230h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 3E 59 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 1238h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 5D 60 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 13 5F FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x41bb02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 11cch], 0
        push 1
        lea eax, [ebp - 11cch]
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 CE 55 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 93 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 A8 55 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 C9 5E FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 A8 5A FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 11c8h]
        push eax
        mov ecx, dword ptr [ebp - 11c4h]
        push ecx
        push 80020f0bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B E6 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 74 58: je 0x41baf8
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 11d0h]
        mov dword ptr [ebp - 1240h], edx
        mov eax, dword ptr [ebp - 1240h]
        mov dword ptr [ebp - 123ch], eax
        cmp dword ptr [ebp - 123ch], 0
        ; Exact mapped bytes 74 23: je 0x41bae4
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 123ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 123ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 14 93 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41baee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1278h], 0
        mov dword ptr [ebp - 11d0h], 0
        mov eax, 1
        ; Exact mapped bytes E9 9B 05 00 00: jmp 0x41c09d
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 CD 55 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 11d4h], eax
        push 900h
        lea ecx, [ebp - 938h]
        push ecx
        mov edx, dword ptr [ebp - 11d4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 6A 57 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 82 01 00 00: jne 0x41bcbf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 938h], 0
        ; Exact mapped bytes 0F 85 75 01 00 00: jne 0x41bcbf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 11d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c84h]
        ; Exact mapped bytes E8 5D 56 FE FF: call 0x4011c7
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x41bcbf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7E 0C: jle 0x41bb8a
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D B4: mov cx, word ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D B4: mov word ptr [ebp - 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        push 900h
        lea edx, [ebp - 938h]
        push edx
        mov eax, dword ptr [ebp - 11d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 5E 5A FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea edx, [ebp - 11f8h]
        push edx
        ; Exact mapped bytes E8 05 9D 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 11f8h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 07 5B FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 11cch], 1
        push 1
        lea edx, [ebp - 11cch]
        push edx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 11 54 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 91 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 EB 53 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 0C 5D FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 EB 58 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 11c8h]
        push edx
        mov eax, dword ptr [ebp - 11c4h]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE E4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 74 58: je 0x41bcb5
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 11d0h]
        mov dword ptr [ebp - 1248h], ecx
        mov edx, dword ptr [ebp - 1248h]
        mov dword ptr [ebp - 1244h], edx
        cmp dword ptr [ebp - 1244h], 0
        ; Exact mapped bytes 74 23: je 0x41bca1
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1244h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1244h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 57 91 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 127ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x41bcab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 127ch], 0
        mov dword ptr [ebp - 11d0h], 0
        mov eax, 1
        ; Exact mapped bytes E9 DE 03 00 00: jmp 0x41c09d
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x41bfc1
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 11c8h]
        push eax
        lea ecx, [ebp - 1250h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 45 56 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], edx
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 1258h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 64 5D FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 1A 5C FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x41bdfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 11cch], 0
        push 1
        lea eax, [ebp - 11cch]
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 D5 52 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 90 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 AF 52 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 D0 5B FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 AF 57 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 11c8h]
        push eax
        mov ecx, dword ptr [ebp - 11c4h]
        push ecx
        push 80020f0bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 E3 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 74 58: je 0x41bdf1
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 11d0h]
        mov dword ptr [ebp - 1260h], edx
        mov eax, dword ptr [ebp - 1260h]
        mov dword ptr [ebp - 125ch], eax
        cmp dword ptr [ebp - 125ch], 0
        ; Exact mapped bytes 74 23: je 0x41bddd
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 125ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 125ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 1B 90 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41bde7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1280h], 0
        mov dword ptr [ebp - 11d0h], 0
        mov eax, 1
        ; Exact mapped bytes E9 A2 02 00 00: jmp 0x41c09d
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 D4 52 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 11fch], eax
        push 888h
        lea ecx, [ebp - 11c0h]
        push ecx
        mov edx, dword ptr [ebp - 11fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 71 54 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x41bfc1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11c0h], 0
        ; Exact mapped bytes 0F 85 7E 01 00 00: jne 0x41bfc1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 11fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c88h]
        ; Exact mapped bytes E8 6C 5A FE FF: call 0x4018cf
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x41bfc1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 94ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 7E 12: jle 0x41be8c
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 8D B4 F6 FF FF: mov cx, word ptr [ebp - 0x94c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D B4 F6 FF FF: mov word ptr [ebp - 0x94c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 888h
        lea edx, [ebp - 11c0h]
        push edx
        mov eax, dword ptr [ebp - 11fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 5C 57 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea edx, [ebp - 1220h]
        push edx
        ; Exact mapped bytes E8 03 9A 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1220h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 05 58 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 11cch], 1
        push 1
        lea edx, [ebp - 11cch]
        push edx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 0F 51 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E2 8E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 E9 50 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 0A 5A FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 E9 55 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 11c8h]
        push edx
        mov eax, dword ptr [ebp - 11c4h]
        push eax
        push 80020f0bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC E1 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 74 58: je 0x41bfb7
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 11d0h]
        mov dword ptr [ebp - 1268h], ecx
        mov edx, dword ptr [ebp - 1268h]
        mov dword ptr [ebp - 1264h], edx
        cmp dword ptr [ebp - 1264h], 0
        ; Exact mapped bytes 74 23: je 0x41bfa3
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1264h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1264h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 55 8E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1284h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41bfad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1284h], 0
        mov dword ptr [ebp - 11d0h], 0
        mov eax, 1
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x41c09d
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 11cch], 0
        push 1
        lea eax, [ebp - 11cch]
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 2E 50 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 8E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 08 50 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 29 59 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 11d0h]
        ; Exact mapped bytes E8 08 55 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 11c8h]
        push eax
        mov ecx, dword ptr [ebp - 11c4h]
        push ecx
        push 80020f0bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EB E0 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11d0h], 0
        ; Exact mapped bytes 74 58: je 0x41c098
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 11d0h]
        mov dword ptr [ebp - 1270h], edx
        mov eax, dword ptr [ebp - 1270h]
        mov dword ptr [ebp - 126ch], eax
        cmp dword ptr [ebp - 126ch], 0
        ; Exact mapped bytes 74 23: je 0x41c084
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 126ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 126ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 74 8D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41c08e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1288h], 0
        mov dword ptr [ebp - 11d0h], 0
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
        pop edi
        pop esi
        pop ebx
        add esp, 12c8h
        cmp ebp, esp
        ; Exact mapped bytes E8 39 8D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
