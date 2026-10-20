// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BC110 .. +0x3D4 bytes.
extern "C" __declspec(naked) void FUN_100bc110_100BC110() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, eax
        and ecx, 0f00000h
        mov dword ptr [esi + 120h], eax
        cmp ecx, 100000h
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x100bc339
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 200000h
        ; Exact mapped bytes 0F 85 9D 03 00 00: jne 0x100bc4dd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0f0000h
        cmp eax, 20000h
        ; Exact mapped bytes 0F 85 8D 03 00 00: jne 0x100bc4dd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 19ch]
        mov ecx, 0fff0h
        mov edi, 0fffeh
        xor ebp, ebp
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 170h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 174h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 168h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1d0h]
        cmp eax, ebp
        ; Exact mapped bytes 75 49: jne 0x100bc1f5
        __asm _emit 0x75
        __asm _emit 0x49
        mov ebx, dword ptr [esi + 164h]
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 66 2F 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 7ch], ebp
        mov eax, dword ptr [esi + 164h]
        push ebp
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ebx, dword ptr [esi + 15ch]
        mov ecx, ebx
        ; Exact mapped bytes E8 4B 2F 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 7ch], ebp
        mov eax, dword ptr [esi + 15ch]
        push ebp
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ebx, dword ptr [esi + 160h]
        mov ecx, ebx
        ; Exact mapped bytes E8 30 2F 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 7ch], ebp
        ; Exact mapped bytes EB 14: jmp 0x100bc209
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [esi + 164h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 15ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 160h]
        push ebp
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 194h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 184h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 188h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 18ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 190h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 178h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 17ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 19ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 150h]
        ; Exact mapped bytes E8 1D 62 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        push ebp
        ; Exact mapped bytes E8 11 62 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 158h]
        push ebp
        ; Exact mapped bytes E8 05 62 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 11: jle 0x100bc2ba
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100bc2ba
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x100bc2bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 148h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bc2f1
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        mov eax, dword ptr [esi + 118h]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 114h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        lea ecx, [esi + 1a4h]
        mov edx, 6
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100bc320
        __asm _emit 0x75
        __asm _emit 0xf4
        mov dword ptr [esi + 0d0h], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebx, 2
        and eax, 0f0000h
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        cmp eax, 20000h
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x100bc4dd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 19ch]
        mov ecx, 0fh
        mov edi, 0fffeh
        mov ebp, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1d0h]
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x100bc3f0
        __asm _emit 0x75
        __asm _emit 0x67
        mov ebx, dword ptr [esi + 164h]
        push 0
        mov ecx, ebx
        ; Exact mapped bytes E8 88 2D 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 7ch], 0
        mov eax, dword ptr [esi + 164h]
        push 0
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ebx, dword ptr [esi + 15ch]
        mov ecx, ebx
        ; Exact mapped bytes E8 68 2D 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 7ch], 0
        mov eax, dword ptr [esi + 15ch]
        push 0
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ebx, dword ptr [esi + 160h]
        mov ecx, ebx
        ; Exact mapped bytes E8 48 2D 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebx + 7ch], 0
        mov eax, dword ptr [esi + 160h]
        mov ebx, 2
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes EB 1E: jmp 0x100bc40e
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 164h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 15ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 160h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 194h]
        push ebp
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 150h]
        mov dword ptr [esi + 13ch], ebp
        ; Exact mapped bytes E8 76 60 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        push ebp
        ; Exact mapped bytes E8 6A 60 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 158h]
        push ebp
        ; Exact mapped bytes E8 5E 60 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 130h]
        push ebp
        ; Exact mapped bytes E8 52 60 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 128h]
        push ebp
        ; Exact mapped bytes E8 46 60 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 6
        ; Exact mapped bytes 7E 11: jle 0x100bc483
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100bc483
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 180h
        ; Exact mapped bytes EB 02: jmp 0x100bc485
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 148h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bc4ba
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
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
        mov eax, dword ptr [esi + 118h]
        mov ecx, esi
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes E8 13 00 00 00: call 0x100bc4f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
