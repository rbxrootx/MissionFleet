// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E67A .. +0x1C0 bytes.
extern "C" __declspec(naked) void FUN_5886e67a_5886E67A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        and eax, 3fh
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        sar edx, 6
        push esi
        push edi
        imul edi, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [eax + edi + 18h]
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x5886e6be
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        pop esi
        ; Exact mapped bytes 66 39 33: cmp word ptr [ebx], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x33
        ; Exact mapped bytes 75 07: jne 0x5886e6be
        __asm _emit 0x75
        __asm _emit 0x07
        or byte ptr [eax + edi + 28h], 4
        ; Exact mapped bytes EB 05: jmp 0x5886e6c3
        __asm _emit 0xeb
        __asm _emit 0x05
        and byte ptr [eax + edi + 28h], 0fbh
        lea edx, [ebx + edx*2]
        mov eax, ebx
        mov dword ptr [ebp - 10h], edx
        mov esi, ebx
        cmp ebx, edx
        ; Exact mapped bytes 0F 83 59 01 00 00: jae 0x5886e82e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [eax]
        mov ecx, edx
        mov dword ptr [ebp - 0ch], ecx
        movzx ecx, cx
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 8]
        cmp edx, 1ah
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x5886e806
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [eax + 2]
        mov dword ptr [ebp - 4], ebx
        push 0dh
        pop ebx
        ; Exact mapped bytes 66 3B D3: cmp dx, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd3
        mov ebx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 10: je 0x5886e710
        __asm _emit 0x74
        __asm _emit 0x10
        mov ebx, dword ptr [ebp - 14h]
        mov edx, esi
        mov eax, dword ptr [ebp - 4]
        movzx ebx, bx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes EB 2A: jmp 0x5886e73a
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 41: jae 0x5886e759
        __asm _emit 0x73
        __asm _emit 0x41
        push 0ah
        pop ebx
        ; Exact mapped bytes 66 39 1A: cmp word ptr [edx], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1a
        ; Exact mapped bytes 75 07: jne 0x5886e727
        __asm _emit 0x75
        __asm _emit 0x07
        push ebx
        add eax, 4
        pop edx
        ; Exact mapped bytes EB 08: jmp 0x5886e72f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, edx
        mov edx, dword ptr [ebp - 0ch]
        movzx edx, dx
        movzx edx, dx
        mov dword ptr [ebp - 4], edx
        mov edx, esi
        mov dword ptr [ebp - 14h], esi
        mov ecx, dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 66 89 0E: mov word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0e
        mov esi, dword ptr [ebp - 0ch]
        add esi, edx
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 72 81: jb 0x5886e6d5
        __asm _emit 0x72
        __asm _emit 0x81
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x5886e82e
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 14h]
        push eax
        push 2
        lea eax, [ebp - 4]
        push eax
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5886e801
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5886e801
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push 0ah
        mov eax, dword ptr [eax*4 + 589699b0h]
        test byte ptr [eax + edi + 28h], 48h
        pop eax
        ; Exact mapped bytes 74 49: je 0x5886e7dd
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 08: jne 0x5886e7a5
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5886e82b
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        pop eax
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        movzx ecx, dx
        shr ecx, 8
        push 0ah
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov byte ptr [eax + edi + 2ah], dl
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov byte ptr [eax + edi + 2bh], cl
        mov eax, dword ptr [edx*4 + 589699b0h]
        pop ecx
        mov byte ptr [eax + edi + 2ch], cl
        ; Exact mapped bytes EB 4E: jmp 0x5886e82b
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 66 39 45 FC: cmp word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 75 04: jne 0x5886e7e7
        __asm _emit 0x75
        __asm _emit 0x04
        cmp esi, ebx
        ; Exact mapped bytes 74 B6: je 0x5886e79d
        __asm _emit 0x74
        __asm _emit 0xb6
        push 1
        push -1
        push -2
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 2B 00 00: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push 0ah
        pop eax
        ; Exact mapped bytes 66 39 45 FC: cmp word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 74 2D: je 0x5886e82e
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0dh
        pop eax
        ; Exact mapped bytes EB 97: jmp 0x5886e79d
        __asm _emit 0xeb
        __asm _emit 0x97
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        mov edi, dword ptr [eax*4 + 589699b0h]
        mov al, byte ptr [edi + ecx + 28h]
        test al, 40h
        ; Exact mapped bytes 75 08: jne 0x5886e828
        __asm _emit 0x75
        __asm _emit 0x08
        or al, 2
        mov byte ptr [edi + ecx + 28h], al
        ; Exact mapped bytes EB 06: jmp 0x5886e82e
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 16: mov word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x16
        add esi, 2
        sub esi, ebx
        and esi, 0fffffffeh
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
