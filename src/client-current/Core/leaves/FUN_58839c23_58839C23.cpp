// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839C23 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_58839c23_58839C23() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 10 26 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp byte ptr [esi], bl
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58839d30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 05 E8 83 96 58 01: test byte ptr [0x589683e8], 1
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        lea ebx, [esi + 28h]
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 24: jne 0x58839c6d
        __asm _emit 0x75
        __asm _emit 0x24
        push edi
        ; Exact mapped bytes FF 35 C8 7D 96 58: push dword ptr [0x58967dc8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 B8 7D 96 58: push dword ptr [0x58967db8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push 588f0ed4h
        ; Exact mapped bytes E8 F3 26 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 22 04 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 21: jmp 0x58839c8e
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes FF 35 C8 7D 96 58: push dword ptr [0x58967dc8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 B8 7D 96 58: push dword ptr [0x58967db8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        push 588f0ee8h
        ; Exact mapped bytes E8 D0 26 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 FF 03 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push edi
        ; Exact mapped bytes E8 EC 74 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, 400h
        cmp eax, ecx
        ; Exact mapped bytes 72 21: jb 0x58839cbf
        __asm _emit 0x72
        __asm _emit 0x21
        push edi
        ; Exact mapped bytes E8 DC 74 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        push 588f0ef8h
        ; Exact mapped bytes E8 A3 26 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 D2 03 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor al, al
        ; Exact mapped bytes EB 78: jmp 0x58839d37
        __asm _emit 0xeb
        __asm _emit 0x78
        push ecx
        lea ebx, [esi + 1498h]
        push edi
        push ebx
        ; Exact mapped bytes E8 CD C9 02 00: call 0x5886669a
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 74 22: je 0x58839cf7
        __asm _emit 0x74
        __asm _emit 0x22
        push 400h
        lea eax, [esi + 1898h]
        push eax
        push ebx
        ; Exact mapped bytes E8 99 74 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        push ebx
        xor ebx, ebx
        push ebx
        push ebx
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x58839cf9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        ; Exact mapped bytes 83 3D B8 7D 96 58 00: cmp dword ptr [0x58967db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x58839d12
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 83 3D C8 7D 96 58 00: cmp dword ptr [0x58967dc8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58839d12
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 E5 B8 FF FF: call 0x588355f7
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 613h
        push 8b1h
        lea ecx, [esi + 22c4h]
        mov dword ptr [esi + 22c0h], ebx
        ; Exact mapped bytes E8 EE 3A 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, al
        ; Exact mapped bytes E8 25 25 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, bl
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
