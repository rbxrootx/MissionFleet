// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EA90 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5851ea90_5851EA90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 80 5B 29 00: call 0x587b4630
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5b
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BB 95 F6 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5851ead7
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 0A FF FF FF: call 0x5851e9e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A7 96 F6 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D8 8E F6 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x5851eb2a
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 37 8F F6 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3E 00 00 00: call 0x5851eb50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 11: je 0x5851eb28
        __asm _emit 0x74
        __asm _emit 0x11
        mov byte ptr [ebp - 1dh], 1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0D B2 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov al, byte ptr [ebp - 1dh]
        ; Exact mapped bytes EB 11: jmp 0x5851eb39
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes EB 9E: jmp 0x5851eac8
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov byte ptr [ebp - 1eh], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 FA B1 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov al, byte ptr [ebp - 1eh]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 0D 25 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x25
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
