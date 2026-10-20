// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046A3D0 .. +0x331 bytes.
extern "C" __declspec(naked) void FUN_0046a3d0_0046A3D0() {
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
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 19: jle 0x46a416
        __asm _emit 0x7e
        __asm _emit 0x19
        push 8
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        push ecx
        ; Exact mapped bytes E8 B2 65 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 1A: jmp 0x46a430
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        ; Exact mapped bytes A1 C0 DE 67 00: mov eax, dword ptr [0x67dec0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
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
        ; Exact mapped bytes 74 13: je 0x46a449
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB AB: jmp 0x46a3f4
        __asm _emit 0xeb
        __asm _emit 0xab
        ; Exact mapped bytes 0F BE 55 F8: movsx edx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf8
        cmp edx, 2dh
        ; Exact mapped bytes 75 1B: jne 0x46a46d
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
        ; Exact mapped bytes EB 1A: jmp 0x46a487
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 2bh
        ; Exact mapped bytes 75 11: jne 0x46a487
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7C 0C: jl 0x46a499
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 06: je 0x46a499
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 24h
        ; Exact mapped bytes 7E 15: jle 0x46a4ae
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x46a4a7
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        xor eax, eax
        ; Exact mapped bytes E9 4F 02 00 00: jmp 0x46a6fd
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 38: jne 0x46a4ec
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 30h
        ; Exact mapped bytes 74 09: je 0x46a4c6
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], 0ah
        ; Exact mapped bytes EB 26: jmp 0x46a4ec
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 78h
        ; Exact mapped bytes 74 0B: je 0x46a4dc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 58h
        ; Exact mapped bytes 75 09: jne 0x46a4e5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes EB 07: jmp 0x46a4ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 8
        cmp dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes 75 39: jne 0x46a52b
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        cmp eax, 30h
        ; Exact mapped bytes 75 30: jne 0x46a52b
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 78h
        ; Exact mapped bytes 74 0B: je 0x46a511
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 58h
        ; Exact mapped bytes 75 1A: jne 0x46a52b
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
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 18: jle 0x46a557
        __asm _emit 0x7e
        __asm _emit 0x18
        push 4
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 71 64 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 1B: jmp 0x46a572
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        ; Exact mapped bytes 8B 15 C0 DE 67 00: mov edx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
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
        ; Exact mapped bytes 74 0C: je 0x46a584
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        sub ecx, 30h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 5F: jmp 0x46a5e3
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 1C: jle 0x46a5a9
        __asm _emit 0x7e
        __asm _emit 0x1c
        push 103h
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 1F 64 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 1D: jmp 0x46a5c6
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffh
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
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
        ; Exact mapped bytes 74 15: je 0x46a5e1
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        push eax
        ; Exact mapped bytes E8 DA CD 00 00: call 0x4773b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        sub eax, 37h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 02: jmp 0x46a5e3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 5D: jmp 0x46a640
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 02: jb 0x46a5ed
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 53: jmp 0x46a640
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp + 14h]
        or edx, 8
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 72 15: jb 0x46a613
        __asm _emit 0x72
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 1C: jne 0x46a622
        __asm _emit 0x75
        __asm _emit 0x1c
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 77 0F: ja 0x46a622
        __asm _emit 0x77
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        imul edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 08: jmp 0x46a62a
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
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x46a536
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
        ; Exact mapped bytes 75 15: jne 0x46a668
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x46a65f
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 72: jmp 0x46a6da
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 30: jne 0x46a6a2
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 14h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 5E: jne 0x46a6da
        __asm _emit 0x75
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x46a68f
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 80000000h
        ; Exact mapped bytes 77 13: ja 0x46a6a2
        __asm _emit 0x77
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 75 41: jne 0x46a6da
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [ebp - 0ch], 7fffffffh
        ; Exact mapped bytes 76 38: jbe 0x46a6da
        __asm _emit 0x76
        __asm _emit 0x38
        ; Exact mapped bytes E8 D9 2F 00 00: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 22h
        mov edx, dword ptr [ebp + 14h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x46a6c0
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 1A: jmp 0x46a6da
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x46a6d3
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 80000000h
        ; Exact mapped bytes EB 07: jmp 0x46a6da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 7fffffffh
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x46a6e8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x46a6fa
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
