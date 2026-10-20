// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58716450 .. +0x377 bytes.
extern "C" __declspec(naked) void FUN_58716450_58716450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0d0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C6 93 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, 1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 0F 87 C9 02 00 00: ja 0x587167c1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D C8 67 71 58: jmp dword ptr [ecx*4 + 0x587167c8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x67
        __asm _emit 0x71
        __asm _emit 0x58
        push 64h
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F F1 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf1
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 400h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        or ecx, 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 02 00 00: jmp 0x587167c1
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push -64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 F0 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d4h], 0ffffff9ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], 64h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0E 02 00 00: jmp 0x587167c1
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fah
        push -64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E F0 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d4h], 0ffffff9ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d8h], 0fah
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E0 00 00 00: mov word ptr [ecx + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x587167c1
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 F0 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 400h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        or ecx, 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x587167c1
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push -64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD EF 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d4h], 0ffffff9ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x587167c1
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 52 EF 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xef
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d4h], 400h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 E0 00 00 00: mov word ptr [ecx + 0xe0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x587167c1
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push -64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC EE 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 0ffffff9ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 54: jmp 0x587167c1
        __asm _emit 0xeb
        __asm _emit 0x54
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 EE 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d4h], 400h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        or edx, 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
