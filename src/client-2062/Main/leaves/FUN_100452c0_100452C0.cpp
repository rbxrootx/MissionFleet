// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100452C0 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_100452c0_100452C0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov dword ptr [ebx + 138h], eax
        lea eax, [ebx + 17ch]
        push edi
        mov ecx, 2dh
        mov esi, ebp
        mov edi, eax
        mov dword ptr [ebx + 68h], 0ffffffffh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        xor esi, esi
        mov cl, al
        and cl, 0fh
        cmp cl, 5
        ; Exact mapped bytes 75 1C: jne 0x10045317
        __asm _emit 0x75
        __asm _emit 0x1c
        test al, 10h
        ; Exact mapped bytes 75 18: jne 0x10045317
        __asm _emit 0x75
        __asm _emit 0x18
        and eax, 0ffe0h
        cmp eax, 3620h
        ; Exact mapped bytes 75 0C: jne 0x10045317
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebx + 24ch], 1
        ; Exact mapped bytes EB 06: jmp 0x1004531d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [ebx + 24ch], esi
        mov ecx, dword ptr [ebx + 150h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 80 01 00 00: mov ax, word ptr [ebx + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 160h]
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x1004534c
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, esi
        ; Exact mapped bytes 7C 11: jl 0x1004534c
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, esi
        ; Exact mapped bytes 74 07: je 0x1004534c
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1004534e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + 3c8h]
        cmp eax, esi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10045383
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
        mov eax, dword ptr [ebx + 3c8h]
        xor ecx, ecx
        or byte ptr [eax + 25h], 80h
        ; Exact mapped bytes 66 8B 8B 1A 02 00 00: mov cx, word ptr [ebx + 0x21a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 88h]
        mov dword ptr [ebx + 154h], ecx
        mov dword ptr [ebx + 158h], esi
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], eax
        ; Exact mapped bytes 75 3A: jne 0x100453ed
        __asm _emit 0x75
        __asm _emit 0x3a
        cmp eax, esi
        ; Exact mapped bytes 74 16: je 0x100453cd
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebx + 138h]
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 07 95 05 00: call 0x1009e8d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 75 11: jne 0x100453de
        __asm _emit 0x75
        __asm _emit 0x11
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8B 04 03 00 00: mov cx, word ptr [ebx + 0x304]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 158h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x100453ed
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor edx, edx
        ; Exact mapped bytes 66 8B 93 B8 03 00 00: mov dx, word ptr [ebx + 0x3b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 158h], edx
        mov ecx, ebx
        ; Exact mapped bytes E8 BC E0 FF FF: call 0x100434b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8B 16 02 00 00: mov cx, word ptr [ebx + 0x216]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebx + 214h]
        shr ecx, 4
        and ecx, 7fh
        and eax, 7
        push ecx
        mov ecx, ebx
        mov dword ptr [ebx + 0e0h], eax
        ; Exact mapped bytes E8 38 E3 FF FF: call 0x10043750
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, ebx
        ; Exact mapped bytes E8 71 F3 FF FF: call 0x10044790
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 54 24 1C: mov dx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 93 3C 02 00 00: mov word ptr [ebx + 0x23c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 A0 00 00 00: mov ax, word ptr [ebp + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D F4 01: cmp ax, 0x1f4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x01
        ; Exact mapped bytes 76 1D: jbe 0x10045455
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 66 3D E8 03: cmp ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 76 10: jbe 0x1004544e
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes 66 B9 DC 05: mov cx, 0x5dc
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0xdc
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        sbb eax, eax
        neg eax
        add eax, 2
        ; Exact mapped bytes EB 09: jmp 0x10045457
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x10045457
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        mov dword ptr [ebx + 244h], eax
        mov dword ptr [ebx + 248h], 15h
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
