// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415180 .. +0x6F4 bytes.
extern "C" __declspec(naked) void FUN_00415180_00415180() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b268h
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
        mov eax, 20ae4h
        ; Exact mapped bytes E8 FE 0D 05 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 20af0h]
        mov ecx, 82b9h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp - 20a34h]
        push eax
        ; Exact mapped bytes E8 EF D3 08 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e4h
        ; Exact mapped bytes E8 C1 02 11 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63310ch
        mov edx, dword ptr [ebp - 10h]
        add edx, 0f4h
        push edx
        ; Exact mapped bytes E8 B7 C9 08 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A5 C7 FE FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F C0 FE FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        push 63404ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 82 79 0B 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 6D 7E 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        push 63315ch
        lea ecx, [ebp - 10520h]
        ; Exact mapped bytes E8 DF C5 FE FF: call 0x40181b
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 633110h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 9F 7D 0B 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x7d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, 0f4h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 01 7E 0B 00: call 0x4cd06e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 1B 7E 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        push 63315ch
        lea ecx, [ebp - 20a30h]
        ; Exact mapped bytes E8 8D C5 FE FF: call 0x40181b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 3C 78 0B 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 100h
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 24 78 0B 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, 100h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 0D 78 0B 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 F5 77 0B 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x77
        __asm _emit 0x0b
        __asm _emit 0x00
        push 634040h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 F1 7C 0B 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        push 634030h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 DE 7C 0B 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        push 634020h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 CB 7C 0B 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        push 634010h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 B8 7C 0B 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        push 633ffch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 A5 7C 0B 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 108h], 0
        ; Exact mapped bytes 74 5E: je 0x4153ba
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 20a3ch], ecx
        mov edx, dword ptr [ebp - 20a3ch]
        mov dword ptr [ebp - 20a38h], edx
        cmp dword ptr [ebp - 20a38h], 0
        ; Exact mapped bytes 74 23: je 0x4153a3
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 20a38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20a38h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 55 FA 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20a8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x4153ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20a8ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 108h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 10ch], 0
        ; Exact mapped bytes 74 5E: je 0x415424
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10ch]
        mov dword ptr [ebp - 20a44h], eax
        mov ecx, dword ptr [ebp - 20a44h]
        mov dword ptr [ebp - 20a40h], ecx
        cmp dword ptr [ebp - 20a40h], 0
        ; Exact mapped bytes 74 23: je 0x41540d
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 20a40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20a40h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 EB F9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20a90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x415417
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20a90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 110h], 0
        ; Exact mapped bytes 74 5E: je 0x41548e
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 20a4ch], ecx
        mov edx, dword ptr [ebp - 20a4ch]
        mov dword ptr [ebp - 20a48h], edx
        cmp dword ptr [ebp - 20a48h], 0
        ; Exact mapped bytes 74 23: je 0x415477
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 20a48h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20a48h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 81 F9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20a94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x415481
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20a94h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 110h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 74 5E: je 0x4154f8
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 20a54h], eax
        mov ecx, dword ptr [ebp - 20a54h]
        mov dword ptr [ebp - 20a50h], ecx
        cmp dword ptr [ebp - 20a50h], 0
        ; Exact mapped bytes 74 23: je 0x4154e1
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 20a50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20a50h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 17 F9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20a98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4154eb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20a98h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 114h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 118h], 0
        ; Exact mapped bytes 74 5E: je 0x415562
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 20a5ch], ecx
        mov edx, dword ptr [ebp - 20a5ch]
        mov dword ptr [ebp - 20a58h], edx
        cmp dword ptr [ebp - 20a58h], 0
        ; Exact mapped bytes 74 23: je 0x41554b
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 20a58h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20a58h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 AD F8 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20a9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x415555
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20a9ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        ; Exact mapped bytes 0F BF 0D 14 04 67 00: movsx ecx, word ptr [0x670414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 31h
        push ecx
        push 670388h
        push 158h
        ; Exact mapped bytes E8 57 6B 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20a64h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20a64h], 0
        ; Exact mapped bytes 74 24: je 0x4155b6
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 F6 7A 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20a64h]
        ; Exact mapped bytes E8 08 BE FE FF: call 0x4013b6
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20aa0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4155c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20aa0h], 0
        mov edx, dword ptr [ebp - 20aa0h]
        mov dword ptr [ebp - 20a60h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20a60h]
        mov dword ptr [eax + 108h], ecx
        ; Exact mapped bytes 0F BF 15 14 04 67 00: movsx edx, word ptr [0x670414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 32h
        push edx
        push 670388h
        push 148h
        ; Exact mapped bytes E8 DA 6A 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20a6ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 20a6ch], 0
        ; Exact mapped bytes 74 24: je 0x415633
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 79 7A 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20a6ch]
        ; Exact mapped bytes E8 EA BD FE FF: call 0x401415
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20aa4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x41563d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20aa4h], 0
        mov eax, dword ptr [ebp - 20aa4h]
        mov dword ptr [ebp - 20a68h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20a68h]
        mov dword ptr [ecx + 10ch], edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 43 C4 FE FF: call 0x401aaf
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes E8 E9 C2 FE FF: call 0x401965
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 15 14 04 67 00: movsx edx, word ptr [0x670414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 36h
        push edx
        push 670388h
        push 158h
        ; Exact mapped bytes E8 3D 6A 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20a74h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 20a74h], 0
        ; Exact mapped bytes 74 24: je 0x4156d0
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 DC 79 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20a74h]
        ; Exact mapped bytes E8 F4 BB FE FF: call 0x4012bc
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20aa8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4156da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20aa8h], 0
        mov eax, dword ptr [ebp - 20aa8h]
        mov dword ptr [ebp - 20a70h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20a70h]
        mov dword ptr [ecx + 110h], edx
        ; Exact mapped bytes 0F BF 05 14 04 67 00: movsx eax, word ptr [0x670414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 37h
        push eax
        push 670388h
        push 158h
        ; Exact mapped bytes E8 C0 69 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20a7ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 20a7ch], 0
        ; Exact mapped bytes 74 24: je 0x41574d
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 5F 79 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x79
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20a7ch]
        ; Exact mapped bytes E8 96 BF FE FF: call 0x4016db
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20aach], eax
        ; Exact mapped bytes EB 0A: jmp 0x415757
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20aach], 0
        mov ecx, dword ptr [ebp - 20aach]
        mov dword ptr [ebp - 20a78h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 20a78h]
        mov dword ptr [edx + 114h], eax
        ; Exact mapped bytes 0F BF 0D 14 04 67 00: movsx ecx, word ptr [0x670414]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 38h
        push ecx
        push 670388h
        push 158h
        ; Exact mapped bytes E8 43 69 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20a84h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 20a84h], 0
        ; Exact mapped bytes 74 24: je 0x4157ca
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 E2 78 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x78
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20a84h]
        ; Exact mapped bytes E8 F4 BB FE FF: call 0x4013b6
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20ab0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4157d4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ab0h], 0
        mov edx, dword ptr [ebp - 20ab0h]
        mov dword ptr [ebp - 20a80h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20a80h]
        mov dword ptr [eax + 118h], ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 AC C2 FE FF: call 0x401aaf
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 9C C2 FE FF: call 0x401aaf
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 8C C2 FE FF: call 0x401aaf
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20a88h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20a30h]
        ; Exact mapped bytes E8 7E BC FE FF: call 0x4014ba
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10520h]
        ; Exact mapped bytes E8 6C BC FE FF: call 0x4014ba
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20a88h]
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
        add esp, 20af0h
        cmp ebp, esp
        ; Exact mapped bytes E8 82 F5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf5
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
