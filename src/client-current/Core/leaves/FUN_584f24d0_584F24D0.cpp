// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F24D0 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_584f24d0_584F24D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 58h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 92 5B F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2500
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 2ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 81 55 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        add eax, 58h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7B 5C F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B2 54 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x584f2619
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0F 55 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F8 09 00 00: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 39 5B F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2559
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 28 55 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DF 54 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C8 09 00 00: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 19 5C F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 50 54 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x584f2614
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 AD 54 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 06 9F F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D7 5A F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f25bb
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 3ch]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C6 54 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7D 54 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 D6 9E F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B7 5B F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 EE 53 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x584f260f
        __asm _emit 0x74
        __asm _emit 0x26
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 4F 54 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 E8 23 F9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, word ptr [eax + 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x584f260d
        __asm _emit 0x75
        __asm _emit 0x0c
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 37 54 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 0E: jmp 0x584f261b
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes EB 9D: jmp 0x584f25ac
        __asm _emit 0xeb
        __asm _emit 0x9d
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x584f254a
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D8 FE FF FF: jmp 0x584f24f1
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
