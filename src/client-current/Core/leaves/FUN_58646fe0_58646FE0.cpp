// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58646FE0 .. +0x230 bytes.
extern "C" __declspec(naked) void FUN_58646fe0_58646FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        mov dword ptr [ebp - 4], ecx
        push 18h
        ; Exact mapped bytes E8 51 A0 1E 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 55 10 E4 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5864703d
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 58h]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 D4 FB FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3B 11 E4 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x11
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 72 09 E4 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x586470b5
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 D3 09 E4 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 2dh
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x586470b0
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 03 3D 00 00: call 0x5864adb0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x586470b5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5864702e
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 24ch
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B3 0F E4 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0f
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x586470df
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 64h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A2 09 E4 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 24ch
        mov dword ptr [ebp - 34h], edx
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 99 10 E4 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D0 08 E4 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x58647133
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 31 09 E4 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58647131
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x58647209
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 9D: jmp 0x586470d0
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [ebp - 4]
        add eax, 24ch
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D6 10 E4 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x58647209
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 44h], eax
        push 83add7h
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9B 93 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x93
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 48h], eax
        push 0ffffffh
        push -1
        push 588af2d3h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7B 93 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x93
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 4ch], edx
        push 0ffffffh
        push -1
        push 588af2f7h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5B 93 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x93
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20ch]
        mov dword ptr [ebp - 54h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24ch
        ; Exact mapped bytes E8 59 10 E4 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        ; Exact mapped bytes E8 49 3D 00 00: call 0x5864af40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, eax
        mov dword ptr [ebp - 50h], esi
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 88 3F 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
