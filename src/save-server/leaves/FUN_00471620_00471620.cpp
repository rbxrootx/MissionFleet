// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471620 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_00471620_00471620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        push 81h
        push 63ee88h
        push 2
        push 480h
        ; Exact mapped bytes E8 84 51 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 0A: jne 0x471652
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1bh
        ; Exact mapped bytes E8 41 4D FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes A3 A0 89 68 00: mov dword ptr [0x6889a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 DC 8A 68 00 20 00 00 00: mov dword ptr [0x688adc], 0x20
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x47166f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 24h
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes 8B 15 A0 89 68 00: mov edx, dword ptr [0x6889a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, 480h
        cmp dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 73 23: jae 0x4716a3
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
        ; Exact mapped bytes EB C3: jmp 0x471666
        __asm _emit 0xeb
        __asm _emit 0xc3
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes FF 15 C8 B8 68 00: call dword ptr [0x68b8c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 16h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x471845
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x471845
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
        ; Exact mapped bytes 7D 08: jge 0x4716f3
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4716fa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 800h
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 64h], edx
        mov dword ptr [ebp - 5ch], 1
        ; Exact mapped bytes EB 09: jmp 0x471712
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 8B 0D DC 8A 68 00: mov ecx, dword ptr [0x688adc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x4717b2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b6h
        push 63ee88h
        push 2
        push 480h
        ; Exact mapped bytes E8 89 50 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 0B: jne 0x47174e
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 15 DC 8A 68 00: mov edx, dword ptr [0x688adc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 64: jmp 0x4717b2
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [eax*4 + 6889a0h], ecx
        ; Exact mapped bytes 8B 15 DC 8A 68 00: mov edx, dword ptr [0x688adc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, 20h
        ; Exact mapped bytes 89 15 DC 8A 68 00: mov dword ptr [0x688adc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x471775
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 24h
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx*4 + 6889a0h]
        add edx, 480h
        cmp dword ptr [ebp - 50h], edx
        ; Exact mapped bytes 73 23: jae 0x4717ad
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
        ; Exact mapped bytes EB BF: jmp 0x47176c
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x471709
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 1B: jmp 0x4717d6
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
        ; Exact mapped bytes 7D 67: jge 0x471845
        __asm _emit 0x7d
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 60h]
        cmp dword ptr [edx], -1
        ; Exact mapped bytes 74 5A: je 0x471840
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x471840
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x471810
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 7C B8 68 00: call dword ptr [0x68b87c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x471840
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 58h]
        sar eax, 5
        mov ecx, dword ptr [ebp - 58h]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
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
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x4717bb
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x471857
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 3
        ; Exact mapped bytes 0F 8D D3 00 00 00: jge 0x471934
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        imul ecx, ecx, 24h
        ; Exact mapped bytes 8B 15 A0 89 68 00: mov edx, dword ptr [0x6889a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, ecx
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x471920
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov byte ptr [ecx + 4], 81h
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 09: jne 0x471894
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 6ch], 0fffffff6h
        ; Exact mapped bytes EB 10: jmp 0x4718a4
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
        ; Exact mapped bytes FF 15 9C B8 68 00: call dword ptr [0x68b89c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], -1
        ; Exact mapped bytes 74 58: je 0x47190f
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 7C B8 68 00: call dword ptr [0x68b87c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 45: je 0x47190f
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 54h]
        and ecx, 0ffh
        cmp ecx, 2
        ; Exact mapped bytes 75 10: jne 0x4718f0
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 50h]
        mov al, byte ptr [edx + 4]
        or al, 40h
        mov ecx, dword ptr [ebp - 50h]
        mov byte ptr [ecx + 4], al
        ; Exact mapped bytes EB 1D: jmp 0x47190d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 54h]
        and edx, 0ffh
        cmp edx, 3
        ; Exact mapped bytes 75 0F: jne 0x47190d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax + 4]
        or cl, 8
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes EB 0F: jmp 0x47191e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax + 4]
        or cl, 40h
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes EB 0F: jmp 0x47192f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 50h]
        mov cl, byte ptr [eax + 4]
        or cl, 80h
        mov edx, dword ptr [ebp - 50h]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x47184e
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 DC 8A 68 00: mov eax, dword ptr [0x688adc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 80 B8 68 00: call dword ptr [0x68b880]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
