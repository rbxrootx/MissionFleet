// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417BF1 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_00417bf1_00417BF1() {
    __asm {
        mov eax, 43ac78h
        ; Exact mapped bytes E8 0D 7A 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 14h], 0
        or dword ptr [ebp - 1ch], 0ffffffffh
        mov dword ptr [ebp - 10h], esp
        push edi
        push dword ptr [ebp + 8]
        mov ebx, ecx
        push ebx
        ; Exact mapped bytes E8 E8 01 00 00: call 0x417e03
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        xor edx, edx
        cmp esi, edx
        ; Exact mapped bytes 75 07: jne 0x417c2a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x417df2
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp eax, edx
        ; Exact mapped bytes 74 2C: je 0x417c5d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dword ptr [eax], ebx
        mov edi, dword ptr [edi]
        cmp edi, edx
        ; Exact mapped bytes 7C 15: jl 0x417c4e
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp edi, 1
        ; Exact mapped bytes 7E 0A: jle 0x417c48
        __asm _emit 0x7e
        __asm _emit 0x0a
        cmp edi, 2
        ; Exact mapped bytes 75 0B: jne 0x417c4e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 14h]
        ; Exact mapped bytes EB 03: jmp 0x417c4b
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [eax + 4], ecx
        xor ecx, ecx
        cmp dword ptr [eax + 4], edx
        setne cl
        mov eax, ecx
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x417df2
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        xor ecx, ecx
        cmp dword ptr [esi + 24h], -1
        mov dword ptr [ebp + 10h], edx
        mov dword ptr [ebp - 4], edx
        setne cl
        sub eax, edx
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x417d07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 59: je 0x417cd5
        __asm _emit 0x74
        __asm _emit 0x59
        dec eax
        ; Exact mapped bytes 74 36: je 0x417cb5
        __asm _emit 0x74
        __asm _emit 0x36
        dec eax
        ; Exact mapped bytes 0F 85 63 01 00 00: jne 0x417de9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 10h]
        lea eax, [ebp - 14h]
        push eax
        cmp ecx, edx
        push dword ptr [edi + 20h]
        mov dword ptr [ebp - 14h], 1
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes 74 09: je 0x417ca7
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 04: jmp 0x417cab
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov dword ptr [ebp + 10h], eax
        xor eax, eax
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 47: jmp 0x417cfc
        __asm _emit 0xeb
        __asm _emit 0x47
        mov esi, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 74 09: je 0x417cc5
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 04: jmp 0x417cc9
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        and dword ptr [ebp - 14h], 0
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x417de9
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 10h]
        lea eax, [ebp - 14h]
        cmp ecx, edx
        mov dword ptr [ebp - 14h], 1
        push eax
        ; Exact mapped bytes 74 09: je 0x417cf0
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 04: jmp 0x417cf4
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov dword ptr [ebp + 10h], eax
        xor eax, eax
        cmp dword ptr [ebp - 14h], eax
        sete al
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x417dd2
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 FA FC FF FF: call 0x417a0a
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 30h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5C: je 0x417d76
        __asm _emit 0x74
        __asm _emit 0x5c
        push 10h
        lea eax, [ebp - 30h]
        push dword ptr [edi + 8]
        push eax
        ; Exact mapped bytes E8 98 6E 00 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        inc eax
        mov dword ptr [ebp - 28h], eax
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 B4 5B 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add esp, 10h
        add ecx, 0fffffffh
        mov dword ptr [ebp - 30h], eax
        shl ecx, 4
        push ecx
        mov ecx, dword ptr [edi + 8]
        push dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 6A 6E 00 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 30h]
        add esp, 0ch
        shl eax, 4
        lea eax, [eax + ecx - 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [eax + 8], ecx
        lea eax, [ebp - 30h]
        ; Exact mapped bytes EB 03: jmp 0x417d79
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [edi + 8]
        lea ecx, [ebp - 1ch]
        push ecx
        push eax
        lea eax, [ebp - 40h]
        mov ecx, ebx
        push eax
        push 1
        push esi
        ; Exact mapped bytes E8 08 08 02 00: call 0x438594
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F BF 45 C8: movsx eax, word ptr [ebp - 0x38]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xc8
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 74 36: je 0x417dd2
        __asm _emit 0x74
        __asm _emit 0x36
        push dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 71 5B 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 2B: jmp 0x417dd2
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x417dba
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 E9 0A 02 00: call 0x4388a3
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 64 A9 01 00: call 0x432726
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 80020009h
        mov eax, 417dcfh
        ret
        mov edi, dword ptr [ebp + 0ch]
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 11: jge 0x417de9
        __asm _emit 0x7d
        __asm _emit 0x11
    }
}
