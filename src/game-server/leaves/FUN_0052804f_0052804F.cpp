// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052804F .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_0052804f_0052804F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x528075
        __asm _emit 0x7d
        __asm _emit 0x14
        push 2beh
        push 5c8e54h
        ; Exact mapped bytes E8 90 C9 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528075
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52805b
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 7E 14: jle 0x528095
        __asm _emit 0x7e
        __asm _emit 0x14
        push 2bfh
        push 5c8e54h
        ; Exact mapped bytes E8 70 C9 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528095
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52807b
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 07: jne 0x5280a8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 5
        add ecx, 585b78h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 25: je 0x5280f9
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0C: je 0x5280f7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 2C: jmp 0x528125
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 26: je 0x528125
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 30 DD 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E0 88 F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        add edx, eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 26: je 0x528156
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0C: je 0x528154
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 2C: jmp 0x528182
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 26: je 0x528182
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 E9 DC 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 83 88 F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
