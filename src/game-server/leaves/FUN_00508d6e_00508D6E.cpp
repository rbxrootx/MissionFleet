// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508D6E .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00508d6e_00508D6E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 9C FE FF: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        ; Exact mapped bytes E8 01 82 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x508da3
        __asm _emit 0x74
        __asm _emit 0x14
        push 226h
        push 5cb374h
        ; Exact mapped bytes E8 62 BC 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508da3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x508d80
        __asm _emit 0x75
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
