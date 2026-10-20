// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F9D80 .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_100f9d80_100F9D80() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 AC A0 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        mov ebx, eax
        ; Exact mapped bytes E8 DF A7 00 00: call 0x10104580
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 11ch]
        mov edi, 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 CD A7 00 00: call 0x10104580
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x100f9dac
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 7C A0 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x100f9f95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 118h]
        xor ebx, ebx
        mov edi, dword ptr [eax + 5ch]
        mov eax, dword ptr [ebp + 3e0h]
        test eax, eax
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 0F 8E 78 01 00 00: jle 0x100f9f61
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 89ch
        lea esi, [ebp + 130h]
        sub eax, ebp
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 04: jmp 0x100f9e00
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi - 98h]
        push edi
        ; Exact mapped bytes E8 B4 50 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 AC 50 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push edi
        ; Exact mapped bytes E8 A0 50 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push edi
        ; Exact mapped bytes E8 94 50 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 09 A0 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 8
        cmp ebx, eax
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x100f9f26
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 F3 9F 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C D1 00 00 00: jl 0x100f9f26
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 98h]
        mov edx, dword ptr [esp + 14h]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d0ch]
        lea ecx, [edx + esi]
        mov edi, dword ptr [ecx + eax]
        test edi, edi
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x100f9f4f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [edi]
        and edx, 0fh
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x100f9f4f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 24: je 0x100f9eb3
        __asm _emit 0x74
        __asm _emit 0x24
        mov dl, byte ptr [edi]
        mov edi, 0fh
        and edx, edi
        ; Exact mapped bytes 66 83 FA 05: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 75 15: jne 0x100f9eb3
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x100f9f4f
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + eax]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x100f9ed1
        __asm _emit 0x74
        __asm _emit 0x17
        mov dl, byte ptr [edi]
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 06: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 75 0C: jne 0x100f9ed1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 100h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 7E: jmp 0x100f9f4f
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ecx + eax]
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x100f9f4f
        __asm _emit 0x74
        __asm _emit 0x77
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 75 6C: jne 0x100f9f4f
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [esi]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 0d0ch]
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        mov eax, ebx
        shr edx, 0ah
        and edx, 1fh
        sub eax, edx
        cmp eax, 1
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 7E 06: jle 0x100f9f1e
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 31: jmp 0x100f9f4f
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 29: jmp 0x100f9f4f
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [esi - 98h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 3e0h]
        inc ebx
        add esi, 4
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C 9B FE FF FF: jl 0x100f9dfc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 D4 9E 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 3e0h]
        mov ecx, eax
        mov eax, 46h
        sub esi, 8
        cdq
        idiv esi
        mov edx, dword ptr [ebp + 8]
        imul ecx, eax
        lea eax, [ecx + edx + 48h]
        mov ecx, dword ptr [ebp + 2b8h]
        push eax
        ; Exact mapped bytes E8 2B 4E 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
