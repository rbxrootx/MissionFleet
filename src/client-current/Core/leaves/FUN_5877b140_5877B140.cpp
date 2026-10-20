// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877B140 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_5877b140_5877B140() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 5D: jne 0x5877b1b6
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 5ch], edx
        push 505050h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 66 AF D0 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xaf
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 64h], edx
        push 588b58ach
        ; Exact mapped bytes E8 58 6E DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 505050h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 4D 64 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 66: jmp 0x5877b21c
        __asm _emit 0xeb
        __asm _emit 0x66
        push 50h
        push 0
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 4D 1C 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [eax + 40ch], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 588b58c4h
        ; Exact mapped bytes E8 0F 6E DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 68h], edx
        push 0ffffffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E5 63 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 6ch], edx
        push 0ffffffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 588b579ah
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B9 63 04 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 FE 5D 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
