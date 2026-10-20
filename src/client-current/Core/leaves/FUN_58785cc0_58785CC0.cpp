// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785CC0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_58785cc0_58785CC0() {
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
        ; Exact mapped bytes 74 0E: je 0x58785cef
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 18: je 0x58785cff
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 74 22: je 0x58785d0f
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes EB 30: jmp 0x58785d1f
        __asm _emit 0xeb
        __asm _emit 0x30
        push 588b6300h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x58785d28
        __asm _emit 0xeb
        __asm _emit 0x29
        push 588b6318h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x58785d28
        __asm _emit 0xeb
        __asm _emit 0x19
        push 588b6340h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58785d28
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 04 00 00: call 0x58786180
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x04
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
