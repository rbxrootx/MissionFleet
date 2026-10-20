// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BF40 .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_5882bf40_5882BF40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        push 10h
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B0 0E 02 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 0C 10: movsx ecx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        cmp ecx, 30h
        ; Exact mapped bytes 0F 8C 32 02 00 00: jl 0x5882c1ad
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 14 01: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x01
        cmp edx, 39h
        ; Exact mapped bytes 0F 8F 1A 02 00 00: jg 0x5882c1ad
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov byte ptr [ebp - 10h], 0
        mov byte ptr [ebp - 0fh], 0
        mov byte ptr [ebp - 0eh], 0
        mov byte ptr [ebp - 0dh], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 7C 37: jl 0x5882bffe
        __asm _emit 0x7c
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 39h
        ; Exact mapped bytes 7F 29: jg 0x5882bffe
        __asm _emit 0x7f
        __asm _emit 0x29
        movzx eax, byte ptr [ebp - 10h]
        imul ecx, eax, 0ah
        mov byte ptr [ebp - 10h], cl
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        movzx ecx, byte ptr [ebp - 10h]
        lea edx, [ecx + eax - 30h]
        mov byte ptr [ebp - 10h], dl
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB BB: jmp 0x5882bfb9
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2eh
        ; Exact mapped bytes 74 07: je 0x5882c013
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x5882c225
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 30h
        ; Exact mapped bytes 7C 37: jl 0x5882c061
        __asm _emit 0x7c
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 39h
        ; Exact mapped bytes 7F 29: jg 0x5882c061
        __asm _emit 0x7f
        __asm _emit 0x29
        movzx edx, byte ptr [ebp - 0fh]
        imul eax, edx, 0ah
        mov byte ptr [ebp - 0fh], al
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        movzx eax, byte ptr [ebp - 0fh]
        lea ecx, [eax + edx - 30h]
        mov byte ptr [ebp - 0fh], cl
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB BB: jmp 0x5882c01c
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2eh
        ; Exact mapped bytes 74 07: je 0x5882c076
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x5882c225
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 37: jl 0x5882c0c4
        __asm _emit 0x7c
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7F 29: jg 0x5882c0c4
        __asm _emit 0x7f
        __asm _emit 0x29
        movzx ecx, byte ptr [ebp - 0eh]
        imul edx, ecx, 0ah
        mov byte ptr [ebp - 0eh], dl
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        movzx edx, byte ptr [ebp - 0eh]
        lea eax, [edx + ecx - 30h]
        mov byte ptr [ebp - 0eh], al
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB BB: jmp 0x5882c07f
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2eh
        ; Exact mapped bytes 74 07: je 0x5882c0d9
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x5882c225
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 7C 37: jl 0x5882c127
        __asm _emit 0x7c
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 39h
        ; Exact mapped bytes 7F 29: jg 0x5882c127
        __asm _emit 0x7f
        __asm _emit 0x29
        movzx eax, byte ptr [ebp - 0dh]
        imul ecx, eax, 0ah
        mov byte ptr [ebp - 0dh], cl
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        movzx ecx, byte ptr [ebp - 0dh]
        lea edx, [ecx + eax - 30h]
        mov byte ptr [ebp - 0dh], dl
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB BB: jmp 0x5882c0e2
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3ah
        ; Exact mapped bytes 74 07: je 0x5882c13c
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x5882c225
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 30h
        ; Exact mapped bytes 7C 39: jl 0x5882c18c
        __asm _emit 0x7c
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 39h
        ; Exact mapped bytes 7F 2B: jg 0x5882c18c
        __asm _emit 0x7f
        __asm _emit 0x2b
        movzx edx, word ptr [ebp - 12h]
        imul eax, edx, 0ah
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        movzx eax, word ptr [ebp - 12h]
        lea ecx, [eax + edx - 30h]
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB B9: jmp 0x5882c145
        __asm _emit 0xeb
        __asm _emit 0xb9
        movzx eax, word ptr [ebp - 12h]
        and eax, 0ff00h
        sar eax, 8
        movzx ecx, word ptr [ebp - 12h]
        and ecx, 0ffh
        shl ecx, 8
        or eax, ecx
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        ; Exact mapped bytes EB 66: jmp 0x5882c213
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edx, 2
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 4C 45 89 58: call dword ptr [0x5889454c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 75 4A: jne 0x5882c213
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 78 45 89 58: call dword ptr [0x58894578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 04: jne 0x5882c1e0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 45: jmp 0x5882c225
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx + eax]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ff00h
        shr edx, 8
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffh
        shl eax, 8
        or edx, eax
        ; Exact mapped bytes 66 89 55 EE: mov word ptr [ebp - 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xee
        push 10h
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1B 00 00 00: call 0x5882c240
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 21 4E 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
