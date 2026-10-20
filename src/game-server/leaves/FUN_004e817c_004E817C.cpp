// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E817C .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004e817c_004E817C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0b6h
        push 5cfeb0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C5 2F 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e81b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 5cfeb0h
        ; Exact mapped bytes E8 50 C8 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e81b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e819b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5cfec0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 2E 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e81e0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b8h
        push 5cfeb0h
        ; Exact mapped bytes E8 25 C8 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e81e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e81bb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0b9h
        push 5cfeb0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 67 2F 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 AE 04 00: call 0x533017
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4e8223
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 AE 04 00: call 0x533039
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 FE FF FF: call 0x4e8062
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4e8204
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
