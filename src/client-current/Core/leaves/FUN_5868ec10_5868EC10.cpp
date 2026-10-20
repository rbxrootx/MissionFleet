// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868EC10 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_5868ec10_5868EC10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 0a8h], 1
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5868ecff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 7D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 D8 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd8
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5868ec73
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 7D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 D8 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd8
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 3
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5868ecff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        movzx ecx, word ptr [eax + 0c8h]
        test ecx, ecx
        ; Exact mapped bytes 74 6F: je 0x5868ecf3
        __asm _emit 0x74
        __asm _emit 0x6f
        push 0ffh
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 79 E1 1B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 108h]
        movzx ecx, word ptr [eax + 0c8h]
        mov dword ptr [ebp - 10ch], ecx
        push 588b01cch
        ; Exact mapped bytes E8 39 33 E9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x33
        __asm _emit 0xe9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 40 32 00 00: call 0x58691f30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5868ecff
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 A2 32 00 00: call 0x58691fa0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 47 23 1A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x23
        __asm _emit 0x1a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
