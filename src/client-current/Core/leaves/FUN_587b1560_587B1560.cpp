// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1560 .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_587b1560_587B1560() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        add eax, 0fffffeffh
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        movzx edi, ax
        ; Exact mapped bytes 66 8B C7: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc7
        mov ecx, dword ptr [esi + 16bch]
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        movzx edx, ax
        movzx eax, word ptr [esi + 16b8h]
        cmp ecx, 0bh
        ; Exact mapped bytes 7E 45: jle 0x587b15d8
        __asm _emit 0x7e
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 8]
        or edx, eax
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes 66 89 96 B8 16 00 00: mov word ptr [esi + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [esi + 16b9h]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [esi + 16bch], -0bh
        mov ecx, dword ptr [esi + 16bch]
        movzx ebx, di
        ; Exact mapped bytes EB 0E: jmp 0x587b15e6
        __asm _emit 0xeb
        __asm _emit 0x0e
        add ecx, 5
        or edx, eax
        mov dword ptr [esi + 16bch], ecx
        movzx ebx, dx
        lea eax, [ebp - 1]
        mov dword ptr [esp + 14h], eax
        cmp ecx, 0bh
        ; Exact mapped bytes 7E 4F: jle 0x587b1641
        __asm _emit 0x7e
        __asm _emit 0x4f
        movzx edi, ax
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 66 8B D7: mov dx, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 14h]
        ; Exact mapped bytes 66 0B D3: or dx, bx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd3
        ; Exact mapped bytes 66 89 96 B8 16 00 00: mov word ptr [esi + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [esi + 16b9h]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [esi + 16bch], -0bh
        mov edx, dword ptr [esi + 16bch]
        movzx ebx, di
        ; Exact mapped bytes EB 15: jmp 0x587b1656
        __asm _emit 0xeb
        __asm _emit 0x15
        lea eax, [ebp - 1]
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        lea edx, [ecx + 5]
        ; Exact mapped bytes 66 0B C3: or ax, bx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc3
        mov dword ptr [esi + 16bch], edx
        movzx ebx, ax
        mov ebp, dword ptr [esp + 20h]
        mov ecx, edx
        lea eax, [ebp - 4]
        movzx edi, ax
        ; Exact mapped bytes 66 8B C7: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0B C3: or ax, bx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc3
        movzx ebx, ax
        cmp edx, 0ch
        ; Exact mapped bytes 7E 43: jle 0x587b16b6
        __asm _emit 0x7e
        __asm _emit 0x43
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 66 89 9E B8 16 00 00: mov word ptr [esi + 0x16b8], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + eax], bl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [esi + 16b9h]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [esi + 16bch], -0ch
        mov ecx, dword ptr [esi + 16bch]
        movzx eax, di
        ; Exact mapped bytes EB 0B: jmp 0x587b16c1
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea ecx, [edx + 4]
        mov eax, ebx
        mov dword ptr [esi + 16bch], ecx
        xor ebx, ebx
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x587b176e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebp, ax
        ; Exact mapped bytes 66 66 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx + 588bc9b4h]
        cmp ecx, 0dh
        ; Exact mapped bytes 7E 53: jle 0x587b173f
        __asm _emit 0x7e
        __asm _emit 0x53
        movzx edi, word ptr [esi + eax*4 + 0a7eh]
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 66 8B D7: mov dx, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 66 D3 E2: shl dx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 14h]
        ; Exact mapped bytes 66 0B D5: or dx, bp
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd5
        ; Exact mapped bytes 66 89 96 B8 16 00 00: mov word ptr [esi + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + eax], dl
        inc dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 14h]
        mov al, byte ptr [esi + 16b9h]
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [esi + 16bch], -0dh
        mov ecx, dword ptr [esi + 16bch]
        movzx eax, di
        ; Exact mapped bytes EB 1A: jmp 0x587b1759
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 66 8B 84 86 7E 0A 00 00: mov ax, word ptr [esi + eax*4 + 0xa7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0B C5: or ax, bp
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc5
        add ecx, 3
        movzx eax, ax
        mov dword ptr [esi + 16bch], ecx
        inc ebx
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebp, ax
        cmp ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes 0F 8C 72 FF FF FF: jl 0x587b16e0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        dec eax
        push eax
        lea eax, [esi + 94h]
        push eax
        push esi
        ; Exact mapped bytes E8 1F 00 00 00: call 0x587b17a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 20h]
        lea eax, [esi + 988h]
        push eax
        push esi
        ; Exact mapped bytes E8 0E 00 00 00: call 0x587b17a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
