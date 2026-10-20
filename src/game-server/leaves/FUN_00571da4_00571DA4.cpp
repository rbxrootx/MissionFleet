// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571DA4 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00571da4_00571DA4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 31ah
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9F 93 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 88 E0 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571de6
        __asm _emit 0x75
        __asm _emit 0x14
        push 31bh
        push 5d0930h
        ; Exact mapped bytes E8 1F 2C FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571de6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x571dc1
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5D E0 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571e11
        __asm _emit 0x75
        __asm _emit 0x14
        push 31ch
        push 5d0930h
        ; Exact mapped bytes E8 F4 2B FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571e11
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x571dec
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 0ch], -1
        ; Exact mapped bytes 74 04: je 0x571e24
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 27: jmp 0x571e4b
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 3
        ; Exact mapped bytes 75 18: jne 0x571e49
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x571e4b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
