// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DFD24 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004dfd24_004DFD24() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4dfd4b
        __asm _emit 0x74
        __asm _emit 0x14
        push 118h
        push 5841b8h
        ; Exact mapped bytes E8 BA 4C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dfd4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dfd2e
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
