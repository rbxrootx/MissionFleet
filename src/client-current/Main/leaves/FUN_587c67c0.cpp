// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C67C0 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_587c67c0() {
    __asm {
        push -1
        push 589814e8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 88h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 8ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 9ch]
        and eax, 17h
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        and ecx, eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x587c68d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esp + 0a0h], 0
        ; Exact mapped bytes 74 09: je 0x587c6814
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        push 0
        ; Exact mapped bytes E8 64 64 1B 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x00
        test cl, 4
        ; Exact mapped bytes 74 3E: je 0x587c6857
        __asm _emit 0x74
        __asm _emit 0x3e
        push 5899aec0h
        lea ecx, [esp + 30h]
        ; Exact mapped bytes E8 09 EC F6 FF: call 0x58735430
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        lea eax, [esp + 2ch]
        push eax
        lea ecx, [esp + 8]
        mov dword ptr [esp + 98h], 0
        ; Exact mapped bytes E8 B0 F9 FF FF: call 0x587c61f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 589af13ch
        lea ecx, [esp + 8]
        push ecx
        mov dword ptr [esp + 0ch], 5899ae7ch
        ; Exact mapped bytes E8 21 64 1B 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x00
        test cl, 2
        ; Exact mapped bytes 74 3E: je 0x587c689a
        __asm _emit 0x74
        __asm _emit 0x3e
        push 5899aea8h
        lea ecx, [esp + 30h]
        ; Exact mapped bytes E8 C6 EB F6 FF: call 0x58735430
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0xff
        lea edx, [esp + 2ch]
        push edx
        lea ecx, [esp + 8]
        mov dword ptr [esp + 98h], 1
        ; Exact mapped bytes E8 6D F9 FF FF: call 0x587c61f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 589af13ch
        lea eax, [esp + 8]
        push eax
        mov dword ptr [esp + 0ch], 5899ae7ch
        ; Exact mapped bytes E8 DE 63 1B 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x63
        __asm _emit 0x1b
        __asm _emit 0x00
        push 5899ae90h
        lea ecx, [esp + 74h]
        ; Exact mapped bytes E8 88 EB F6 FF: call 0x58735430
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xeb
        __asm _emit 0xf6
        __asm _emit 0xff
        lea ecx, [esp + 70h]
        push ecx
        lea ecx, [esp + 4ch]
        mov dword ptr [esp + 98h], 2
        ; Exact mapped bytes E8 2F F9 FF FF: call 0x587c61f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 589af13ch
        lea edx, [esp + 4ch]
        push edx
        mov dword ptr [esp + 50h], 5899ae7ch
        ; Exact mapped bytes E8 A0 63 1B 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x63
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        add esp, 94h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
