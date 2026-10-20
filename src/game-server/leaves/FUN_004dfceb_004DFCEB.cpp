// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DFCEB .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_004dfceb_004DFCEB() {
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
        ; Exact mapped bytes 74 14: je 0x4dfd12
        __asm _emit 0x74
        __asm _emit 0x14
        push 115h
        push 5841b8h
        ; Exact mapped bytes E8 F3 4C 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dfd12
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dfcf5
        __asm _emit 0x75
        __asm _emit 0xdd
        or eax, 0ffffffffh
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
