// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054110F .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_0054110f_0054110F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x541130
        __asm _emit 0x7d
        __asm _emit 0x11
        push 51h
        push 6756ach
        ; Exact mapped bytes E8 15 7C FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541130
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x541119
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 11: jge 0x54114d
        __asm _emit 0x7d
        __asm _emit 0x11
        push 52h
        push 6756ach
        ; Exact mapped bytes E8 F8 7B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54114d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x541136
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x54116a
        __asm _emit 0x7d
        __asm _emit 0x11
        push 53h
        push 6756ach
        ; Exact mapped bytes E8 DB 7B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54116a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x541153
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7D 11: jge 0x541187
        __asm _emit 0x7d
        __asm _emit 0x11
        push 54h
        push 6756ach
        ; Exact mapped bytes E8 BE 7B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541187
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x541170
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4ch], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
