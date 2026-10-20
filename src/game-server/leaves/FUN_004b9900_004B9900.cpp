// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B9900 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_004b9900_004B9900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        push 81h
        push 58c950h
        push 2
        push 480h
        ; Exact mapped bytes E8 14 09 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 0A: jne 0x4b9932
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1bh
        ; Exact mapped bytes E8 11 34 FF FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes A3 20 F1 5D 00: mov dword ptr [0x5df120], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 20 F2 5D 00 20 00 00 00: mov dword ptr [0x5df220], 0x20
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4b994f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 24h
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes 8B 15 20 F1 5D 00: mov edx, dword ptr [0x5df120]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 480h
        cmp dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 73 23: jae 0x4b9983
        __asm _emit 0x73
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 50h]
        mov byte ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx], 0ffffffffh
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 5], 0ah
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes EB C3: jmp 0x4b9946
        __asm _emit 0xeb
        __asm _emit 0xc3
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes FF 15 A4 22 5E 00: call dword ptr [0x5e22a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 16h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x4b9b25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x4b9b25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 64h], 800h
        ; Exact mapped bytes 7D 08: jge 0x4b99d3
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4b99da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 800h
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 64h], edx
        mov dword ptr [ebp - 5ch], 1
        ; Exact mapped bytes EB 09: jmp 0x4b99f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 8B 0D 20 F2 5D 00: mov ecx, dword ptr [0x5df220]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x4b9a92
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b6h
        push 58c950h
        push 2
        push 480h
        ; Exact mapped bytes E8 19 08 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 0B: jne 0x4b9a2e
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 15 20 F2 5D 00: mov edx, dword ptr [0x5df220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 64: jmp 0x4b9a92
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [eax*4 + 5df120h], ecx
        ; Exact mapped bytes 8B 15 20 F2 5D 00: mov edx, dword ptr [0x5df220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 20h
        ; Exact mapped bytes 89 15 20 F2 5D 00: mov dword ptr [0x5df220], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4b9a55
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 24h
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx*4 + 5df120h]
        add edx, 480h
        cmp dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 73 23: jae 0x4b9a8d
        __asm _emit 0x73
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 50h]
        mov byte ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ecx], 0ffffffffh
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 5], 0ah
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes EB BF: jmp 0x4b9a4c
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x4b99e9
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 1B: jmp 0x4b9ab6
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 60h]
        add eax, 4
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 58h]
        cmp ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 7D 67: jge 0x4b9b25
        __asm _emit 0x7d
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 60h]
        cmp dword ptr [edx], -1
        ; Exact mapped bytes 74 5A: je 0x4b9b20
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x4b9b20
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x4b9af0
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 4C 22 5E 00: call dword ptr [0x5e224c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4b9b20
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 58h]
        sar eax, 5
        mov ecx, dword ptr [ebp - 58h]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        add edx, ecx
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax + 4], dl
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x4b9a9b
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x4b9b37
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 3
        ; Exact mapped bytes 0F 8D D3 00 00 00: jge 0x4b9c14
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        imul ecx, ecx, 24h
        ; Exact mapped bytes 8B 15 20 F1 5D 00: mov edx, dword ptr [0x5df120]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, ecx
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x4b9c00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov byte ptr [ecx + 4], 81h
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 09: jne 0x4b9b74
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 0fffffff6h
        ; Exact mapped bytes EB 10: jmp 0x4b9b84
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 58h]
        sub edx, 1
        neg edx
        sbb edx, edx
        add edx, -0bh
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes FF 15 88 22 5E 00: call dword ptr [0x5e2288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], -1
        ; Exact mapped bytes 74 58: je 0x4b9bef
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 4C 22 5E 00: call dword ptr [0x5e224c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 45: je 0x4b9bef
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 54h]
        and ecx, 0ffh
        cmp ecx, 2
        ; Exact mapped bytes 75 10: jne 0x4b9bd0
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 50h]
        mov al, byte ptr [edx + 4]
        or al, 40h
        mov ecx, dword ptr [ebp - 50h]
        mov byte ptr [ecx + 4], al
        ; Exact mapped bytes EB 1D: jmp 0x4b9bed
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 54h]
        and edx, 0ffh
        cmp edx, 3
        ; Exact mapped bytes 75 0F: jne 0x4b9bed
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax + 4]
        or cl, 8
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes EB 0F: jmp 0x4b9bfe
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax + 4]
        or cl, 40h
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes EB 0F: jmp 0x4b9c0f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax + 4]
        or cl, 80h
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x4b9b2e
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 20 F2 5D 00: mov eax, dword ptr [0x5df220]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 50 22 5E 00: call dword ptr [0x5e2250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
