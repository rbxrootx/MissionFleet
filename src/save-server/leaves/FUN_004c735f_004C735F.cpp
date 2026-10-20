// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C735F .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_004c735f_004C735F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 0fah
        push 6747cch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E2 2E 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c739b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 6747cch
        ; Exact mapped bytes E8 AA 19 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c739b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c737e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c73c3
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 6747cch
        ; Exact mapped bytes E8 82 19 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c73c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4c73a9
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 56: jne 0x4c7425
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4c73e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 73 19: jae 0x4c7405
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x4c7403
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4c7405
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4c73d8
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c741f
        __asm _emit 0x75
        __asm _emit 0x14
        push 106h
        push 6747cch
        ; Exact mapped bytes E8 26 19 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c741f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c7405
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 34 C0 FD FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c744a
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ah
        push 6747cch
        ; Exact mapped bytes E8 FB 18 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c744a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4c7425
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4C: jne 0x4c74aa
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 01 00 00: call 0x4c7620
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        div dword ptr [ecx + 8]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 09: jmp 0x4c7486
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 19: jae 0x4c74aa
        __asm _emit 0x73
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x4c74a8
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4c74aa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4c747d
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
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
