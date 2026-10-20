// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878E600 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5878e600_5878E600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878e61b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 73 16: jae 0x5878e637
        __asm _emit 0x73
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes 74 04: je 0x5878e635
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x5878e63c
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB DB: jmp 0x5878e612
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
