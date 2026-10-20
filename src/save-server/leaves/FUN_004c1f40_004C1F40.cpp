// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1F40 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004c1f40_004C1F40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 84 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 48: jne 0x4c1fa3
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4c1f78
        __asm _emit 0x74
        __asm _emit 0x14
        push 183h
        push 6769ach
        ; Exact mapped bytes E8 CD 6D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1f78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c1f5b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x4c1f9b
        __asm _emit 0x74
        __asm _emit 0x14
        push 184h
        push 6769ach
        ; Exact mapped bytes E8 AA 6D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1f9b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4c1f7e
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes EB 5C: jmp 0x4c1fff
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 B3 14 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c1fcb
        __asm _emit 0x75
        __asm _emit 0x14
        push 189h
        push 6769ach
        ; Exact mapped bytes E8 7A 6D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1fcb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4c1fa3
        __asm _emit 0x75
        __asm _emit 0xd2
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 85 14 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c1ff9
        __asm _emit 0x75
        __asm _emit 0x14
        push 18ah
        push 6769ach
        ; Exact mapped bytes E8 4C 6D 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1ff9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4c1fd1
        __asm _emit 0x75
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
