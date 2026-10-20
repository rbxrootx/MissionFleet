// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D0C50 .. +0x269 bytes.
extern "C" __declspec(naked) void FUN_588d0c50() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 E2 BF 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 D5 BF 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 28h], ebx
        mov edx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [edx + 30h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 34h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 38h], 80h
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 3ch], 30h
        mov edx, dword ptr [esi + 54h]
        mov ecx, 7dh
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov edx, dword ptr [esi + 50h]
        mov edi, 0fh
        mov eax, edi
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 42 36: mov word ptr [edx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 32h]
        and dl, 0f2h
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 31h]
        and dl, 0b0h
        or dl, 30h
        mov byte ptr [eax + 31h], dl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        mov edx, dword ptr [esi + 50h]
        xor eax, eax
        push 5899d894h
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        mov ebp, eax
        add esp, 1ch
        mov eax, 30h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x588d0d6d
        __asm _emit 0x74
        __asm _emit 0x13
        mov dl, byte ptr [ebp]
        test dl, dl
        ; Exact mapped bytes 74 0C: je 0x588d0d6d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], dl
        add ecx, ebx
        add ebp, ebx
        sub eax, ebx
        ; Exact mapped bytes 75 E5: jne 0x588d0d50
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes EB 04: jmp 0x588d0d71
        __asm _emit 0xeb
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x588d0d73
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
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
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 74h]
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
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 8ch]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 90h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8ch]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 78h]
        mov eax, 5
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 90h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 56h], 14h
        mov ecx, dword ptr [esi + 50h]
        mov al, 8
        mov byte ptr [ecx + 57h], al
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 58h], al
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 14: jle 0x588d0e8b
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x588d0e8b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x588d0e8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        lea eax, [ecx + edx + 2ch]
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [ecx + 6ch], eax
        mov esi, dword ptr [esi + 5ch]
        mov edx, dword ptr [esi + 88h]
        mov eax, dword ptr [esi + 8ch]
        pop edi
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 54h], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
