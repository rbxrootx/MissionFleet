// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868EB20 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_5868eb20_5868EB20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 1
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x5868ebfe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
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
        ; Exact mapped bytes E8 7E 7E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 D9 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd9
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 75 7B: jne 0x5868ebcc
        __asm _emit 0x75
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 EF EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b4h], 12ch
        ; Exact mapped bytes 7D 19: jge 0x5868eb99
        __asm _emit 0x7d
        __asm _emit 0x19
        push 588b01f8h
        ; Exact mapped bytes E8 66 34 E9 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x34
        __asm _emit 0xe9
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 33 00 00: call 0x58691f30
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 31: jmp 0x5868ebca
        __asm _emit 0xeb
        __asm _emit 0x31
        push 0
        push 85h
        push 24h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 2F 0E 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [eax + 0c0h], edx
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 0A 00 00: call 0x5868f6a0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x5868ebfe
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 7D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 D8 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd8
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 18: jne 0x5868ebfe
        __asm _emit 0x75
        __asm _emit 0x18
        push 24h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 32 0E 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x32
        __asm _emit 0x0e
        __asm _emit 0x00
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 0A 00 00: call 0x5868f6a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
