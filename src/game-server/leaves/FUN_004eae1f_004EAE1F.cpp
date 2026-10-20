// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAE1F .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_004eae1f_004EAE1F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 0fah
        push 5c7d14h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 22 03 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4eae5b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 5c7d14h
        ; Exact mapped bytes E8 AA 9B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eae5b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4eae3e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4eae83
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 5c7d14h
        ; Exact mapped bytes E8 82 9B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eae83
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4eae69
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 56: jne 0x4eaee5
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4eaea1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 73 19: jae 0x4eaec5
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x4eaec3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4eaec5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4eae98
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4eaedf
        __asm _emit 0x75
        __asm _emit 0x14
        push 106h
        push 5c7d14h
        ; Exact mapped bytes E8 26 9B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaedf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4eaec5
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 64 4F FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4eaf0a
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ah
        push 5c7d14h
        ; Exact mapped bytes E8 FB 9A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eaf0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4eaee5
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4C: jne 0x4eaf6a
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 01 00 00: call 0x4eb0e0
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
        ; Exact mapped bytes EB 09: jmp 0x4eaf46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 19: jae 0x4eaf6a
        __asm _emit 0x73
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x4eaf68
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4eaf6a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4eaf3d
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
