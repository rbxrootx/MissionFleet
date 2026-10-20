// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E42C0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_584e42c0_584E42C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 0F 87 CB 00 00 00: ja 0x584e43a9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 B0 43 4E 58: jmp dword ptr [edx*4 + 0x584e43b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x43
        __asm _emit 0x4e
        __asm _emit 0x58
        push 588a1a38h
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 88 FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x584e43a9
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a1a3ch
        push 8
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 70 FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x584e43a9
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a1a40h
        push 8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 58 FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 7C: jmp 0x584e43a9
        __asm _emit 0xeb
        __asm _emit 0x7c
        push 588a1a44h
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 43 FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 67: jmp 0x584e43a9
        __asm _emit 0xeb
        __asm _emit 0x67
        push 588a1a48h
        push 8
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 2E FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 52: jmp 0x584e43a9
        __asm _emit 0xeb
        __asm _emit 0x52
        push 588a1a4ch
        push 8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 19 FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 3D: jmp 0x584e43a9
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 588a1a50h
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 04 FE 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 28: jmp 0x584e43a9
        __asm _emit 0xeb
        __asm _emit 0x28
        push 588a1a54h
        push 8
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 EF FD 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 13: jmp 0x584e43a9
        __asm _emit 0xeb
        __asm _emit 0x13
        push 588a1a58h
        push 8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 DA FD 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
