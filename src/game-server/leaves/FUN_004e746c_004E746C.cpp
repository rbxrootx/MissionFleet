// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E746C .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004e746c_004E746C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0b6h
        push 5c8f3ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D5 3C 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e74a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 5c8f3ch
        ; Exact mapped bytes E8 60 D5 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e74a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e748b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585c90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 3B 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e74d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b8h
        push 5c8f3ch
        ; Exact mapped bytes E8 35 D5 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e74d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e74ab
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0b9h
        push 5c8f3ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 77 3C 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D B7 04 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4e7513
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA B7 04 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 FE FF FF: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4e74f4
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
