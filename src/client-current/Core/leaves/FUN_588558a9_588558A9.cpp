// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588558A9 .. +0x1CD bytes.
extern "C" __declspec(naked) void FUN_588558a9_588558A9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov ebx, ecx
        xor edx, edx
        push 67h
        pop esi
        push 47h
        or dword ptr [ebx + 1ch], 10h
        inc edx
        mov eax, dword ptr [ebx + 24h]
        mov dword ptr [ebp - 0ch], ebx
        pop edi
        test eax, eax
        ; Exact mapped bytes 79 1A: jns 0x588558e7
        __asm _emit 0x79
        __asm _emit 0x1a
        movzx eax, word ptr [ebx + 2eh]
        cmp eax, 61h
        ; Exact mapped bytes 74 09: je 0x588558df
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 41h
        ; Exact mapped bytes 74 04: je 0x588558df
        __asm _emit 0x74
        __asm _emit 0x04
        push 6
        ; Exact mapped bytes EB 02: jmp 0x588558e1
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0dh
        pop eax
        mov dword ptr [ebx + 24h], eax
        ; Exact mapped bytes EB 15: jmp 0x588558fc
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 75 13: jne 0x588558fc
        __asm _emit 0x75
        __asm _emit 0x13
        movzx ecx, word ptr [ebx + 2eh]
        ; Exact mapped bytes 66 3B CE: cmp cx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 74 05: je 0x588558f7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B CF: cmp cx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 75 05: jne 0x588558fc
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebx + 24h], edx
        mov eax, edx
        push dword ptr [ebx + 8]
        lea esi, [ebx + 3ch]
        add eax, 15dh
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 D0 C2 FF FF: call 0x58851be2
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 11: jne 0x58855927
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, esi
        ; Exact mapped bytes E8 94 C2 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 0fffffea3h
        mov dword ptr [ebx + 24h], eax
        ; Exact mapped bytes EB 03: jmp 0x5885592a
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebx + 24h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebx + 30h]
        mov eax, dword ptr [esi + 404h]
        test eax, eax
        mov dword ptr [ebp - 14h], ecx
        cmove eax, esi
        and dword ptr [ebp - 1ch], 0
        and dword ptr [ebp - 18h], 0
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebx + 10h]
        lea eax, [ecx + 8]
        mov dword ptr [ebx + 10h], eax
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebx + 2eh]
        ; Exact mapped bytes 0F BE 18: movsx ebx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], ecx
        mov ecx, esi
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 45 C2 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov edi, eax
        ; Exact mapped bytes E8 33 CC FF FF: call 0x588525a8
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov esi, eax
        ; Exact mapped bytes E8 32 C2 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, eax
        mov eax, dword ptr [edx + 404h]
        test eax, eax
        cmove eax, edx
        mov edx, dword ptr [ebp - 0ch]
        push dword ptr [edx + 8]
        push 1
        push dword ptr [edx + 4]
        push dword ptr [edx]
        push dword ptr [ebp - 8]
        push ebx
        push edi
        push esi
        push ecx
        push eax
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 DF 7F 01 00: call 0x5886d98c
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 0ch]
        add esp, 2ch
        mov edx, dword ptr [ebp - 10h]
        mov esi, edx
        mov edi, dword ptr [ebp - 14h]
        mov ecx, edi
        mov eax, dword ptr [ebx + 1ch]
        shr eax, 5
        test al, 1
        ; Exact mapped bytes 74 2A: je 0x588559f1
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebx + 24h], 0
        ; Exact mapped bytes 75 24: jne 0x588559f1
        __asm _emit 0x75
        __asm _emit 0x24
        mov edi, dword ptr [ebx + 8]
        cmp byte ptr [edi + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x588559e0
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, edi
        ; Exact mapped bytes E8 C3 04 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebx + 2eh]
        lea eax, [edi + 0ch]
        push eax
        push dword ptr [ebx + 30h]
        ; Exact mapped bytes E8 33 DE FF FF: call 0x5885381f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea ecx, [ebx + 30h]
        movzx eax, word ptr [esi]
        push 67h
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 0A: je 0x58855a06
        __asm _emit 0x74
        __asm _emit 0x0a
        push 47h
        pop edx
        mov esi, ecx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 2D: jne 0x58855a33
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 1ch]
        mov esi, ecx
        shr eax, 5
        test al, 1
        ; Exact mapped bytes 75 21: jne 0x58855a33
        __asm _emit 0x75
        __asm _emit 0x21
        mov edi, dword ptr [ebx + 8]
        cmp byte ptr [edi + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x58855a25
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, edi
        ; Exact mapped bytes E8 7E 04 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebx + 30h]
        lea eax, [edi + 0ch]
        push eax
        push dword ptr [ebx + 30h]
        ; Exact mapped bytes E8 D0 DC FF FF: call 0x58853701
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov edx, dword ptr [ebx + 30h]
        mov al, byte ptr [edx]
        cmp al, 2dh
        ; Exact mapped bytes 75 09: jne 0x58855a45
        __asm _emit 0x75
        __asm _emit 0x09
        or dword ptr [ebx + 1ch], 40h
        inc edx
        mov dword ptr [esi], edx
        mov al, byte ptr [edx]
        cmp al, 69h
        ; Exact mapped bytes 74 0C: je 0x58855a55
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp al, 49h
        ; Exact mapped bytes 74 08: je 0x58855a55
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 6eh
        ; Exact mapped bytes 74 04: je 0x58855a55
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 4eh
        ; Exact mapped bytes 75 0B: jne 0x58855a60
        __asm _emit 0x75
        __asm _emit 0x0b
        and dword ptr [ebx + 1ch], 0fffffff7h
        push 73h
        pop eax
        ; Exact mapped bytes 66 89 43 2E: mov word ptr [ebx + 0x2e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x2e
        lea esi, [edx + 1]
        mov cl, byte ptr [edx]
        inc edx
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58855a63
        __asm _emit 0x75
        __asm _emit 0xf9
        pop edi
        sub edx, esi
        mov al, 1
        pop esi
        mov dword ptr [ebx + 34h], edx
        pop ebx
        leave
        ret
    }
}
