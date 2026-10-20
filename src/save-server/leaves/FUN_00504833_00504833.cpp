// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504833 .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_00504833_00504833() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 26: je 0x50486b
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 20: je 0x50486b
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x50486b
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 14: je 0x50486b
        __asm _emit 0x74
        __asm _emit 0x14
        push 12dh
        push 677834h
        ; Exact mapped bytes E8 DA 44 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50486b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x50483f
        __asm _emit 0x75
        __asm _emit 0xce
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 0A: jne 0x504881
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x504a45
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 70: jne 0x5048f7
        __asm _emit 0x75
        __asm _emit 0x70
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 14: je 0x5048a1
        __asm _emit 0x74
        __asm _emit 0x14
        push 135h
        push 677834h
        ; Exact mapped bytes E8 A4 44 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5048a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x504887
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x5048c1
        __asm _emit 0x74
        __asm _emit 0x14
        push 136h
        push 677834h
        ; Exact mapped bytes E8 84 44 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5048c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5048a7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 0C: jbe 0x5048f0
        __asm _emit 0x76
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 1ch], edx
        xor eax, eax
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x504a45
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 1A: je 0x504917
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x504917
        __asm _emit 0x74
        __asm _emit 0x14
        push 13dh
        push 677834h
        ; Exact mapped bytes E8 2E 44 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504917
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5048f7
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x504937
        __asm _emit 0x75
        __asm _emit 0x14
        push 13eh
        push 677834h
        ; Exact mapped bytes E8 0E 44 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504937
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x50491d
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x504957
        __asm _emit 0x75
        __asm _emit 0x14
        push 13fh
        push 677834h
        ; Exact mapped bytes E8 EE 43 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504957
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x50493d
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 26: jne 0x504989
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes 76 15: jbe 0x504989
        __asm _emit 0x76
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 38: jne 0x5049d8
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], eax
        ; Exact mapped bytes 73 0B: jae 0x5049bc
        __asm _emit 0x73
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0C: jmp 0x5049c8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 63: jmp 0x504a3b
        __asm _emit 0xeb
        __asm _emit 0x63
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 0F: jne 0x5049ed
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 18h]
        sub edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], ecx
        ; Exact mapped bytes 73 0B: jae 0x504a09
        __asm _emit 0x73
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 0C: jmp 0x504a15
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        add edx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], edx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
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
