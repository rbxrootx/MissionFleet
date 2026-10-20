// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506C75 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_00506c75_00506C75() {
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
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x506d1a
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
        ; Exact mapped bytes E8 3F 8A 01 00: call 0x51f70e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x506cec
        __asm _emit 0x75
        __asm _emit 0x14
        push 233h
        push 677edch
        ; Exact mapped bytes E8 59 20 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506cec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x506cd2
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x506d0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 234h
        push 677edch
        ; Exact mapped bytes E8 39 20 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506d0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x506cf2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x506da8
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 5000h
        test ecx, ecx
        ; Exact mapped bytes 74 7F: je 0x506da6
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
        ; Exact mapped bytes E8 B0 89 01 00: call 0x51f70e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x506d7b
        __asm _emit 0x75
        __asm _emit 0x14
        push 23bh
        push 677edch
        ; Exact mapped bytes E8 CA 1F 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506d7b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x506d61
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x506d9b
        __asm _emit 0x75
        __asm _emit 0x14
        push 23ch
        push 677edch
        ; Exact mapped bytes E8 AA 1F 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506d9b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x506d81
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x506da8
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
