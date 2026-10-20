// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE60D .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_004fe60d_004FE60D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 23 FD FF: call 0x4d0991
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 40h], 1
        ; Exact mapped bytes 7D 14: jge 0x4fe63c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 919h
        push 674fe8h
        ; Exact mapped bytes E8 09 A7 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe63c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fe61f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 44h], 1
        ; Exact mapped bytes 7D 14: jge 0x4fe65f
        __asm _emit 0x7d
        __asm _emit 0x14
        push 91ah
        push 674fe8h
        ; Exact mapped bytes E8 E6 A6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe65f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fe642
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 44h], 1
        ; Exact mapped bytes 7F 1D: jg 0x4fe68b
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 7F 14: jg 0x4fe68b
        __asm _emit 0x7f
        __asm _emit 0x14
        push 91bh
        push 674fe8h
        ; Exact mapped bytes E8 BA A6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe68b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4fe665
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7D 14: jge 0x4fe6ae
        __asm _emit 0x7d
        __asm _emit 0x14
        push 91ch
        push 674fe8h
        ; Exact mapped bytes E8 97 A6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe6ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fe691
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 1
        ; Exact mapped bytes 7D 14: jge 0x4fe6d1
        __asm _emit 0x7d
        __asm _emit 0x14
        push 91dh
        push 674fe8h
        ; Exact mapped bytes E8 74 A6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe6d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fe6b4
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 7E 14: jle 0x4fe6f9
        __asm _emit 0x7e
        __asm _emit 0x14
        push 91eh
        push 674fe8h
        ; Exact mapped bytes E8 4C A6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe6f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4fe6d7
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        cmp edx, dword ptr [ecx + 44h]
        ; Exact mapped bytes 7E 14: jle 0x4fe721
        __asm _emit 0x7e
        __asm _emit 0x14
        push 91fh
        push 674fe8h
        ; Exact mapped bytes E8 24 A6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe721
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4fe6ff
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
