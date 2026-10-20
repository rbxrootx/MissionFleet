// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588983C0 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_588983c0() {
    __asm {
        sub esp, 24ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 248h], eax
        push ebx
        push ebp
        push esi
        push edi
        lea eax, [esp + 18h]
        push eax
        push 589a0128h
        mov dword ptr [esp + 1ch], ecx
        xor edi, edi
        xor ebx, ebx
        ; Exact mapped bytes FF 15 18 C1 98 58: call dword ptr [0x5898c118]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 A4 C1 98 58: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D 7C C1 98 58: mov ebp, dword ptr [0x5898c17c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 10h], eax
        test byte ptr [esp + 18h], 10h
        ; Exact mapped bytes 75 3F: jne 0x58898446
        __asm _emit 0x75
        __asm _emit 0x3f
        push 589a011ch
        lea ecx, [esp + 48h]
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5889841c
        __asm _emit 0x75
        __asm _emit 0x05
        lea edi, [eax + 1]
        ; Exact mapped bytes EB 13: jmp 0x5889842f
        __asm _emit 0xeb
        __asm _emit 0x13
        push 589a0110h
        lea edx, [esp + 48h]
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x5889842f
        __asm _emit 0x75
        __asm _emit 0x03
        lea ebx, [eax + 1]
        push 589a0104h
        lea eax, [esp + 48h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58898446
        __asm _emit 0x75
        __asm _emit 0x07
        push 589a0104h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esp + 10h]
        lea ecx, [esp + 18h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 1C C1 98 58: call dword ptr [0x5898c11c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 A6: jne 0x58898400
        __asm _emit 0x75
        __asm _emit 0xa6
        test edi, edi
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x5889854e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x5889854e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 48 A2 58: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push eax
        lea eax, [esp + 18h]
        push eax
        push 589a00f8h
        ; Exact mapped bytes E8 EF 32 EC FF: call 0x5875b770
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x32
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x5889854e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp byte ptr [eax], 3ah
        ; Exact mapped bytes 74 07: je 0x58898497
        __asm _emit 0x74
        __asm _emit 0x07
        inc ecx
        cmp byte ptr [ecx + eax], 3ah
        ; Exact mapped bytes 75 F9: jne 0x58898490
        __asm _emit 0x75
        __asm _emit 0xf9
        lea ecx, [ecx + eax + 2]
        push ecx
        ; Exact mapped bytes E8 39 4A 0E 00: call 0x5897ceda
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 3B 05 DC 30 9C 58: cmp eax, dword ptr [0x589c30dc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x30
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 86 9E 00 00 00: jbe 0x5889854e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 589a0104h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 35 C4 C3 98 58: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 589a00e4h
        lea edx, [esp + 15ch]
        push 5898d824h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [esp + 164h]
        push 589a0104h
        push eax
        ; Exact mapped bytes E8 91 4C 0E 00: call 0x5897d174
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0x00
        push 589a011ch
        lea ecx, [esp + 170h]
        push 5898d824h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 3D 2C C1 98 58: mov edi, dword ptr [0x5898c12c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 20h
        push 0
        push 589a00e4h
        lea edx, [esp + 160h]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 589a00d8h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 589a0110h
        lea eax, [esp + 15ch]
        push 5898d824h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 0ch
        push 0
        push 589a00d8h
        lea ecx, [esp + 160h]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx + 150h], 1
        mov ecx, dword ptr [esp + 258h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 7A 46 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 24ch
        ret
    }
}
