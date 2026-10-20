// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10081D60 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_10081d60_10081D60() {
    __asm {
        sub esp, 404h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 410h]
        push esi
        test ebp, ebp
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 29: je 0x10081da0
        __asm _emit 0x74
        __asm _emit 0x29
        xor edi, edi
        ; Exact mapped bytes 66 39 BE 8E 0C 00 00: cmp word ptr [esi + 0xc8e], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1E: jle 0x10081da0
        __asm _emit 0x7e
        __asm _emit 0x1e
        lea ebx, [esi + 64h]
        push ebp
        push ebx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x10081dc9
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 0F BF 86 8E 0C 00 00: movsx eax, word ptr [esi + 0xc8e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        add ebx, 18h
        cmp edi, eax
        ; Exact mapped bytes 7C E5: jl 0x10081d85
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 66 8B BE 8E 0C 00 00: mov di, word ptr [esi + 0xc8e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 0F BF CF: movsx ecx, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcf
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 1E 01 00 00: jle 0x10081ed2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 64h]
        cmp byte ptr [edx], 0
        ; Exact mapped bytes 74 3D: je 0x10081df9
        __asm _emit 0x74
        __asm _emit 0x3d
        inc eax
        add edx, 18h
        cmp eax, ecx
        ; Exact mapped bytes 7C F3: jl 0x10081db7
        __asm _emit 0x7c
        __asm _emit 0xf3
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x10081ed2
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + edi*2]
        mov al, byte ptr [esi + ecx*8 + 64h]
        test al, al
        ; Exact mapped bytes 74 CC: je 0x10081da0
        __asm _emit 0x74
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1c3h
        ; Exact mapped bytes E8 C6 BC F9 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea edx, [eax + eax*2]
        push ebp
        lea eax, [esi + edx*8 + 64h]
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 FF 86 8C 0C 00 00: inc word ptr [esi + 0xc8c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 8C 0C 00 00: mov ax, word ptr [esi + 0xc8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 28: jne 0x10081e44
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 E9 28 08 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 DE 28 08 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 BC 37 01 00: call 0x10095600
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        push ebp
        lea edx, [esp + 14h]
        push 101aba44h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0c7ch]
        add esp, 0ch
        push 0ffd997h
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 41 1E 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        push 0ffffffh
        lea eax, [esp + 14h]
        push -1
        push eax
        ; Exact mapped bytes E8 2A 1E 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 FF 28 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 F4 28 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 8C 0C 00 00 01: cmp word ptr [esi + 0xc8c], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x10081fa8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 41ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x10081fa8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 FF 80 00: cmp di, 0x80
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x10081efe
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1c2h
        ; Exact mapped bytes E8 C1 BB F9 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ecx + ecx*2]
        push ebp
        lea ecx, [esi + eax*8 + 64h]
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 FF 86 8E 0C 00 00: inc word ptr [esi + 0xc8e]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 86 8C 0C 00 00: inc word ptr [esi + 0xc8c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 8C 0C 00 00: mov ax, word ptr [esi + 0xc8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 28: jne 0x10081f50
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 DD 27 08 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 D2 27 08 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 B0 36 01 00: call 0x10095600
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push ebp
        lea eax, [esp + 14h]
        push 101aba44h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0c7ch]
        add esp, 0ch
        push 0ffd997h
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 35 1D 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffffh
        lea ecx, [esp + 14h]
        push -1
        push ecx
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 1E 1D 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 F3 27 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 E8 27 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
