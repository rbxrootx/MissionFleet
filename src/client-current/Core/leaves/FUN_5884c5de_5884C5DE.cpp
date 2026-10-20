// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C5DE .. +0x185 bytes.
extern "C" __declspec(naked) void FUN_5884c5de_5884C5DE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, 8ah
        or dword ptr [ebp - 4], 0ffffffffh
        push ebx
        push esi
        movzx ebx, word ptr [edx + 2]
        xor esi, esi
        push edi
        push 7
        pop eax
        test ebx, ebx
        push 3
        cmovne ecx, eax
        xor eax, eax
        test ebx, ebx
        pop edi
        setne al
        add eax, edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 88 44 01 00 00: js 0x5884c75c
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 6
        inc edi
        mov dword ptr [ebp - 8], edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp + 0ch], edx
        mov edx, ebx
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 0ch], ebx
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], esi
        inc esi
        mov dword ptr [ebp + 10h], edx
        movzx ebx, word ptr [ebx]
        mov dword ptr [ebp - 10h], ebx
        cmp esi, ecx
        ; Exact mapped bytes 7D 08: jge 0x5884c64c
        __asm _emit 0x7d
        __asm _emit 0x08
        cmp edx, ebx
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x5884c74e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7D 2B: jge 0x5884c67b
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov ebx, dword ptr [ebp + 10h]
        movzx eax, word ptr [edi + ebx*4 + 0ef6h]
        push eax
        movzx eax, word ptr [edi + ebx*4 + 0ef4h]
        push eax
        push edi
        ; Exact mapped bytes E8 C1 FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        sub esi, 1
        ; Exact mapped bytes 75 E0: jne 0x5884c653
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ebx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x5884c729
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5F: je 0x5884c6e0
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 1E: je 0x5884c6a4
        __asm _emit 0x74
        __asm _emit 0x1e
        movzx eax, word ptr [edi + edx*4 + 0ef6h]
        push eax
        movzx eax, word ptr [edi + edx*4 + 0ef4h]
        push eax
        push edi
        ; Exact mapped bytes E8 8E FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 18h]
        add esp, 0ch
        push 3
        pop eax
        add esi, -3
        cmp eax, esi
        push 588c241ch
        sbb al, al
        inc al
        push eax
        push edi
        ; Exact mapped bytes E8 D4 CE FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [edi + 0f36h]
        push eax
        movzx eax, word ptr [edi + 0f34h]
        push eax
        push edi
        ; Exact mapped bytes E8 5A FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push esi
        push edi
        ; Exact mapped bytes E8 51 FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        ; Exact mapped bytes EB 49: jmp 0x5884c729
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp esi, 0ah
        ; Exact mapped bytes 7F 1F: jg 0x5884c704
        __asm _emit 0x7f
        __asm _emit 0x1f
        movzx eax, word ptr [edi + 0f3ah]
        push eax
        movzx eax, word ptr [edi + 0f38h]
        push eax
        push edi
        ; Exact mapped bytes E8 31 FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        pop eax
        push eax
        lea eax, [esi - 3]
        ; Exact mapped bytes EB 1B: jmp 0x5884c71f
        __asm _emit 0xeb
        __asm _emit 0x1b
        movzx eax, word ptr [edi + 0f3eh]
        push eax
        movzx eax, word ptr [edi + 0f3ch]
        push eax
        push edi
        ; Exact mapped bytes E8 12 FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 7
        lea eax, [esi - 0bh]
        push eax
        push edi
        ; Exact mapped bytes E8 06 FE FF FF: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov eax, dword ptr [ebp + 10h]
        xor esi, esi
        mov dword ptr [ebp - 4], eax
        test ebx, ebx
        ; Exact mapped bytes 75 09: jne 0x5884c73e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, 8ah
        push 3
        ; Exact mapped bytes EB 0F: jmp 0x5884c74d
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp dword ptr [ebp - 1ch], ebx
        ; Exact mapped bytes 75 05: jne 0x5884c748
        __asm _emit 0x75
        __asm _emit 0x05
        push 6
        pop ecx
        ; Exact mapped bytes EB F2: jmp 0x5884c73a
        __asm _emit 0xeb
        __asm _emit 0xf2
        push 7
        pop ecx
        push 4
        pop eax
        add dword ptr [ebp + 0ch], 4
        sub dword ptr [ebp - 8], 1
        ; Exact mapped bytes 0F 85 C9 FE FF FF: jne 0x5884c625
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
