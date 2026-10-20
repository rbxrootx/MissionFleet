// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58708960 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_58708960_58708960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 45: jne 0x587089b4
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes 75 38: jne 0x587089b2
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 CB 8C DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x587089b2
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 BC 8C DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E6 87 14 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7E 09: jle 0x587089b2
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 02 00 00: call 0x58708c30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 54: jmp 0x58708a08
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 38: jne 0x587089f2
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 70h]
        ; Exact mapped bytes 75 2B: jne 0x587089f0
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b3e3ch
        ; Exact mapped bytes E8 21 96 E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 C6 DC FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc6
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x58708a08
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x58708a08
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 B5 DC FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb5
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
