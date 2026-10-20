// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECB08 .. +0x169 bytes.
extern "C" __declspec(naked) void FUN_004ecb08_004ECB08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 115h
        push 5c7e38h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 39 E6 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ecb44
        __asm _emit 0x75
        __asm _emit 0x14
        push 116h
        push 5c7e38h
        ; Exact mapped bytes E8 C1 7E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecb44
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ecb27
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ecb6c
        __asm _emit 0x75
        __asm _emit 0x14
        push 119h
        push 5c7e38h
        ; Exact mapped bytes E8 99 7E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecb6c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ecb52
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 56: jne 0x4ecbce
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4ecb8a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 73 19: jae 0x4ecbae
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x4ecbac
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ecbae
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4ecb81
        __asm _emit 0xeb
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ecbc8
        __asm _emit 0x75
        __asm _emit 0x14
        push 121h
        push 5c7e38h
        ; Exact mapped bytes E8 3D 7E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecbc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ecbae
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 10h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 7B 32 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ecbf3
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 5c7e38h
        ; Exact mapped bytes E8 12 7E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ecbf3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4ecbce
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 3B: jne 0x4ecc42
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ecc1e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 73 19: jae 0x4ecc42
        __asm _emit 0x73
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x4ecc40
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ecc42
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x4ecc15
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 ED 0D 00 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 DE 0D 00 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0d
        __asm _emit 0x00
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
