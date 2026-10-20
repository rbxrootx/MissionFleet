// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878EAA0 .. +0x49D bytes.
extern "C" __declspec(naked) void FUN_5878eaa0_5878EAA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 05: jne 0x5878eac4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 77 04 00 00: jmp 0x5878ef3b
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 99 01 00 00: jne 0x5878ec78
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x5878eaff
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5878ec14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x5878eb7b
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x5878eb7b
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x5878eb68
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x5878eb68
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x5878eb44
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5878eb60
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x5878eb53
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5878eb5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5878eb73
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5878eb8a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x5878ebee
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x5878ebee
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x5878ebdb
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x5878ebdb
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x5878ebb7
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5878ebd3
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x5878ebc6
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5878ebcd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 0B: jmp 0x5878ebe6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5878ebfd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 65 02 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 75 51: jne 0x5878ec73
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 75 43: jne 0x5878ec73
        __asm _emit 0x75
        __asm _emit 0x43
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
        mov ecx, 200h
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 11 00 00: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 29 02 00 00: jmp 0x5878eea1
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x5878ee30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x5878ecb3
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5878edc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 14h], -8
        ; Exact mapped bytes 7E 58: jle 0x5878ed2f
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 52: jge 0x5878ed2f
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], -4
        ; Exact mapped bytes 7E 39: jle 0x5878ed1c
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 33: jge 0x5878ed1c
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x5878ecf8
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5878ed14
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 09: jle 0x5878ed07
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5878ed0e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5878ed27
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5878ed3e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 10h], -8
        ; Exact mapped bytes 7E 58: jle 0x5878eda2
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 52: jge 0x5878eda2
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 10h], -4
        ; Exact mapped bytes 7E 39: jle 0x5878ed8f
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 33: jge 0x5878ed8f
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x5878ed6b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5878ed87
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x5878ed7a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5878ed81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 0B: jmp 0x5878ed9a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5878edb1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 64 02 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 75 58: jne 0x5878ee2e
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 75 4A: jne 0x5878ee2e
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
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
        ; Exact mapped bytes EB 71: jmp 0x5878eea1
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 75 5A: jne 0x5878eea1
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 94h]
        test ecx, ecx
        ; Exact mapped bytes 7E 4C: jle 0x5878eea1
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 94 00 00 00: mov ax, word ptr [edx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 94 00 00 00: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 94h]
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x5878eea1
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes E8 70 83 D4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x83
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 1072h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 DA 9E D4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 18 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x5878ef3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5878eed2
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5878eed2
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5A: je 0x5878ef3b
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5878eef5
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x5878eedb
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 13 67 D0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5878ef19
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5878ef3b
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5878ef39
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EF 66 D0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x66
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB A0: jmp 0x5878eedb
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
