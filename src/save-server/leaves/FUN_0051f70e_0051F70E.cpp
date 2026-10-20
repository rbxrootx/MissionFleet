// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F70E .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_0051f70e_0051F70E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 18h]
        and eax, 0f040h
        mov dword ptr [ebp + 18h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x51f731
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 1B 73 00 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x51f82d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 21 73 00 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x51f828
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 C9 00 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x51f828
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, dword ptr [ebp + 18h]
        and ecx, 0f000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x51f828
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 10: je 0x51f7b3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 18h]
        and ecx, dword ptr [eax + 64h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 75: je 0x51f828
        __asm _emit 0x74
        __asm _emit 0x75
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0C 2A 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 C3 00 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E1 2A 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x51f7dc
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E2 2A 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x51f7f1
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 C9 2B 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C0 2B 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C4 2D 01 00: call 0x5325cf
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x51f828
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 08: je 0x51f81d
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 64h]
        and eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes EB 07: jmp 0x51f82f
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x51f73f
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
