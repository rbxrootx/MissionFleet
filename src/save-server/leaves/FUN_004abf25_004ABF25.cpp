// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABF25 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_004abf25_004ABF25() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4abf4e
        __asm _emit 0x75
        __asm _emit 0x14
        push 4cdh
        push 672a58h
        ; Exact mapped bytes E8 F7 CD 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abf4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4abf31
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4abf6e
        __asm _emit 0x75
        __asm _emit 0x14
        push 4ceh
        push 672a58h
        ; Exact mapped bytes E8 D7 CD 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abf6e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4abf54
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 97 07 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4abf94
        __asm _emit 0x75
        __asm _emit 0x14
        push 4cfh
        push 672a58h
        ; Exact mapped bytes E8 B1 CD 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abf94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4abf74
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2A 9C 00 00: call 0x4b5bd0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 D4 80 FD FF: call 0x48408a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
