// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00522095 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00522095_00522095() {
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
        ; Exact mapped bytes 74 14: je 0x5220bc
        __asm _emit 0x74
        __asm _emit 0x14
        push 0bch
        push 5c6838h
        ; Exact mapped bytes E8 49 29 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5220bc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52209f
        __asm _emit 0x75
        __asm _emit 0xdd
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
