// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A587C .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_004a587c_004A587C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 2bh
        push 67d5f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C8 49 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4a58b9
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 67d5f0h
        ; Exact mapped bytes E8 8C 34 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a58b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4a5898
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        and edx, 40000h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4a58e0
        __asm _emit 0x75
        __asm _emit 0x11
        push 2dh
        push 67d5f0h
        ; Exact mapped bytes E8 65 34 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a58e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4a58bf
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 75 11: jne 0x4a5903
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 67d5f0h
        ; Exact mapped bytes E8 42 34 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5903
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4a58e6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 11: jne 0x4a5926
        __asm _emit 0x75
        __asm _emit 0x11
        push 2fh
        push 67d5f0h
        ; Exact mapped bytes E8 1F 34 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5926
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4a5909
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 53 8C 02 00: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 84 E6 FD FF: call 0x483fca
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB 8C 02 00: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4a595f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4a5966
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
