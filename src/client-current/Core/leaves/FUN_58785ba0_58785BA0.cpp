// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785BA0 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_58785ba0_58785BA0() {
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
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 87 B0 00 00 00: ja 0x58785c75
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 84 5C 78 58: jmp dword ptr [eax*4 + 0x58785c84]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x78
        __asm _emit 0x58
        push 588b6358h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 05 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x58785c7e
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b6368h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 05 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x58785c7e
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b63b0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 05 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 79: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x79
        push 588b63f8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 05 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 69: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x69
        push 588b6450h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 59: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x59
        push 588b6498h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 49: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x49
        push 588b64ach
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x39
        push 588b64d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x29
        push 588b64f0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x19
        push 588b6538h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 04 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58785c7e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 05 00 00: call 0x58786180
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x05
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
