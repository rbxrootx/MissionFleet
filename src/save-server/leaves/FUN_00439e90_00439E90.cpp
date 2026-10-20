// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439E90 .. +0x215 bytes.
extern "C" __declspec(naked) void FUN_00439e90_00439E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push edi
        mov dword ptr [ebp - 34h], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ecx + 4]
        sub ecx, dword ptr [edx]
        cmp eax, ecx
        ; Exact mapped bytes 76 0C: jbe 0x439ecd
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x43a09b
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 08: je 0x439f00
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0B: jne 0x439f0b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x43a076
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 3B: jne 0x439f5d
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 28: je 0x439f52
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x439f52
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB D0: jmp 0x439f22
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x43a076
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x43a070
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 2A: je 0x439faa
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x439f9f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x439faa
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB CE: jmp 0x439f78
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 28: je 0x439fda
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x439fda
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB D0: jmp 0x439faa
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 0B: jne 0x439fed
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x43a076
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 08: jne 0x43a012
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 64: jmp 0x43a076
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x43a062
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 08: jne 0x43a047
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 2F: jmp 0x43a076
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 08: jne 0x43a060
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 16: jmp 0x43a076
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB B0: jmp 0x43a012
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x439f6c
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 0D: je 0x43a08e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x43a095
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0ffffffffh
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
