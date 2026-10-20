// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512903 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_00512903_00512903() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 475h
        push 5c84b0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 3E 88 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 36 02 00: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x512942
        __asm _emit 0x74
        __asm _emit 0x14
        push 476h
        push 5c84b0h
        ; Exact mapped bytes E8 C3 20 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512942
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x512922
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE C4 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 2000000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x51296d
        __asm _emit 0x74
        __asm _emit 0x14
        push 477h
        push 5c84b0h
        ; Exact mapped bytes E8 98 20 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51296d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x512948
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 99 02 00: call 0x53c32d
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 99 FD 00 00: call 0x52271c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x5129aa
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 5a0049h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 34 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 34 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5D 69 02 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x5129ed
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 99 02 00: call 0x53c3c5
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0x02
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
