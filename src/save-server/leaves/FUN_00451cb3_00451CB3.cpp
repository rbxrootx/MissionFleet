// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00451CB3 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_00451cb3_00451CB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x451cdc
        __asm _emit 0x75
        __asm _emit 0x14
        push 865h
        push 67702ch
        ; Exact mapped bytes E8 69 70 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x451cdc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x451cbf
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 1B: je 0x451d06
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 0B: je 0x451cff
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 48h]
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x451daf
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x451daf
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 58: jne 0x451d67
        __asm _emit 0x75
        __asm _emit 0x58
        lea eax, [ebp - 8]
        push eax
        push 6392e0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 4ch]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 04: jge 0x451d3c
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 73: jmp 0x451daf
        __asm _emit 0xeb
        __asm _emit 0x73
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x451d62
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4D: jmp 0x451daf
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 48: jmp 0x451daf
        __asm _emit 0xeb
        __asm _emit 0x48
        lea ecx, [ebp - 4]
        push ecx
        push 640d60h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 05: jl 0x451d8a
        __asm _emit 0x7c
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 25: jmp 0x451daf
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x451da7
        __asm _emit 0x74
        __asm _emit 0x14
        push 87fh
        push 67702ch
        ; Exact mapped bytes E8 9E 6F 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x451da7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x451d8a
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
