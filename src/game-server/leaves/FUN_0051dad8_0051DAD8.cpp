// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DAD8 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_0051dad8_0051DAD8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x51db7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        and dh, 0afh
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 28h
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 DC 29 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x51db4f
        __asm _emit 0x75
        __asm _emit 0x14
        push 233h
        push 5cb704h
        ; Exact mapped bytes E8 B6 6E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51db4f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51db35
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51db6f
        __asm _emit 0x75
        __asm _emit 0x14
        push 234h
        push 5cb704h
        ; Exact mapped bytes E8 96 6E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51db6f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51db55
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x51dc0b
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 5000h
        test ecx, ecx
        ; Exact mapped bytes 74 7F: je 0x51dc09
        __asm _emit 0x74
        __asm _emit 0x7f
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        and ah, 5fh
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 38h
        sub esp, 10h
        mov edx, esp
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 4D 29 01 00: call 0x53050e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x51dbde
        __asm _emit 0x75
        __asm _emit 0x14
        push 23bh
        push 5cb704h
        ; Exact mapped bytes E8 27 6E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51dbde
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51dbc4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51dbfe
        __asm _emit 0x75
        __asm _emit 0x14
        push 23ch
        push 5cb704h
        ; Exact mapped bytes E8 07 6E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51dbfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51dbe4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x51dc0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
