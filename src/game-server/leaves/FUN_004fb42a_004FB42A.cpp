// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB42A .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004fb42a_004FB42A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fb450
        __asm _emit 0x75
        __asm _emit 0x14
        push 0adh
        push 5c74e8h
        ; Exact mapped bytes E8 B5 95 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb450
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fb436
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 18h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 F3 49 FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fb47b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aeh
        push 5c74e8h
        ; Exact mapped bytes E8 8A 95 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb47b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fb456
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fb49b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0afh
        push 5c74e8h
        ; Exact mapped bytes E8 6A 95 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb49b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fb481
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A8 49 FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fb4c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b0h
        push 5c74e8h
        ; Exact mapped bytes E8 3F 95 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb4c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fb4a1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x4fb4f2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 07: jne 0x4fb4e7
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0D: jmp 0x4fb4f4
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E0: jmp 0x4fb4d2
        __asm _emit 0xeb
        __asm _emit 0xe0
        xor eax, eax
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
