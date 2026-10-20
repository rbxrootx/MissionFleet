// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D0DD0 .. +0x2AC bytes.
extern "C" __declspec(naked) void FUN_586d0dd0_586D0DD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c2d0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 58h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b2204h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 18 00 00: call 0x586d2680
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d0e1c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 7D 4E: jge 0x586d0e70
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 60h], 0
        ; Exact mapped bytes 74 3F: je 0x586d0e6e
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x586d0e59
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0e60
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 60h], 0
        ; Exact mapped bytes EB A3: jmp 0x586d0e13
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx + 60h], 0
        ; Exact mapped bytes 74 49: je 0x586d0ecb
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x586d0eb1
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0eb8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 60h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx + 60h], 0
        ; Exact mapped bytes 74 49: je 0x586d0f26
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 60h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x586d0f0c
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0f13
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 3D: je 0x586d0f6f
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x586d0f5b
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0f62
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 3D: je 0x586d0fb8
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 17: je 0x586d0fa4
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d0fab
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d0fca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x586d1064
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 8ch], 0
        ; Exact mapped bytes 74 2F: je 0x586d1013
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 35 00 16 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 8ch], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 6ch], 0
        ; Exact mapped bytes 74 3F: je 0x586d105f
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 6ch]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x586d104a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586d1051
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 6ch], 0
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x586d0fc1
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 48 0E 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
