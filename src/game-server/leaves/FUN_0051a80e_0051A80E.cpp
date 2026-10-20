// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A80E .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_0051a80e_0051A80E() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 14: jne 0x51a82e
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 5ca2b4h
        ; Exact mapped bytes E8 D7 A1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a82e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51a814
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x51a840
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 7E 05: jle 0x51a845
        __asm _emit 0x7e
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 08: jmp 0x51a84d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        add eax, 40000h
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
