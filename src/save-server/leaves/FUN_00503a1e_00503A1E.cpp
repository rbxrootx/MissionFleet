// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503A1E .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00503a1e_00503A1E() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 14: jne 0x503a3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 676a3ch
        ; Exact mapped bytes E8 07 53 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503a3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x503a24
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x503a50
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 7E 05: jle 0x503a55
        __asm _emit 0x7e
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 08: jmp 0x503a5d
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
