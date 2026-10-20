// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58490620 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58490620_58490620() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 12: je 0x5849064b
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 58894d30h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 0C 00 00: call 0x58491270
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x5849065b
        __asm _emit 0xeb
        __asm _emit 0x10
        push 1
        push 58894d3ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 0C 00 00: call 0x58491270
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
