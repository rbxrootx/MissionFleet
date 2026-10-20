// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F490 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_0050f490_0050F490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50f4b6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 5c7374h
        ; Exact mapped bytes E8 4F 55 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f4b6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50f49c
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x50f4d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 5c7374h
        ; Exact mapped bytes E8 2F 55 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f4d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x50f4bc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 4C: je 0x50f534
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EE 50 03 00: call 0x5445e2
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x50f504
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x50f58c
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea ecx, [ebp + 10h]
        push ecx
        push 4
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 0C 1E 5E 00: call dword ptr [0x5e1e0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 8], 0
        sete al
        ; Exact mapped bytes EB 58: jmp 0x50f58c
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x50f554
        __asm _emit 0x75
        __asm _emit 0x14
        push 104h
        push 5c7374h
        ; Exact mapped bytes E8 B1 54 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f554
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x50f534
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 5c738ch
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 6C 23 5E 00: call dword ptr [0x5e236c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
