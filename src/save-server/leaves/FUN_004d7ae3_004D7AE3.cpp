// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D7AE3 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_004d7ae3_004D7AE3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d7b09
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c8h
        push 6720f4h
        ; Exact mapped bytes E8 3C 12 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7b09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d7aef
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 28 B9 FC FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d7b32
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c9h
        push 6720f4h
        ; Exact mapped bytes E8 13 12 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7b32
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4d7b0f
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4d7be5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 05: je 0x4d7b53
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x4d7c1b
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 84 FC 05 00: call 0x5377ee
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0fffff6fbh
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 72 14: jb 0x4d7b9b
        __asm _emit 0x72
        __asm _emit 0x14
        push 2d5h
        push 6720f4h
        ; Exact mapped bytes E8 AA 11 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7b9b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4d7b79
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        or ch, 4
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 21 FF 05 00: call 0x537ae6
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d7bdd
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d7h
        push 6720f4h
        ; Exact mapped bytes E8 68 11 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7bdd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BE: jne 0x4d7ba1
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact mapped bytes EB 36: jmp 0x4d7c1b
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4d7c02
        __asm _emit 0x75
        __asm _emit 0x14
        push 2dbh
        push 6720f4h
        ; Exact mapped bytes E8 43 11 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7c02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d7be5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 28 42 01 00: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
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
