// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B6D2 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_0054b6d2_0054B6D2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 7ah
        push 5ce6c8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 72 FA FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 42h]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x54b70b
        __asm _emit 0x74
        __asm _emit 0x11
        push 7bh
        push 5ce6c8h
        ; Exact mapped bytes E8 FA 92 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b70b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54b6ee
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58e530h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 24h
        push ecx
        ; Exact mapped bytes E8 6E 10 F5 FF: call 0x49c790
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54b73a
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 5ce6c8h
        ; Exact mapped bytes E8 CB 92 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b73a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x54b711
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes E8 FE 9C FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 71: jne 0x54b7bf
        __asm _emit 0x75
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 8]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        cmp dword ptr [eax + 38h], 0
        sete cl
        push ecx
        push 4
        mov edx, dword ptr [ebp - 8]
        add edx, 44h
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 24h
        push eax
        ; Exact mapped bytes FF 15 14 2A 5E 00: call dword ptr [0x5e2a14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1B: je 0x54b79c
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 68 1C 00 00: call 0x54d3f2
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 5ce6e8h
        ; Exact mapped bytes E8 80 44 F8 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x54b7d3
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x54b7b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 90h
        push 5ce6c8h
        ; Exact mapped bytes E8 4C 92 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b7b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54b79c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 42h]
        add dl, 1
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 42h], dl
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
