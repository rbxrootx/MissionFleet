// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588567AD .. +0x1D4 bytes.
extern "C" __declspec(naked) void FUN_588567ad_588567AD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        cmp dword ptr [ebp + 10h], 0
        push ebx
        push esi
        mov esi, dword ptr [ebp + 18h]
        push edi
        ; Exact mapped bytes 74 1C: je 0x588567dd
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 16: je 0x588567dd
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 17: jne 0x588567e4
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 9D BC 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 CE A7 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov edi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 0D: je 0x588567f8
        __asm _emit 0x74
        __asm _emit 0x0d
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 76 24: jbe 0x5885681c
        __asm _emit 0x76
        __asm _emit 0x24
        cmp edi, -1
        ; Exact mapped bytes 74 0E: je 0x5885680b
        __asm _emit 0x74
        __asm _emit 0x0e
        push edi
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 66 FF FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 BE: je 0x588567cd
        __asm _emit 0x74
        __asm _emit 0xbe
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp dword ptr [ebp + 14h], eax
        ; Exact mapped bytes 77 B1: ja 0x588567cd
        __asm _emit 0x77
        __asm _emit 0xb1
        mov eax, dword ptr [esi + 0ch]
        nop
        test eax, 4c0h
        ; Exact mapped bytes 74 08: je 0x5885682f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x58856836
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1000h
        mov ebx, dword ptr [ebp + 10h]
        mov edx, edi
        imul ebx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], edx
        mov ecx, ebx
        mov dword ptr [ebp - 4], ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x58856933
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 7fffffffh
        mov eax, dword ptr [esi + 0ch]
        nop
        test eax, 4c0h
        ; Exact mapped bytes 74 43: je 0x588568aa
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x588568aa
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 88 EA 00 00 00: js 0x5885695e
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, eax
        cmovb eax, ecx
        mov dword ptr [ebp - 14h], eax
        cmp eax, edx
        ; Exact mapped bytes 0F 87 B7 00 00 00: ja 0x5885693b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push dword ptr [esi]
        push edx
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB 01 00 00: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        sub dword ptr [esi + 8], eax
        sub ecx, eax
        add dword ptr [esi], eax
        mov edx, dword ptr [ebp - 0ch]
        add dword ptr [ebp - 8], eax
        sub edx, eax
        ; Exact mapped bytes EB 7B: jmp 0x58856925
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 10h]
        cmp ecx, eax
        ; Exact mapped bytes 72 4B: jb 0x588568fc
        __asm _emit 0x72
        __asm _emit 0x4b
        cmp ecx, 7fffffffh
        mov dword ptr [ebp - 14h], ecx
        cmova ecx, dword ptr [ebp - 18h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588568ce
        __asm _emit 0x74
        __asm _emit 0x0c
        xor edx, edx
        mov eax, ecx
        div dword ptr [ebp - 10h]
        sub ecx, edx
        mov edx, dword ptr [ebp - 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 77 69: ja 0x5885693b
        __asm _emit 0x77
        __asm _emit 0x69
        mov eax, dword ptr [esi + 4]
        and dword ptr [esi + 8], 0
        push ecx
        push dword ptr [ebp - 8]
        mov dword ptr [esi], eax
        push esi
        ; Exact mapped bytes E8 71 63 01 00: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes E8 3B 82 01 00: call 0x5886eb27
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58856969
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 78 69: js 0x5885695e
        __asm _emit 0x78
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        ; Exact mapped bytes EB A4: jmp 0x588568a0
        __asm _emit 0xeb
        __asm _emit 0xa4
        push esi
        ; Exact mapped bytes E8 3C 87 01 00: call 0x5886f03e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        cmp ecx, -1
        ; Exact mapped bytes 74 68: je 0x58856972
        __asm _emit 0x74
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 0ch]
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x5885693b
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], cl
        inc eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        dec ecx
        mov eax, dword ptr [esi + 18h]
        dec edx
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 0F 85 29 FF FF FF: jne 0x5885685c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes E9 A4 FE FF FF: jmp 0x588567df
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, -1
        ; Exact mapped bytes 74 0E: je 0x5885694e
        __asm _emit 0x74
        __asm _emit 0x0e
        push edi
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 64 FF FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 1C BB 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E9 7A FE FF FF: jmp 0x588567d8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 10h
        pop eax
        lea ecx, [esi + 0ch]
        ; Exact mapped bytes F0 09 01: lock or dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x01
        ; Exact mapped bytes EB 09: jmp 0x58856972
        __asm _emit 0xeb
        __asm _emit 0x09
        push 8
        pop ecx
        lea eax, [esi + 0ch]
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        sub ebx, dword ptr [ebp - 4]
        xor edx, edx
        mov eax, ebx
        div dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 5E FE FF FF: jmp 0x588567df
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
