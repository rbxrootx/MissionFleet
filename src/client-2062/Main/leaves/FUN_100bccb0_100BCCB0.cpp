// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BCCB0 .. +0x1FD bytes.
extern "C" __declspec(naked) void FUN_100bccb0_100BCCB0() {
    __asm {
        sub esp, 100h
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 220000h
        ; Exact mapped bytes E8 4B F4 FF FF: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        xor ebx, ebx
        mov dword ptr [esi + 74h], 40000000h
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 114h]
        xor eax, eax
        mov edi, dword ptr [ecx + 80h]
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        cmp ecx, ebx
        ; Exact mapped bytes 7E 23: jle 0x100bcd20
        __asm _emit 0x7e
        __asm _emit 0x23
        mov edx, dword ptr [esi + 114h]
        inc eax
        cmp eax, ecx
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx], bl
        mov edx, dword ptr [esi + 114h]
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx + eax - 1], bl
        ; Exact mapped bytes 7C DD: jl 0x100bccfd
        __asm _emit 0x7c
        __asm _emit 0xdd
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 95 F0 F5 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esi + 114h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 101ad0e8h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea ecx, [esi + 0bch]
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [esi + 118h]
        mov dword ptr [esi + 0b8h], 2
        mov dword ptr [esi + 0b4h], 100000h
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 16ch]
        push ebx
        ; Exact mapped bytes E8 8F 29 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 168h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x100bcdab
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 1017f514h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100bcdab
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1017f514h
        lea edx, [esp + 10h]
        push 101ac020h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 198h]
        add esp, 0ch
        lea eax, [esp + 0ch]
        push 0ffff00h
        push -1
        push eax
        ; Exact mapped bytes E8 D6 6E 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 55 70 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        ; Exact mapped bytes 75 0B: jne 0x100bcdfd
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 93 79 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 40 79 04 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        lea eax, [esp + 0ch]
        push 0ffff00h
        push eax
        ; Exact mapped bytes E8 6B C4 04 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 194h]
        mov dword ptr [eax + 6ch], 0ffff00h
        mov dword ptr [eax + 70h], ebx
        mov ecx, dword ptr [esi + 19ch]
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 180h], ebx
        ; Exact mapped bytes E8 C4 78 04 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 B9 78 04 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 AE 78 04 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 A3 78 04 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        sub ecx, 32h
        push ecx
        mov ecx, dword ptr [esi + 194h]
        ; Exact mapped bytes E8 41 1F 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 130h]
        push ebx
        ; Exact mapped bytes E8 15 56 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 128h]
        push ebx
        ; Exact mapped bytes E8 09 56 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, dword ptr [esi + 140h]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        pop ebx
        add esp, 100h
        ret
    }
}
