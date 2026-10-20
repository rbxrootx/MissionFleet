// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587816D0 .. +0x1F2 bytes.
extern "C" __declspec(naked) void FUN_587816d0_587816D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D9 52 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 14: jne 0x58781700
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC A9 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 33 DE D1 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xde
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1F: jmp 0x5878171f
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A8 A9 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 12: jne 0x5878171f
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 52 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 62 DD D1 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x587817e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 52 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x587817b5
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E A9 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x5878179d
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 52 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 A9 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 DD D1 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 A9 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 52 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 96 DD D1 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x587817b3
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 52 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CE DC D1 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x587817d7
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587817d7
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5A DD D1 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xdd
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x587818a0
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 51 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x58781869
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58781851
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 51 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 54 DC D1 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 51 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E2 DC D1 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x58781867
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 51 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1A DC D1 FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x5878188b
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5878188b
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 A8 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A6 DC D1 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
