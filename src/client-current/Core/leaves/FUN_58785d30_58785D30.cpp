// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785D30 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58785d30_58785D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 5C 06 96 58: mov ecx, dword ptr [0x5896065c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 08: je 0x58785d59
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 12: je 0x58785d69
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes EB 20: jmp 0x58785d79
        __asm _emit 0xeb
        __asm _emit 0x20
        push 588b62c4h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x58785d82
        __asm _emit 0xeb
        __asm _emit 0x19
        push 588b62d8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58785d82
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 03 00 00: call 0x58786180
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
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
