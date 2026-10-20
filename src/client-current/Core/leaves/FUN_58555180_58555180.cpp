// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58555180 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_58555180_58555180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 6D F3 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585551a4
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 6F F3 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5F: je 0x58555209
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E C4 F7 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 4E: jne 0x58555207
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ech]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 40: je 0x58555207
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 16ch], 0
        ; Exact mapped bytes 74 34: je 0x58555207
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CC E9 F8 FF: call 0x584e3bc0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 07: je 0x58555207
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5855520b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 90: jmp 0x58555199
        __asm _emit 0xeb
        __asm _emit 0x90
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
