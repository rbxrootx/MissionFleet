// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B3380 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_100b3380_100B3380() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebp, 2
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 89 86 CC 00 00 00: mov word ptr [esi + 0xcc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 CE 00 00 00 00 00: mov word ptr [esi + 0xce], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0b4h]
        mov eax, dword ptr [edi - 8]
        push 0ffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi + 8]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 8]
        ; Exact mapped bytes E8 54 BD 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0ffh
        ; Exact mapped bytes E8 48 BD 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        push 0ffh
        ; Exact mapped bytes E8 3B BD 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 C0: jne 0x100b33ab
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 44 24 14: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        mov edi, 1
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 3C: jne 0x100b3436
        __asm _emit 0x75
        __asm _emit 0x3c
        lea ebx, [esi + 0ach]
        mov edx, 2
        mov ecx, ebx
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100b3407
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 41 BD 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 31 BD 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x100b34d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x100b3493
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [esi + 58h]
        push 101h
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 54h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes E8 FB BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 0c8h], edi
        push 0fffffeffh
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 DA BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 101h
        ; Exact mapped bytes E8 CD BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 0b4h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100b349e
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi + 0b4h]
        push 0fffffeffh
        ; Exact mapped bytes E8 A6 BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push 101h
        ; Exact mapped bytes E8 96 BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x100b3573
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 0ffh
        ; Exact mapped bytes E8 38 BC 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 0ffh
        ; Exact mapped bytes E8 2B BC 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        push 0fffffeffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 39 BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 29 BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [esi + 0bch]
        mov ebx, 2
        mov eax, edx
        mov ecx, dword ptr [eax]
        add eax, 4
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        dec ebx
        ; Exact mapped bytes 75 F4: jne 0x100b3544
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [edx]
        push 0fffffeffh
        ; Exact mapped bytes E8 04 BC 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 101h
        ; Exact mapped bytes E8 F4 BB 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 5C: jne 0x100b35d4
        __asm _emit 0x75
        __asm _emit 0x5c
        mov ecx, dword ptr [esi + 84h]
        push 0ffh
        ; Exact mapped bytes E8 98 BB 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 0ffh
        ; Exact mapped bytes E8 88 BB 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push 0ffh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 67 BB 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 0ffh
        ; Exact mapped bytes E8 5A BB 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
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
