// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519822 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00519822_00519822() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x51983a
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 7E 14: jle 0x51984e
        __asm _emit 0x7e
        __asm _emit 0x14
        push 569h
        push 5c8c2ch
        ; Exact mapped bytes E8 B7 B1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51984e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x51982e
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x519877
        __asm _emit 0x75
        __asm _emit 0x14
        push 56bh
        push 5c8c2ch
        ; Exact mapped bytes E8 8E B1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519877
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51985d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585778h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 18 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5198a2
        __asm _emit 0x75
        __asm _emit 0x14
        push 56ch
        push 5c8c2ch
        ; Exact mapped bytes E8 63 B1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5198a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51987d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x5198ca
        __asm _emit 0x72
        __asm _emit 0x14
        push 56dh
        push 5c8c2ch
        ; Exact mapped bytes E8 3B B1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5198ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5198a8
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 E2 FF FF: call 0x517af8
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffeeffffh
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 0E: jne 0x5198fb
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        or edx, 10000h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 11: jmp 0x51990c
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x51990c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        or eax, 100000h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x51992a
        __asm _emit 0x74
        __asm _emit 0x14
        push 575h
        push 5c8c2ch
        ; Exact mapped bytes E8 DB B0 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51992a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x51990c
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 8]
        or al, 2
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C E2 FF FF: call 0x517b71
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0xff
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
