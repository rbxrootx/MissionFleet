// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D1710 .. +0x476 bytes.
extern "C" __declspec(naked) void FUN_588d1710() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 80h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        cmp dword ptr [esp + 10h], 0
        mov edx, dword ptr [esi + 54h]
        push edi
        mov dword ptr [edx + 10h], 0
        mov ebx, 1
        ; Exact mapped bytes 74 63: je 0x588d179e
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 78h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 84h]
        push 0c4h
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 50h]
        push 0
        push eax
        ; Exact mapped bytes E8 D3 B4 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        mov ebp, 50h
        push ebp
        push 0
        push ecx
        ; Exact mapped bytes E8 C2 B4 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        mov eax, ebx
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 74h]
        add esp, 18h
        mov dword ptr [ecx + 50h], 5
        ; Exact mapped bytes EB 05: jmp 0x588d17a3
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebp, 50h
        mov edx, dword ptr [esi + 50h]
        movzx eax, word ptr [edx + 38h]
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        cmp eax, 5
        ; Exact mapped bytes 0F 87 0C 03 00 00: ja 0x588d1ac5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 88 1B 8D 58: jmp dword ptr [eax*4 + 0x588d1b88]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x1b
        __asm _emit 0x8d
        __asm _emit 0x58
        mov eax, dword ptr [esi + 54h]
        mov ecx, 2
        mov dword ptr [eax + 30h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 38h], 32h
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 3ch], 0eh
        mov edx, dword ptr [esi + 54h]
        mov eax, 7dh
        mov dword ptr [edx + 40h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 44h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 4ch], ebx
        mov ebp, dword ptr [esi + 50h]
        mov dl, byte ptr [ebp + 32h]
        and dl, 0f2h
        or dl, cl
        mov byte ptr [ebp + 32h], dl
        mov ebp, dword ptr [esi + 50h]
        mov cl, byte ptr [ebp + 31h]
        and cl, 9eh
        or cl, 1eh
        mov byte ptr [ebp + 31h], cl
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 47h], al
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 46h], bl
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [ecx + 80h], 0fa0h
        push 58997fd0h
        ; Exact mapped bytes E9 6D 02 00 00: jmp 0x588d1aaf
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        mov ecx, 2
        mov dword ptr [eax + 30h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 38h], 14h
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 3ch], 8
        mov edx, dword ptr [esi + 54h]
        mov eax, 7dh
        mov dword ptr [edx + 40h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 44h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 4ch], ebx
        mov ebp, dword ptr [esi + 50h]
        mov dl, byte ptr [ebp + 32h]
        and dl, 0f2h
        or dl, cl
        mov byte ptr [ebp + 32h], dl
        mov ebp, dword ptr [esi + 50h]
        mov cl, byte ptr [ebp + 31h]
        and cl, 8ch
        or cl, 0ch
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x588d181c
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 54h]
        mov ecx, 2
        mov dword ptr [eax + 30h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 38h], ebp
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 3ch], 0ch
        mov eax, dword ptr [esi + 54h]
        mov edx, 1eh
        mov dword ptr [eax + 40h], edx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], edx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov ebp, dword ptr [esi + 50h]
        mov al, byte ptr [ebp + 32h]
        and al, 0f2h
        or al, cl
        mov byte ptr [ebp + 32h], al
        mov eax, dword ptr [esi + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 9eh
        or cl, dl
        mov byte ptr [eax + 31h], cl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], dl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov edx, dword ptr [esi + 50h]
        push 58997fd0h
        mov dword ptr [edx + 80h], 0fa2h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov eax, dword ptr [esi + 50h]
        add eax, 0a6h
        push eax
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x588d1abf
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ecx, 2
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 38h], 40h
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 3ch], 10h
        mov eax, dword ptr [esi + 54h]
        mov edx, 55h
        mov dword ptr [eax + 40h], edx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], edx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov ebp, dword ptr [esi + 50h]
        mov al, byte ptr [ebp + 32h]
        and al, 0f2h
        or al, cl
        mov byte ptr [ebp + 32h], al
        mov eax, dword ptr [esi + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 0a0h
        or cl, 20h
        mov byte ptr [eax + 31h], cl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], dl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov edx, dword ptr [esi + 50h]
        push 58997fd0h
        mov dword ptr [edx + 80h], 0fa3h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov eax, dword ptr [esi + 50h]
        add eax, 0a6h
        push eax
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x588d1abf
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ecx, 2
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [esi + 54h]
        mov eax, 1eh
        mov dword ptr [edx + 38h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 3ch], eax
        mov edx, dword ptr [esi + 54h]
        mov eax, 7dh
        mov dword ptr [edx + 40h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 44h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebp
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 4ch], ebp
        mov ebp, dword ptr [esi + 50h]
        mov dl, byte ptr [ebp + 32h]
        and dl, 0f2h
        or dl, cl
        mov byte ptr [ebp + 32h], dl
        mov ebp, dword ptr [esi + 50h]
        mov cl, byte ptr [ebp + 31h]
        and cl, 9eh
        or cl, 1eh
        mov byte ptr [ebp + 31h], cl
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 47h], al
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 46h], 50h
        ; Exact mapped bytes E9 FF FD FF FF: jmp 0x588d182b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 10h], ebx
        mov edx, dword ptr [esi + 54h]
        mov ecx, 2
        mov dword ptr [edx + 30h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 38h], 1eh
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 3ch], 0ch
        mov edx, dword ptr [esi + 54h]
        mov eax, 7dh
        mov dword ptr [edx + 40h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 44h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 4ch], ebx
        mov ebp, dword ptr [esi + 50h]
        mov dl, byte ptr [ebp + 32h]
        and dl, 0f2h
        or dl, cl
        mov byte ptr [ebp + 32h], dl
        mov ebp, dword ptr [esi + 50h]
        mov cl, byte ptr [ebp + 31h]
        and cl, 9eh
        or cl, 1eh
        mov byte ptr [ebp + 31h], cl
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 47h], al
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 46h], bl
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [ecx + 80h], 0eh
        push 58997ef0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi + 50h]
        add esp, 4
        push eax
        add edx, 0a6h
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 20h], ebx
        mov edx, dword ptr [esi + 50h]
        mov eax, 0bh
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov edx, eax
        ; Exact mapped bytes 66 89 51 36: mov word ptr [ecx + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        push 5899d8c8h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, eax
        mov edx, 30h
        lea eax, [edx + 7fffffceh]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588d1b2e
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588d1b2e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub edx, ebx
        ; Exact mapped bytes 75 E6: jne 0x588d1b12
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588d1b32
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x588d1b34
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        ; Exact mapped bytes A1 4C 47 A2 58: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588d1b58
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588d1b58
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588d1b5a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 4]
        lea ecx, [edx + eax + 2ch]
        mov edx, dword ptr [esi + 5ch]
        mov dword ptr [edx + 6ch], ecx
        mov esi, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esi + 8ch]
        pop edi
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], ecx
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
