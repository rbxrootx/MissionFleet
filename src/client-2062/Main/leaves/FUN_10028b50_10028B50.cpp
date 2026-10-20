// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10028B50 .. +0x224 bytes.
extern "C" __declspec(naked) void FUN_10028b50_10028B50() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        cmp eax, -1
        push edi
        mov esi, ecx
        ; Exact mapped bytes 75 75: jne 0x10028bd4
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [esi + 0e8h]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 FD 01 00 00: je 0x10028d6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 56 21 0D 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 E7 01 00 00: je 0x10028d6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        lea ecx, [eax + 20h]
        ; Exact mapped bytes E8 9E 0A 00 00: call 0x10029630
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        shr ecx, 0ch
        and ecx, 0fh
        mov dword ptr [edi + ecx*4 + 83ch], 0
        mov ecx, edi
        ; Exact mapped bytes E8 C3 98 0C 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 60h]
        mov dword ptr [esi + 0e8h], 0ffffffffh
        and ebp, 0ffff0fffh
        mov dword ptr [esi + 60h], ebp
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0d48h]
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x10028d3b
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 F0 20 0D 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 81 01 00 00: je 0x10028d6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e8h]
        xor ebp, ebp
        cmp eax, -1
        ; Exact mapped bytes 74 2B: je 0x10028c22
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 CD 20 0D 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [esi + 60h]
        shr eax, 0ch
        and eax, 0fh
        mov ecx, ebp
        mov dword ptr [ebp + eax*4 + 83ch], 0
        ; Exact mapped bytes E8 50 98 0C 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x10028c71
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 3D C0 58 1C 10: mov edi, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 42: je 0x10028c71
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 0ch]
        cmp dword ptr [edx + 50h], eax
        ; Exact mapped bytes 74 09: je 0x10028c43
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 F1: jne 0x10028c32
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 2E: jmp 0x10028c71
        __asm _emit 0xeb
        __asm _emit 0x2e
        add edi, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 27: je 0x10028c71
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10028c59
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 03: jmp 0x10028c5c
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 4], edx
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x10028c65
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 03: jmp 0x10028c68
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 8], eax
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        dec dword ptr [edi + 0ch]
        mov edi, dword ptr [esp + 18h]
        mov eax, dword ptr [ebx + edi*4 + 83ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x10028d07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 0e8h], -1
        ; Exact mapped bytes 74 7A: je 0x10028d07
        __asm _emit 0x74
        __asm _emit 0x7a
        test ebp, ebp
        ; Exact mapped bytes 74 46: je 0x10028cd7
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [esi + 60h]
        shr ecx, 0ch
        and ecx, 0fh
        mov dword ptr [ebp + ecx*4 + 83ch], eax
        mov ecx, ebp
        ; Exact mapped bytes E8 C8 97 0C 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + edi*4 + 83ch]
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + 60h]
        xor edx, ecx
        and edx, 0f000h
        xor edx, ecx
        mov dword ptr [eax + 60h], edx
        mov eax, dword ptr [ebp + 48h]
        mov ecx, dword ptr [ebx + edi*4 + 83ch]
        shr eax, 0ah
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 30: jmp 0x10028d07
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 8B 15 C0 58 1C 10: mov edx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea ecx, [edx + 20h]
        ; Exact mapped bytes E8 4A 09 00 00: call 0x10029630
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + edi*4 + 83ch]
        mov ecx, dword ptr [eax + 60h]
        and ch, 0fh
        mov dword ptr [eax + 60h], ecx
        mov eax, dword ptr [ebx + edi*4 + 83ch]
        mov dword ptr [eax + 0e8h], 0ffffffffh
        mov ecx, ebx
        mov dword ptr [ebx + edi*4 + 83ch], esi
        ; Exact mapped bytes E8 5B 97 0C 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [esp + 14h]
        and edi, 0fh
        and ch, 0fh
        shl edi, 0ch
        or edi, ecx
        mov dword ptr [esi + 0e8h], edx
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d48h]
        ; Exact mapped bytes E8 A0 81 08 00: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub eax, 190h
        sub ecx, edi
        push ecx
        ; Exact mapped bytes 8B 0D 44 CE 1A 10: mov ecx, dword ptr [0x101ace44]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 31 FC 01 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
