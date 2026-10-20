// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439C70 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_00439c70_00439C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [ecx]
        cmp edx, eax
        ; Exact mapped bytes 76 0C: jbe 0x439cb0
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 34h], 0ffffffffh
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x439e7e
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 28h], cl
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 08: je 0x439ce3
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0B: jne 0x439cee
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x439e59
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 3B: jne 0x439d40
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 28: je 0x439d35
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 75 0B: jne 0x439d35
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB D0: jmp 0x439d05
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x439e59
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x439e53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 2A: je 0x439d8d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 74 02: je 0x439d82
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x439d8d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB CE: jmp 0x439d5b
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 27: je 0x439dbc
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x439dbc
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB D1: jmp 0x439d8d
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 0B: jne 0x439dcf
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x439e59
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 08: jne 0x439df4
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 65: jmp 0x439e59
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 34: je 0x439e45
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 08: jne 0x439e2a
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 2F: jmp 0x439e59
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 08: jne 0x439e43
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 16: jmp 0x439e59
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB AF: jmp 0x439df4
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x439d4f
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 74 0D: je 0x439e71
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 07: jmp 0x439e78
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0ffffffffh
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
