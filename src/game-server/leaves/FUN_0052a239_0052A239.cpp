// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A239 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0052a239_0052A239() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 14: je 0x52a262
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a0h
        push 5c8fcch
        ; Exact mapped bytes E8 A3 A7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a262
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52a245
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52a282
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a1h
        push 5c8fcch
        ; Exact mapped bytes E8 83 A7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a282
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52a268
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 B5 B2 00 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 50 25 5E 00: call dword ptr [0x5e2550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 48h], eax
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        cmp dword ptr [eax + 48h], 0
        setne cl
        mov eax, ecx
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
