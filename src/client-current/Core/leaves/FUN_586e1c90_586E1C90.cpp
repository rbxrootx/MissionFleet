// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E1C90 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_586e1c90_586E1C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x586e1d2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp + 10h]
        cmp ecx, 0ah
        ; Exact mapped bytes 7D 4D: jge 0x586e1cfb
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4cch]
        mov dword ptr [ebp - 10h], eax
        movzx ecx, byte ptr [ebp + 0ch]
        cmp ecx, 0ah
        ; Exact mapped bytes 7E 09: jle 0x586e1ccc
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x586e1cd3
        __asm _emit 0xeb
        __asm _emit 0x07
        movzx edx, byte ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        movzx eax, byte ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 C3 05 E4 FF: call 0x585222a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 28 E8 0D 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x586e1d2b
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 18h], ecx
        push 588b2220h
        ; Exact mapped bytes E8 DF 02 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        push 0eeeeeeh
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F6 E7 0D 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x586e1d5d
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 20h], ecx
        push 588b2240h
        ; Exact mapped bytes E8 AD 02 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 0eeeeeeh
        push -1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C4 E7 0D 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        ; Exact mapped bytes E8 45 FA 0D 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 24h], edx
        push 0eeeeeeh
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 95 E7 0D 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 17 FA 0D 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfa
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 70 DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x70
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9B D9 01 00: call 0x586ff750
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 18 79 E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x79
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A9 93 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 CB FF FF: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
