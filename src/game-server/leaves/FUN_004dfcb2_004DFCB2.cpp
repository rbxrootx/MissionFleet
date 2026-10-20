// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DFCB2 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_004dfcb2_004DFCB2() {
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
        ; Exact mapped bytes 74 14: je 0x4dfcd9
        __asm _emit 0x74
        __asm _emit 0x14
        push 113h
        push 5841b8h
        ; Exact mapped bytes E8 2C 4D 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dfcd9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dfcbc
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
