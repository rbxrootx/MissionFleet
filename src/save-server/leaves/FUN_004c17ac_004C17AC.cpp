// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C17AC .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004c17ac_004C17AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0a8h
        push 6769ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 95 8A 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4c17e5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aah
        push 6769ach
        ; Exact mapped bytes E8 60 75 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c17e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c17cb
        __asm _emit 0x75
        __asm _emit 0xe0
        push 638e60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 89 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c1810
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abh
        push 6769ach
        ; Exact mapped bytes E8 35 75 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1810
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4c17eb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ach
        push 6769ach
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 37 8A 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 52 06 00: call 0x526a68
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4c1853
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 52 06 00: call 0x526b29
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 FE FF FF: call 0x4c16d7
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4c1834
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
