// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1292 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_004c1292_004C1292() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 90 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4B: jne 0x4c12f8
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4c12ca
        __asm _emit 0x74
        __asm _emit 0x14
        push 187h
        push 6746f0h
        ; Exact mapped bytes E8 7B 7A 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c12ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c12ad
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4c12ed
        __asm _emit 0x74
        __asm _emit 0x14
        push 188h
        push 6746f0h
        ; Exact mapped bytes E8 58 7A 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c12ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4c12d0
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x4c139c
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4c1315
        __asm _emit 0x7d
        __asm _emit 0x14
        push 18ch
        push 6746f0h
        ; Exact mapped bytes E8 30 7A 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1315
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4c12f8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4c1338
        __asm _emit 0x7d
        __asm _emit 0x14
        push 18dh
        push 6746f0h
        ; Exact mapped bytes E8 0D 7A 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1338
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c131b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 14: jle 0x4c1360
        __asm _emit 0x7e
        __asm _emit 0x14
        push 18eh
        push 6746f0h
        ; Exact mapped bytes E8 E5 79 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1360
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4c133e
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 E8 20 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c1396
        __asm _emit 0x75
        __asm _emit 0x14
        push 18fh
        push 6746f0h
        ; Exact mapped bytes E8 AF 79 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1396
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4c1366
        __asm _emit 0x75
        __asm _emit 0xca
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
