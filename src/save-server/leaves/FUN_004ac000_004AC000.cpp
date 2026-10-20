// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC000 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_004ac000_004AC000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 56 E3 02 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4ac022
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4ac0b8
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 AE F9 FF FF: call 0x4ab9d7
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4ac046
        __asm _emit 0x75
        __asm _emit 0x14
        push 4e7h
        push 672a58h
        ; Exact mapped bytes E8 FF CC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ac046
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ac02c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 DC F9 FF: call 0x449d10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2C: jne 0x4ac090
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD DC F9 FF: call 0x449d30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ac090
        __asm _emit 0x75
        __asm _emit 0x14
        push 4eah
        push 672a58h
        ; Exact mapped bytes E8 B5 CC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ac090
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B6: jne 0x4ac04c
        __asm _emit 0x75
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 14: je 0x4ac0b2
        __asm _emit 0x74
        __asm _emit 0x14
        push 4ebh
        push 672a58h
        ; Exact mapped bytes E8 93 CC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ac0b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4ac096
        __asm _emit 0x75
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
