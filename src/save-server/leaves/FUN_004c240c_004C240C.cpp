// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C240C .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004c240c_004C240C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0a8h
        push 67c688h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 35 7E 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4c2445
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aah
        push 67c688h
        ; Exact mapped bytes E8 00 69 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2445
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c242b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 67c698h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 7D 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c2470
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abh
        push 67c688h
        ; Exact mapped bytes E8 D5 68 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c2470
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4c244b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ach
        push 67c688h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D7 7D 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 49 06 00: call 0x526df1
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4c24b3
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 4A 06 00: call 0x526eb2
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 FE FF FF: call 0x4c2337
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4c2494
        __asm _emit 0xeb
        __asm _emit 0xe1
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
