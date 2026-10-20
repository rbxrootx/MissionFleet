// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057504A .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_0057504a_0057504A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 5beh
        push 67cd14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F7 51 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c0h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0dch]
        ; Exact mapped bytes 74 28: je 0x5750a5
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c0h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 74 14: je 0x5750a5
        __asm _emit 0x74
        __asm _emit 0x14
        push 5c0h
        push 67cd14h
        ; Exact mapped bytes E8 A0 3C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5750a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BE: jne 0x575069
        __asm _emit 0x75
        __asm _emit 0xbe
        push 5c1h
        push 67cd14h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A2 51 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 8E 19 FB FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x575176
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 94 19 FB FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        push 5cah
        push 67cd14h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 63 51 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x51
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2F: je 0x575132
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x575130
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        and al, 0fbh
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A EB F9 FF: call 0x513c6a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 3F: jmp 0x575171
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x575171
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E 07 FA FF: call 0x51587a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x575171
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        or ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 60h], ecx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 EA F9 FF: call 0x513c6a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x5750cc
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
