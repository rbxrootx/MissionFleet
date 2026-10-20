// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439540 .. +0x18F bytes.
extern "C" __declspec(naked) void FUN_00439540_00439540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x439568
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 3B C8 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x439589
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 8]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43958f
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 10h], -2
        ; Exact mapped bytes 77 1A: ja 0x4395bd
        __asm _emit 0x77
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp - 4]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp + 10h]
        cmp edx, eax
        ; Exact mapped bytes 72 0D: jb 0x4395ca
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 39 CA FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 82 85 00 00 00: jb 0x439689
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 45 14: movsx eax, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x14
        mov edi, dword ptr [ebp - 28h]
        mov edx, ecx
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 4E: je 0x439687
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 08: jne 0x439656
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 17: jmp 0x43966d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 F9 C5 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 2ch]
        sub edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 3B: jmp 0x4396c4
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 45 14: movsx eax, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x14
        mov edi, dword ptr [ebp - 28h]
        mov edx, ecx
        mov bl, al
        mov bh, bl
        mov eax, ebx
        shl eax, 10h
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov al, byte ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8C 78 00 00: call 0x440f50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
