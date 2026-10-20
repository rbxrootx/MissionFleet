// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E80CC .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004e80cc_004E80CC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0a8h
        push 5cfeb0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 75 30 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e8105
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aah
        push 5cfeb0h
        ; Exact mapped bytes E8 00 C9 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8105
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e80eb
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5cfec0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 2F 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e8130
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abh
        push 5cfeb0h
        ; Exact mapped bytes E8 D5 C8 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8130
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e810b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ach
        push 5cfeb0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 17 30 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 AE 04 00: call 0x533028
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4e8173
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 AF 04 00: call 0x5330e9
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 FE FF FF: call 0x4e7ff7
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4e8154
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
