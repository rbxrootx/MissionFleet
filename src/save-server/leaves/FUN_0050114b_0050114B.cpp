// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050114B .. +0x27A bytes.
extern "C" __declspec(naked) void FUN_0050114b_0050114B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x501163
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x501177
        __asm _emit 0x7f
        __asm _emit 0x14
        push 2e8h
        push 675764h
        ; Exact mapped bytes E8 CE 7B 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501177
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x501157
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x50119d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D 0D 02 00 00: jge 0x5013b6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + eax + 8]
        and dl, 0dfh
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + eax + 8], dl
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x5011de
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB B6: jmp 0x501194
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 9]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x50120b
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 12: jmp 0x50121d
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 8E 7C 01 00 00: jle 0x5013a8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x501244
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        sub edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8C 93 00 00 00: jl 0x5012e1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 8]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 75 7D: jne 0x5012e1
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 9]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 62: je 0x5012dc
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + eax + 4], 0
        ; Exact mapped bytes 75 52: jne 0x5012dc
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 1ch]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 75 3C: jne 0x5012dc
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [ebp - 18h], 1
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + eax + 8]
        or dl, 20h
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + eax + 8], dl
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 05: jmp 0x5012e1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5A FF FF FF: jmp 0x50123b
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x5013a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 09: jmp 0x5012ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 8C 8E 00 00 00: jl 0x501397
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 8]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 75 78: jne 0x501397
        __asm _emit 0x75
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 75 26: jne 0x50135b
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 9]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x50135d
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + edx + 4], 0
        ; Exact mapped bytes 74 02: je 0x50135d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 99: jmp 0x5012f6
        __asm _emit 0xeb
        __asm _emit 0x99
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + edx + 8]
        or cl, 20h
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + edx + 8], cl
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 09: jne 0x5013a6
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x5013b1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 DE FD FF FF: jmp 0x501194
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
