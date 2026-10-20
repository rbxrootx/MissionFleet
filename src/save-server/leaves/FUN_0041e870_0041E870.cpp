// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E870 .. +0x80A bytes.
extern "C" __declspec(naked) void FUN_0041e870_0041E870() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b542h
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
        mov eax, 1be8h
        ; Exact mapped bytes E8 0E 77 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1bf4h]
        mov ecx, 6fah
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
        ; Exact mapped bytes E8 07 70 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 839h
        push 0
        lea ecx, [ebp - 864h]
        push ecx
        ; Exact mapped bytes E8 F1 6F 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea edx, [ebp - 87ch]
        push edx
        ; Exact mapped bytes E8 DE 6F 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 EC 64 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        push 839h
        mov esi, esp
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 64 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 864h]
        push eax
        ; Exact mapped bytes E8 D0 69 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
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
        ; Exact mapped bytes E8 AA 64 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + eax + 83ah]
        mov esi, esp
        push eax
        push 63310ch
        lea ecx, [ebp - 87ch]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 81 64 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 880h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 884h], edx
        cmp dword ptr [ebp - 884h], 0
        ; Exact mapped bytes 0F 85 56 03 00 00: jne 0x41ecea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 864h]
        push ecx
        lea edx, [ebp - 87ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 C4 28 FE FF: call 0x40127b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 888h], al
        mov edx, dword ptr [ebp - 888h]
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 75 21: jne 0x41e9ef
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 1
        push 2
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D B7 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 6B 06 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 888h]
        and eax, 0ffh
        cmp eax, 2
        ; Exact mapped bytes 75 21: jne 0x41ea20
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 2
        push 2
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C B7 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 3A 06 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 888h]
        and ecx, 0ffh
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 B0 02 00 00: jne 0x41ece5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ech
        push 0
        lea edx, [ebp - 1274h]
        push edx
        ; Exact mapped bytes E8 78 6E 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 864h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 1B 2D FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1278h], eax
        cmp dword ptr [ebp - 1278h], -1
        ; Exact mapped bytes 0F 84 47 02 00 00: je 0x41ecba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        lea edx, [ebp - 1188h]
        push edx
        mov eax, dword ptr [ebp - 1278h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 0A 28 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x41ec97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1184h]
        mov dword ptr [ebp - 1274h], edx
        mov eax, dword ptr [ebp - 10c8h]
        mov dword ptr [ebp - 11b8h], eax
        mov esi, esp
        lea ecx, [ebp - 8b4h]
        push ecx
        lea edx, [ebp - 11a4h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1F 63 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 10ech]
        push eax
        lea ecx, [ebp - 11dch]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 63 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 95 40 F7 FF FF: mov dx, word ptr [ebp - 0x8c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 50 EE FF FF: mov word ptr [ebp - 0x11b0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 85 3E F7 FF FF: mov ax, word ptr [ebp - 0x8c2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 4E EE FF FF: mov word ptr [ebp - 0x11b2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D 3C F7 FF FF: mov cx, word ptr [ebp - 0x8c4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 4C EE FF FF: mov word ptr [ebp - 0x11b4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8bch]
        mov dword ptr [ebp - 11ach], edx
        mov esi, esp
        lea eax, [ebp - 1104h]
        push eax
        lea ecx, [ebp - 11f4h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AF 62 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8b8h]
        mov dword ptr [ebp - 11a8h], edx
        ; Exact mapped bytes 66 8B 85 64 F7 FF FF: mov ax, word ptr [ebp - 0x89c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 74 EE FF FF: mov word ptr [ebp - 0x118c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 0D 40 04 67 00: movsx ecx, word ptr [0x670440]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 4fh
        push ecx
        push 670388h
        push 24h
        ; Exact mapped bytes E8 61 D5 0A 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b8ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1b8ch], 0
        ; Exact mapped bytes 74 18: je 0x41eba3
        __asm _emit 0x74
        __asm _emit 0x18
        push 105h
        mov ecx, dword ptr [ebp - 1b8ch]
        ; Exact mapped bytes E8 52 2D FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ba8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41ebad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ba8h], 0
        mov edx, dword ptr [ebp - 1ba8h]
        mov dword ptr [ebp - 1b88h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b88h]
        mov dword ptr [ebp - 127ch], eax
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
        ; Exact mapped bytes E8 11 62 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 127ch]
        ; Exact mapped bytes E8 18 24 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0ech
        lea eax, [ebp - 1274h]
        push eax
        mov ecx, dword ptr [ebp - 127ch]
        ; Exact mapped bytes E8 01 24 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 127ch]
        ; Exact mapped bytes E8 22 2D FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 127ch]
        ; Exact mapped bytes E8 01 29 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 2
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE B4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 127ch], 0
        ; Exact mapped bytes 74 58: je 0x41ec95
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 127ch]
        mov dword ptr [ebp - 1b94h], ecx
        mov edx, dword ptr [ebp - 1b94h]
        mov dword ptr [ebp - 1b90h], edx
        cmp dword ptr [ebp - 1b90h], 0
        ; Exact mapped bytes 74 23: je 0x41ec81
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1b90h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1b90h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 77 61 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1bach], eax
        ; Exact mapped bytes EB 0A: jmp 0x41ec8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bach], 0
        mov dword ptr [ebp - 127ch], 0
        ; Exact mapped bytes EB 21: jmp 0x41ecb8
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 B4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 A2 03 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x41ecdb
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 B4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 7F 03 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 75 03 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6E 03 00 00: jmp 0x41f058
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 864h]
        push ecx
        lea edx, [ebp - 87ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c88h]
        ; Exact mapped bytes E8 A5 25 FE FF: call 0x4012b2
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 1280h], al
        mov edx, dword ptr [ebp - 1280h]
        and edx, 0ffh
        cmp edx, 1
        ; Exact mapped bytes 75 21: jne 0x41ed45
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E7 B3 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 15 03 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1280h]
        and eax, 0ffh
        cmp eax, 2
        ; Exact mapped bytes 75 21: jne 0x41ed76
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 2
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 B3 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x41f05a
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1280h]
        and ecx, 0ffh
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 CD 02 00 00: jne 0x41f058
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        push 0
        lea edx, [ebp - 1b7ch]
        push edx
        ; Exact mapped bytes E8 25 6B 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 864h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 C8 29 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1b80h], eax
        cmp dword ptr [ebp - 1b80h], -1
        ; Exact mapped bytes 0F 84 6D 02 00 00: je 0x41f033
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        lea edx, [ebp - 1b08h]
        push edx
        mov eax, dword ptr [ebp - 1b80h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 B7 24 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 24 02 00 00: je 0x41f013
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1b00h]
        mov dword ptr [ebp - 1b78h], edx
        mov eax, dword ptr [ebp - 1b04h]
        mov dword ptr [ebp - 1b7ch], eax
        mov ecx, dword ptr [ebp - 1ac0h]
        mov dword ptr [ebp - 1b38h], ecx
        mov esi, esp
        lea edx, [ebp - 12ach]
        push edx
        lea eax, [ebp - 1b24h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C0 5F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 1ae4h]
        push ecx
        lea edx, [ebp - 1b5ch]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 5F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp - 1acch]
        push eax
        lea ecx, [ebp - 1b44h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 5F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 95 48 ED FF FF: mov dx, word ptr [ebp - 0x12b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 D0 E4 FF FF: mov word ptr [ebp - 0x1b30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 85 46 ED FF FF: mov ax, word ptr [ebp - 0x12ba]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 CE E4 FF FF: mov word ptr [ebp - 0x1b32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D 44 ED FF FF: mov cx, word ptr [ebp - 0x12bc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D CC E4 FF FF: mov word ptr [ebp - 0x1b34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 12b4h]
        mov dword ptr [ebp - 1b2ch], edx
        mov esi, esp
        lea eax, [ebp - 1afch]
        push eax
        lea ecx, [ebp - 1b74h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 5F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 12b0h]
        mov dword ptr [ebp - 1b28h], edx
        ; Exact mapped bytes 66 8B 85 6C ED FF FF: mov ax, word ptr [ebp - 0x1294]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 F4 E4 FF FF: mov word ptr [ebp - 0x1b0c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 0D 40 04 67 00: movsx ecx, word ptr [0x670440]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 91h
        push ecx
        push 670388h
        push 24h
        ; Exact mapped bytes E8 E2 D1 0A 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b9ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1b9ch], 0
        ; Exact mapped bytes 74 18: je 0x41ef22
        __asm _emit 0x74
        __asm _emit 0x18
        push 8dh
        mov ecx, dword ptr [ebp - 1b9ch]
        ; Exact mapped bytes E8 D3 29 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1bb0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41ef2c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bb0h], 0
        mov edx, dword ptr [ebp - 1bb0h]
        mov dword ptr [ebp - 1b98h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b98h]
        mov dword ptr [ebp - 1b84h], eax
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
        ; Exact mapped bytes E8 92 5E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 1b84h]
        ; Exact mapped bytes E8 99 20 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push 74h
        lea eax, [ebp - 1b7ch]
        push eax
        mov ecx, dword ptr [ebp - 1b84h]
        ; Exact mapped bytes E8 85 20 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 1b84h]
        ; Exact mapped bytes E8 A6 29 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1b84h]
        ; Exact mapped bytes E8 85 25 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 1
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 72 B1 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1b84h], 0
        ; Exact mapped bytes 74 58: je 0x41f011
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 1b84h]
        mov dword ptr [ebp - 1ba4h], ecx
        mov edx, dword ptr [ebp - 1ba4h]
        mov dword ptr [ebp - 1ba0h], edx
        cmp dword ptr [ebp - 1ba0h], 0
        ; Exact mapped bytes 74 23: je 0x41effd
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1ba0h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ba0h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 FB 5D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1bb4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41f007
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bb4h], 0
        mov dword ptr [ebp - 1b84h], 0
        ; Exact mapped bytes EB 1E: jmp 0x41f031
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 B0 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 29: jmp 0x41f05a
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes EB 1E: jmp 0x41f051
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 1
        push 0
        push 80020f11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 B0 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x41f05a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41f05a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        add esp, 1bf4h
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 5D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5d
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
