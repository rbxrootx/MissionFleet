// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4B14 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_004a4b14_004A4B14() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DB A2 02 00: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 0F: je 0x4a4b44
        __asm _emit 0x74
        __asm _emit 0x0f
        push 674ac8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 3D 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a4b51
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 674adch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 674af0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8F 3E 08 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 74h]
        push edx
        push 674b04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DC 3E 08 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        push 674b1ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A9 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 7ch]
        push eax
        push 674b30h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A6 3E 08 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 674b44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 70 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 674b60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6A 3E 08 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8ch]
        push eax
        push 674b78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 34 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 90h]
        push edx
        push 674b90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 3C 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF 3E 08 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        push 674ba0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F8 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 82 94 00 00 00: mov ax, word ptr [edx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 674bb8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 50 3D 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 96 00 00 00: mov dx, word ptr [ecx + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 674bd0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 31 3D 08 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        push 674bech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 674c04h
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 37: je 0x4a4ceb
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x4a4ceb
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 76 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB C3: jmp 0x4a4cae
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x4a4cfd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        push 674c08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 37: je 0x4a4d50
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x4a4d50
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 11 3B 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB C3: jmp 0x4a4d13
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x4a4d62
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 3A 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0a0h], 4a34d0h
        ; Exact mapped bytes 75 0F: jne 0x4a4d80
        __asm _emit 0x75
        __asm _emit 0x0f
        push 674c24h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 3A 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4a4d8d
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 674c58h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 3A 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        push 674c8ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 3A 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
