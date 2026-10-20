// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785D90 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_58785d90_58785D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 77 5A: ja 0x58785e0b
        __asm _emit 0x77
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 1C 5E 78 58: jmp dword ptr [eax*4 + 0x58785e1c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x5e
        __asm _emit 0x78
        __asm _emit 0x58
        push 588b6584h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 49: jmp 0x58785e14
        __asm _emit 0xeb
        __asm _emit 0x49
        push 588b6594h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x58785e14
        __asm _emit 0xeb
        __asm _emit 0x39
        push 588b65ach
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x58785e14
        __asm _emit 0xeb
        __asm _emit 0x29
        push 588b65d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x58785e14
        __asm _emit 0xeb
        __asm _emit 0x19
        push 588b6604h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 03 00 00: call 0x58786120
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58785e14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 03 00 00: call 0x58786180
        __asm _emit 0xe8
        __asm _emit 0x6d
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
