// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100554C0 .. +0x32A bytes.
extern "C" __declspec(naked) void FUN_100554c0_100554C0() {
    __asm {
        push -1
        push 1016ee0ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push esi
        mov esi, ecx
        push 198h
        ; Exact mapped bytes E8 BB 72 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 10: je 0x10055508
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 101aab5ch
        mov ecx, eax
        ; Exact mapped bytes E8 BA A5 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1005550a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebp
        push edi
        or ebp, 0ffffffffh
        push 54h
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esi + 3f0h], eax
        ; Exact mapped bytes E8 80 72 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], edi
        test edi, edi
        mov dword ptr [esp + 28h], 1
        ; Exact mapped bytes 74 29: je 0x1005555e
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, edi
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        push eax
        push 0
        push 0
        push 0fffffce0h
        push 0
        push esi
        ; Exact mapped bytes E8 61 94 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x10055560
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        lea eax, [esp + 0ch]
        mov dword ptr [esp + 28h], ebp
        push eax
        push 0f003fh
        push 0
        push 10197c20h
        push 80000002h
        mov dword ptr [esi + 3f4h], edi
        mov dword ptr [esp + 2ch], 80h
        mov dword ptr [esp + 24h], 1
        ; Exact mapped bytes FF 15 14 50 17 10: call dword ptr [0x10175014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D 10 50 17 10: mov edi, dword ptr [0x10175010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x100555c6
        __asm _emit 0x74
        __asm _emit 0x26
        lea ecx, [esp + 14h]
        lea edx, [esp + 0ch]
        push ecx
        push edx
        push 0
        push 0f003fh
        push 0
        push 101ace48h
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea eax, [esp + 18h]
        lea ecx, [esp + 10h]
        push eax
        mov eax, dword ptr [esp + 10h]
        lea edx, [esp + 18h]
        push ecx
        push edx
        push 0
        push 101aab2ch
        push eax
        ; Exact mapped bytes FF 15 00 50 17 10: call dword ptr [0x10175000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x1005562c
        __asm _emit 0x74
        __asm _emit 0x41
        lea ecx, [esp + 14h]
        lea edx, [esp + 0ch]
        push ecx
        push edx
        push 0
        push 0f003fh
        push 0
        push 101aab2ch
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 0ch]
        lea eax, [esp + 10h]
        push 4
        push eax
        push 4
        push 0
        push 101aab2ch
        push ecx
        ; Exact mapped bytes FF 15 04 50 17 10: call dword ptr [0x10175004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 0C 50 17 10: call dword ptr [0x1017500c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 FF 01: cmp di, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 BE 16 01 00 00: mov word ptr [esi + 0x116], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 33: jne 0x1005567b
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [esi + 3f0h]
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x10055666
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10055666
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x10055668
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f4h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x10055706
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x100556de
        __asm _emit 0xeb
        __asm _emit 0x63
        xor edx, edx
        mov ecx, 1019b025h
        ; Exact mapped bytes 66 0F B6 41 FF: movzx ax, byte ptr [ecx - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 29: movzx bp, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x29
        shl eax, 4
        or eax, ebp
        ; Exact mapped bytes 66 0F B6 69 01: movzx bp, byte ptr [ecx + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x69
        __asm _emit 0x01
        shl eax, 4
        or eax, ebp
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 11: je 0x100556b0
        __asm _emit 0x74
        __asm _emit 0x11
        add ecx, 0cb8h
        inc edx
        cmp ecx, 101a7ba5h
        ; Exact mapped bytes 7C D4: jl 0x10055682
        __asm _emit 0x7c
        __asm _emit 0xd4
        ; Exact mapped bytes EB 56: jmp 0x10055706
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [edx*4 + 101c5658h]
        cmp dword ptr [edx + 164h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100556cf
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x100556cf
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 02: jmp 0x100556d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f4h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10055706
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 6ch
        ; Exact mapped bytes E8 93 70 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        pop edi
        mov dword ptr [esp + 24h], 2
        test eax, eax
        pop ebp
        ; Exact mapped bytes 74 3C: je 0x1005575e
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 3f0h]
        cmp dword ptr [ecx + 160h], 7
        ; Exact mapped bytes 7E 12: jle 0x10055743
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10055743
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 1c0h]
        ; Exact mapped bytes EB 02: jmp 0x10055745
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        ; Exact mapped bytes 66 41: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        push ecx
        push 0fffffce0h
        push 0
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 04 CC FD FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10055760
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi + 398h], eax
        ; Exact mapped bytes E8 E6 99 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x99
        __asm _emit 0x0a
        __asm _emit 0x00
        push 6ch
        ; Exact mapped bytes E8 1F 70 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 3
        ; Exact mapped bytes 74 3E: je 0x100557d2
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 3f0h]
        cmp dword ptr [ecx + 160h], 6
        ; Exact mapped bytes 7E 12: jle 0x100557b5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100557b5
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 180h
        ; Exact mapped bytes EB 02: jmp 0x100557b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 02: add dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x02
        push edx
        push 0fffffce0h
        push 0
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 90 CB FD FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100557d4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esi + 394h], eax
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ret
    }
}
