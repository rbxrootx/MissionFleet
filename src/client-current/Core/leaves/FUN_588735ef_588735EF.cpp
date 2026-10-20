// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588735EF .. +0x2A1 bytes.
extern "C" __declspec(naked) void FUN_588735ef_588735EF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        push esi
        xor esi, esi
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], esi
        push edi
        mov edi, dword ptr [ebp + 14h]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x5887362a
        __asm _emit 0x74
        __asm _emit 0x0b
        test ebx, ebx
        ; Exact mapped bytes 75 07: jne 0x5887362a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 57 02 00 00: jmp 0x58873881
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 1E: jne 0x5887364c
        __asm _emit 0x75
        __asm _emit 0x1e
        push edi
        push esi
        push esi
        push esi
        push esi
        push esi
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], 16h
        ; Exact mapped bytes E8 EA D8 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x5887387e
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 14h], 0
        ; Exact mapped bytes 75 0D: jne 0x5887365f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, edi
        ; Exact mapped bytes E8 47 28 FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edi + 0ch]
        cmp dword ptr [eax + 8], 0fde9h
        ; Exact mapped bytes 75 20: jne 0x5887368b
        __asm _emit 0x75
        __asm _emit 0x20
        push edi
        lea eax, [ebp - 28h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        push ebx
        lea eax, [ebp - 14h]
        ; Exact mapped bytes 66 0F 13 45 D8: movlpd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xd8
        push eax
        push edx
        ; Exact mapped bytes E8 74 7D 00 00: call 0x5887b3f7
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes E9 F6 01 00 00: jmp 0x58873881
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x58873818
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 0a8h], esi
        ; Exact mapped bytes 75 36: jne 0x588736d1
        __asm _emit 0x75
        __asm _emit 0x36
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x588736ca
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, 0ffh
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 0F 87 C6 01 00 00: ja 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        mov byte ptr [edx + esi], al
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0A: je 0x588736ca
        __asm _emit 0x74
        __asm _emit 0x0a
        inc esi
        mov eax, 0ffh
        cmp esi, ebx
        ; Exact mapped bytes 72 DA: jb 0x588736a4
        __asm _emit 0x72
        __asm _emit 0xda
        mov eax, esi
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x58873881
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 1
        ; Exact mapped bytes 75 5C: jne 0x58873733
        __asm _emit 0x75
        __asm _emit 0x5c
        test ebx, ebx
        ; Exact mapped bytes 74 1F: je 0x588736fa
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, ecx
        mov dword ptr [ebp - 18h], ebx
        ; Exact mapped bytes 66 39 30: cmp word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x30
        ; Exact mapped bytes 74 0B: je 0x588736f0
        __asm _emit 0x74
        __asm _emit 0x0b
        add eax, 2
        sub dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 75 F2: jne 0x588736e0
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 07: jmp 0x588736f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ebx, eax
        sub ebx, ecx
        sar ebx, 1
        inc ebx
        mov eax, dword ptr [edi + 0ch]
        lea edx, [ebp - 10h]
        push edx
        mov edx, dword ptr [ebp - 1ch]
        push esi
        push ebx
        push edx
        push ebx
        push ecx
        push esi
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 DA C4 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp byte ptr [ecx + eax - 1], 0
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x58873881
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x5887375c
        __asm _emit 0xeb
        __asm _emit 0x29
        lea eax, [ebp - 10h]
        push eax
        mov eax, dword ptr [edi + 0ch]
        push esi
        push ebx
        push edx
        push -1
        push ecx
        push esi
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 A0 C4 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58873762
        __asm _emit 0x74
        __asm _emit 0x06
        dec eax
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x58873881
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 7ah
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x58873813
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edi + 0ch]
        lea ebx, [ebp - 10h]
        push ebx
        push esi
        push 5
        mov eax, dword ptr [ecx + 4]
        pop ebx
        cmp eax, ebx
        cmovg eax, ebx
        push eax
        lea eax, [ebp - 0ch]
        push eax
        push 1
        push edx
        push esi
        push dword ptr [ecx + 8]
        ; Exact mapped bytes E8 49 C4 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 10h]
        mov edx, eax
        add esp, 20h
        mov dword ptr [ebp - 24h], edx
        test edx, edx
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 88 AF 00 00 00: js 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 5
        ; Exact mapped bytes 0F 87 A6 00 00 00: ja 0x58873873
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [edx + ecx]
        cmp eax, ebx
        ; Exact mapped bytes 77 38: ja 0x5887380f
        __asm _emit 0x77
        __asm _emit 0x38
        mov eax, esi
        mov dword ptr [ebp - 20h], eax
        test edx, edx
        ; Exact mapped bytes 7E 1E: jle 0x588737fe
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 1ch]
        mov al, byte ptr [ebp + eax - 0ch]
        mov byte ptr [edx + ecx], al
        test al, al
        ; Exact mapped bytes 74 21: je 0x5887380f
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 20h]
        inc eax
        inc ecx
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 18h], ecx
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7C E5: jl 0x588737e3
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov edx, dword ptr [ebp - 14h]
        add edx, 2
        mov dword ptr [ebp - 14h], edx
        cmp ecx, ebx
        ; Exact mapped bytes 0F 82 6D FF FF FF: jb 0x5887377c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ecx
        ; Exact mapped bytes EB 6E: jmp 0x58873881
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB F7: jmp 0x5887380f
        __asm _emit 0xeb
        __asm _emit 0xf7
        cmp dword ptr [eax + 0a8h], esi
        ; Exact mapped bytes 75 30: jne 0x58873850
        __asm _emit 0x75
        __asm _emit 0x30
        movzx eax, word ptr [ecx]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9E FE FF FF: je 0x588736ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        mov eax, 0ffh
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 77 3B: ja 0x58873873
        __asm _emit 0x77
        __asm _emit 0x3b
        add ecx, 2
        inc esi
        movzx eax, word ptr [ecx]
        mov edx, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        mov eax, 0ffh
        ; Exact mapped bytes 75 E8: jne 0x58873833
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes E9 7A FE FF FF: jmp 0x588736ca
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        push esi
        push esi
        push esi
        push -1
        push ecx
        push esi
        push dword ptr [eax + 8]
        ; Exact mapped bytes E8 86 C3 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58873873
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 0F 84 E9 FE FF FF: je 0x5887375c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 18h], 2ah
        mov byte ptr [edi + 1ch], 1
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 C2 D7 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
