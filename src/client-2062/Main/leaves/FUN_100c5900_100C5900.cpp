// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C5900 .. +0x2E4 bytes.
extern "C" __declspec(naked) void FUN_100c5900_100C5900() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 D3 02 00 00: je 0x100c5be1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14ch]
        xor ecx, ecx
        push ebx
        mov ebx, 0fh
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 30: jne 0x100c5957
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi + 98h]
        xor ecx, ecx
        test eax, eax
        ; Exact mapped bytes 7E 1A: jle 0x100c594d
        __asm _emit 0x7e
        __asm _emit 0x1a
        lea edx, [esi + 150h]
        mov eax, dword ptr [edx]
        add edx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        inc ecx
        cmp ecx, eax
        ; Exact mapped bytes 7C EC: jl 0x100c5939
        __asm _emit 0x7c
        __asm _emit 0xec
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 190h]
        mov ecx, dword ptr [edx + 60h]
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x100c59a3
        __asm _emit 0x74
        __asm _emit 0x3c
        xor edx, edx
        mov edi, dword ptr [ecx + 50h]
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp edi, edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x100c59a3
        __asm _emit 0x74
        __asm _emit 0x23
        lea ecx, [esi + 128h]
        mov edx, 8
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100c598b
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 26: jmp 0x100c59c9
        __asm _emit 0xeb
        __asm _emit 0x26
        lea ecx, [esi + 128h]
        mov edx, 8
        mov edi, 0fff0h
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100c59b3
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 104h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 0A: jne 0x100c59e6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 10ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi + 19ch]
        xor eax, eax
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x100c5a84
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 86 9C 00 00 00: mov ax, word ptr [esi + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 37: jne 0x100c5a49
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [esi + 1a8h]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 65: je 0x100c5a84
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1a8h]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 1c8h]
        ; Exact mapped bytes 66 C7 80 9C 01 00 00 00 00: mov word ptr [eax + 0x19c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x100c5a84
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 18: je 0x100c5a66
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x100c5a66
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x100c5a66
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100c5a66
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x100c5a84
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 1a8h]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x100c5a84
        __asm _emit 0x75
        __asm _emit 0x11
        or byte ptr [eax + 24h], 2
        mov ecx, dword ptr [esi + 1a8h]
        mov dword ptr [ecx + 50h], 1
        mov edx, dword ptr [esi + 1a0h]
        xor eax, eax
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 0A: jne 0x100c5a9f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 1ach]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 1a4h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 0A: jne 0x100c5abc
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 10ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 0A: jne 0x100c5ad9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 110h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        pop ebx
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x100c5b7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 190h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x100c5bbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e2ffh
        or ah, cl
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 86 9C 00 00 00: mov ax, word ptr [esi + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 45: je 0x100c5b65
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 15 10 57 1C 10: mov edx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 118h]
        test ecx, ecx
        ; Exact mapped bytes 75 35: jne 0x100c5b65
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 18: je 0x100c5b4d
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x100c5b4d
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x100c5b4d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100c5b4d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 23: jne 0x100c5b70
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 19ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 1a4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 58: jmp 0x100c5bbd
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 19ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 1a4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 40: jmp 0x100c5bbd
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 39: je 0x100c5bbd
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 32: jne 0x100c5bbd
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 10ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 1F: jne 0x100c5bbd
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [esi + 104h]
        mov dword ptr [eax + 50h], 496h
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [esi + 104h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100c5be1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100c5bdc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100c5bc4
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
