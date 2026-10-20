// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771AC0 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_58771ac0_58771AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D F4 35 90 58 00: cmp dword ptr [0x589035f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58771ade
        __asm _emit 0x75
        __asm _emit 0x0c
        xor eax, eax
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x58771bf1
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x58771bef
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 01 00 00: call 0x58771c00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58771afd
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, 1
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x58771bf1
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x58771bef
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8]
        mov ecx, 4
        shl ecx, 0
        cmp dword ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x58771bef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 2F D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 2
        ; Exact mapped bytes F2 0F 2A 05 90 20 96 58: cvtsi2sd xmm0, dword ptr [0x58962090]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 AE F4 0D 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D DC: fstp qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 10 45 DC: movsd xmm0, qword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 58 05 C0 50 89 58: addsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 9E FD D1 FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 F6 F6 0B 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 17 A2 04 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B0 2E D1 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov eax, 1
    }
}
