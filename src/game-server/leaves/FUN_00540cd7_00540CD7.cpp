// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00540CD7 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00540cd7_00540CD7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x540d06
        __asm _emit 0x75
        __asm _emit 0x14
        push 357h
        push 582398h
        ; Exact mapped bytes E8 FF 3C FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x540d06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x540ce1
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 0cbh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x540d3a
        __asm _emit 0x75
        __asm _emit 0x14
        push 357h
        push 582398h
        ; Exact mapped bytes E8 CB 3C FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x540d3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x540d0c
        __asm _emit 0x75
        __asm _emit 0xcc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
