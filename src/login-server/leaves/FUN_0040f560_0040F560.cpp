// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F560 .. +0x1FD bytes.
extern "C" __declspec(naked) void FUN_0040f560_0040F560() {
    __asm {
        sub esp, 1ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, 1
        push 0
        mov ecx, dword ptr [esi + 0bb8h]
        mov ebx, dword ptr [esi + 0bf0h]
        add ecx, edi
        push 0
        mov dword ptr [esi + 0bb8h], ecx
        mov eax, dword ptr [esi + 0bbch]
        adc eax, 0
        add ebx, edi
        mov dword ptr [esi + 0bf0h], ebx
        mov edx, dword ptr [esi + 0bf4h]
        mov dword ptr [esi + 0bbch], eax
        lea eax, [esp + 14h]
        adc edx, 0
        lea ecx, [esp + 20h]
        mov dword ptr [esi + 0bf4h], edx
        mov edx, dword ptr [esi + 58h]
        push eax
        push ecx
        push edx
        mov dword ptr [esp + 20h], 10h
        ; Exact mapped bytes FF 15 E8 C5 43 00: call dword ptr [0x43c5e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        cmp ebx, -1
        ; Exact mapped bytes 0F 84 84 01 00 00: je 0x40f756
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bb4h]
        mov ecx, dword ptr [esi + 64h]
        cmp eax, ecx
        ; Exact mapped bytes 76 06: jbe 0x40f5e5
        __asm _emit 0x76
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x40f748
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        push 23h
        push 464h
        push ecx
        push ebx
        ; Exact mapped bytes FF 15 B4 C5 43 00: call dword ptr [0x43c5b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 06: jne 0x40f602
        __asm _emit 0x75
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x40f748
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D E4 C5 43 00: mov edi, dword ptr [0x43c5e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        lea edx, [esp + 10h]
        push 4
        push edx
        push 1001h
        push 0ffffh
        push ebx
        mov dword ptr [esp + 24h], 10000h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, -1
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x40f746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 14h]
        push 4
        push eax
        push 1002h
        push 0ffffh
        push ebx
        mov dword ptr [esp + 28h], 8000h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, -1
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x40f746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push -1
        mov ecx, esi
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x40f746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 DC 44 00: mov eax, dword ptr [0x44dc08]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        inc eax
        push ebx
        ; Exact mapped bytes A3 08 DC 44 00: mov dword ptr [0x44dc08], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        lea ecx, [esi + 0c30h]
        mov dword ptr [edi + 4], ebx
        ; Exact mapped bytes E8 5D 06 00 00: call 0x40fce0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x40f716
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c28h]
        push edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp eax, 1
        ; Exact mapped bytes 75 77: jne 0x40f716
        __asm _emit 0x75
        __asm _emit 0x77
        mov ebx, dword ptr [esi + 0bb4h]
        push 0
        push 0
        push 0
        push 8002h
        inc ebx
        push 0
        push 80010109h
        mov ecx, edi
        mov dword ptr [esi + 0bb4h], ebx
        ; Exact mapped bytes E8 3B 09 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40h]
        push edi
        push 0
        push 468h
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, edi
        mov dword ptr [edi + 0ach], 1
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, dword ptr [edi + 0e0h]
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x40f756
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes FF 15 80 C5 43 00: call dword ptr [0x43c580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        imul eax, dword ptr [esi + 0bb4h]
        mov ecx, edi
        mov dword ptr [edi + 0d4h], eax
        ; Exact mapped bytes E8 01 19 00 00: call 0x411010
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 1ch
        ret
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, edi
        ; Exact mapped bytes E8 D1 08 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push ebx
        ; Exact mapped bytes FF 15 E0 C5 43 00: call dword ptr [0x43c5e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 B1 07 00 00: call 0x40fef0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 1ch
        ret
        push 1
        push ebx
        ; Exact mapped bytes FF 15 E0 C5 43 00: call dword ptr [0x43c5e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 15 B0 C5 43 00: call dword ptr [0x43c5b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 1ch
        ret
    }
}
