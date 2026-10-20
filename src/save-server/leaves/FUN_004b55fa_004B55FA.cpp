// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B55FA .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_004b55fa_004B55FA() {
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
        ; Exact mapped bytes 74 14: je 0x4b5621
        __asm _emit 0x74
        __asm _emit 0x14
        push 110h
        push 636788h
        ; Exact mapped bytes E8 24 37 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b5621
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4b5604
        __asm _emit 0x75
        __asm _emit 0xdd
        or eax, 0ffffffffh
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
