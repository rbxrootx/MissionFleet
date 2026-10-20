// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878CF20 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5878cf20_5878CF20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 6
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x5878cf4c
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 6
        idiv ecx
        cmp edx, 4
        ; Exact mapped bytes 7F 06: jg 0x5878cf4c
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 12h
        ; Exact mapped bytes 7C 04: jl 0x5878cf50
        __asm _emit 0x7c
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x5878cf52
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
