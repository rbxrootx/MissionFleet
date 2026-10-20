// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0690 .. +0x331 bytes.
extern "C" __declspec(naked) void FUN_004b0690_004B0690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 8], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 19: jle 0x4b06d6
        __asm _emit 0x7e
        __asm _emit 0x19
        push 8
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        push ecx
        ; Exact mapped bytes E8 A2 31 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 1A: jmp 0x4b06f0
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        ; Exact mapped bytes A1 7C 16 5D 00: mov eax, dword ptr [0x5d167c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 8
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 13: je 0x4b0709
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB AB: jmp 0x4b06b4
        __asm _emit 0xeb
        __asm _emit 0xab
        ; Exact mapped bytes 0F BE 55 F8: movsx edx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf8
        cmp edx, 2dh
        ; Exact mapped bytes 75 1B: jne 0x4b072d
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 14h]
        or al, 2
        mov dword ptr [ebp + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 8], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1A: jmp 0x4b0747
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 2bh
        ; Exact mapped bytes 75 11: jne 0x4b0747
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7C 0C: jl 0x4b0759
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 06: je 0x4b0759
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 24h
        ; Exact mapped bytes 7E 15: jle 0x4b076e
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x4b0767
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        xor eax, eax
        ; Exact mapped bytes E9 4F 02 00 00: jmp 0x4b09bd
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 38: jne 0x4b07ac
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 30h
        ; Exact mapped bytes 74 09: je 0x4b0786
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], 0ah
        ; Exact mapped bytes EB 26: jmp 0x4b07ac
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 78h
        ; Exact mapped bytes 74 0B: je 0x4b079c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 58h
        ; Exact mapped bytes 75 09: jne 0x4b07a5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes EB 07: jmp 0x4b07ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 8
        cmp dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes 75 39: jne 0x4b07eb
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp eax, 30h
        ; Exact mapped bytes 75 30: jne 0x4b07eb
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 78h
        ; Exact mapped bytes 74 0B: je 0x4b07d1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 58h
        ; Exact mapped bytes 75 1A: jne 0x4b07eb
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 18: jle 0x4b0817
        __asm _emit 0x7e
        __asm _emit 0x18
        push 4
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 61 30 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 1B: jmp 0x4b0832
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        ; Exact mapped bytes 8B 15 7C 16 5D 00: mov edx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, 4
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x4b0844
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        sub ecx, 30h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 5F: jmp 0x4b08a3
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 1C: jle 0x4b0869
        __asm _emit 0x7e
        __asm _emit 0x1c
        push 103h
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 0F 30 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 1D: jmp 0x4b0886
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffh
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 103h
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 15: je 0x4b08a1
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        push eax
        ; Exact mapped bytes E8 AA B0 00 00: call 0x4bb940
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        sub eax, 37h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 02: jmp 0x4b08a3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 5D: jmp 0x4b0900
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 02: jb 0x4b08ad
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 53: jmp 0x4b0900
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp + 14h]
        or edx, 8
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 72 15: jb 0x4b08d3
        __asm _emit 0x72
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 1C: jne 0x4b08e2
        __asm _emit 0x75
        __asm _emit 0x1c
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 77 0F: ja 0x4b08e2
        __asm _emit 0x77
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        imul edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 08: jmp 0x4b08ea
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 14h]
        or al, 4
        mov dword ptr [ebp + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 8], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x4b07f6
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 14h]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x4b0928
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4b091f
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 72: jmp 0x4b099a
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 30: jne 0x4b0962
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 14h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 5E: jne 0x4b099a
        __asm _emit 0x75
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b094f
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 80000000h
        ; Exact mapped bytes 77 13: ja 0x4b0962
        __asm _emit 0x77
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 75 41: jne 0x4b099a
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [ebp - 0ch], 7fffffffh
        ; Exact mapped bytes 76 38: jbe 0x4b099a
        __asm _emit 0x76
        __asm _emit 0x38
        ; Exact mapped bytes E8 09 09 00 00: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 22h
        mov edx, dword ptr [ebp + 14h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x4b0980
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 1A: jmp 0x4b099a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b0993
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 80000000h
        ; Exact mapped bytes EB 07: jmp 0x4b099a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 7fffffffh
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x4b09a8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4b09ba
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        neg ecx
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
