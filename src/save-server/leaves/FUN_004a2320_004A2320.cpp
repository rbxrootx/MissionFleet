// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2320 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_004a2320_004A2320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7C 06: jl 0x4a234a
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 1fh
        ; Exact mapped bytes 7E 11: jle 0x4a235b
        __asm _emit 0x7e
        __asm _emit 0x11
        push 20h
        push 6739c0h
        ; Exact mapped bytes E8 EA 69 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a235b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4a233e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 06: jl 0x4a2373
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 7E 11: jle 0x4a2384
        __asm _emit 0x7e
        __asm _emit 0x11
        push 22h
        push 6739c0h
        ; Exact mapped bytes E8 C1 69 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2384
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4a2367
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 8], 76ch
        ; Exact mapped bytes 7D 11: jge 0x4a23ad
        __asm _emit 0x7d
        __asm _emit 0x11
        push 24h
        push 6739c0h
        ; Exact mapped bytes E8 98 69 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a23ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a2393
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        sub edx, 76ch
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 92 83 FC FF: call 0x46a760
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 11: jne 0x4a23ef
        __asm _emit 0x75
        __asm _emit 0x11
        push 28h
        push 6739c0h
        ; Exact mapped bytes E8 56 69 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a23ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x4a23d6
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 28h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
