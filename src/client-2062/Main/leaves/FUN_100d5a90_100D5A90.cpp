// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D5A90 .. +0x212 bytes.
extern "C" __declspec(naked) void FUN_100d5a90_100D5A90() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 70h]
        mov dword ptr [esi + 0c4h], eax
        mov ebx, 1
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 0e5ffh
        mov dword ptr [esi + 0c8h], edi
        or dh, 5
        cmp eax, 7
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 0cch], edi
        mov dword ptr [esi + 0d8h], edi
        ; Exact mapped bytes 66 89 9E D4 00 00 00: mov word ptr [esi + 0xd4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 10ch], edi
        mov dword ptr [esi + 110h], edi
        ; Exact mapped bytes 0F 87 B1 01 00 00: ja 0x100d5c9c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 A4 5C 0D 10: jmp dword ptr [eax*4 + 0x100d5ca4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x10
        push 64h
        push -64h
        mov ecx, esi
        ; Exact mapped bytes E8 D3 91 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 0c8h], 0ffffff9ch
        mov dword ptr [esi + 0cch], 64h
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x100d5c48
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        push 400h
        mov ecx, esi
        ; Exact mapped bytes E8 AC 91 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 0c8h], 400h
        mov dword ptr [esi + 0cch], 64h
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x100d5c82
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fah
        push -64h
        mov ecx, esi
        ; Exact mapped bytes E8 85 91 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 0c8h], 0ffffff9ch
        and edx, 0e5ffh
        mov dword ptr [esi + 0cch], 0fah
        or dh, 5
        ; Exact mapped bytes 66 89 9E D4 00 00 00: mov word ptr [esi + 0xd4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        push 400h
        mov ecx, esi
        ; Exact mapped bytes E8 46 91 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0cch], edi
        and eax, 0e5ffh
        mov dword ptr [esi + 0c8h], 400h
        or ah, 5
        ; Exact mapped bytes 66 C7 86 D4 00 00 00 FF FF: mov word ptr [esi + 0xd4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        push -64h
        mov ecx, esi
        ; Exact mapped bytes E8 0D 91 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 0cch], edi
        and ecx, 0e5ffh
        mov dword ptr [esi + 0c8h], 0ffffff9ch
        or ch, 5
        ; Exact mapped bytes 66 89 9E D4 00 00 00: mov word ptr [esi + 0xd4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        push 400h
        mov ecx, esi
        ; Exact mapped bytes E8 D2 90 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 0cch], edi
        and edx, 0e5ffh
        mov dword ptr [esi + 0c8h], 400h
        or dh, 5
        ; Exact mapped bytes 66 C7 86 D4 00 00 00 FF FF: mov word ptr [esi + 0xd4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        push -64h
        mov ecx, esi
        ; Exact mapped bytes E8 98 90 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 0c8h], 0ffffff9ch
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 89 9E D4 00 00 00: mov word ptr [esi + 0xd4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e5ffh
        pop edi
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        push 400h
        mov ecx, esi
        ; Exact mapped bytes E8 5E 90 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 0c8h], 400h
        mov dword ptr [esi + 0cch], edi
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 C7 86 D4 00 00 00 FF FF: mov word ptr [esi + 0xd4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        and ecx, 0e5ffh
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
