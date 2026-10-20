// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5BE0 .. +0x1C1 bytes.
extern "C" __declspec(naked) void FUN_587b5be0_587B5BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x587b5d9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 7C 44 89 58: call dword ptr [0x5889447c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 68h], edx
        mov dword ptr [ecx + 6ch], eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 FE FF FF: call 0x587b5af0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 FE FF FF: call 0x587b5af0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 97 CE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x97
        __asm _emit 0xce
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587b5c75
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587b5c75
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4D: je 0x587b5cd1
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b5c98
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x587b5c7e
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 FA CD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x587b5ca9
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x587b5cd1
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 FB CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB AD: jmp 0x587b5c7e
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 7C 5F: jl 0x587b5d39
        __asm _emit 0x7c
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 56: je 0x587b5d39
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 0ch]
        mov eax, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 38 6A CE FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0xce
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x587b5d51
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x587b5d51
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x587b5d9b
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x587b5d99
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b5d71
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x587b5d57
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE FA CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB BE: jmp 0x587b5d57
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x587b5d51
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
