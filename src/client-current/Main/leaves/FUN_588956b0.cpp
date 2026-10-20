// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588956B0 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_588956b0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x5889582f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58895766
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 7C: je 0x58895766
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 30 01 00 00: jne 0x5889582f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        test eax, eax
        ; Exact mapped bytes 7E 3D: jle 0x58895746
        __asm _emit 0x7e
        __asm _emit 0x3d
        dec eax
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 21 75 0E 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x58895721
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        sub eax, 4
        push eax
        ; Exact mapped bytes E8 0C 75 0E 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x58895736
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        sub eax, 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4F DB 06 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xdb
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x5889582f
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x5889582f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, esi
        mov dword ptr [esi + 0b0h], 0ffffffffh
        ; Exact mapped bytes E8 2F DB 06 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdb
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x5889582f
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 74 3E: je 0x588957ae
        __asm _emit 0x74
        __asm _emit 0x3e
        sub eax, ecx
        lea ecx, [eax + 7]
        cmp ecx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5889579d
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 14: ja 0x58895796
        __asm _emit 0x77
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5889578b
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x588957a6
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 10: jmp 0x588957a6
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x588957a6
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F2 D6 06 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        cmp edx, dword ptr [esi + 54h]
        ; Exact mapped bytes 75 79: jne 0x5889582f
        __asm _emit 0x75
        __asm _emit 0x79
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 23: jne 0x588957ef
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e2ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes EB 40: jmp 0x5889582f
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 2A: jne 0x5889582f
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e5ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5889584d
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5889584f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58895837
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
