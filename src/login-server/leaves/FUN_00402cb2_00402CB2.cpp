// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402CB2 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_00402cb2_00402CB2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 134h
        mov dword ptr [ebp - 134h], ecx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 58 9F 02 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E0 00 00: mov word ptr [ebp - 0x20], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E2 00 00: mov word ptr [ebp - 0x1e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E4 00 00: mov word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DC 16 00 00: call 0x4043c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F1 16 00 00: call 0x4043e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 06 17 00 00: call 0x404400
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 8]
        push ecx
        push 0
        lea edx, [ebp - 20h]
        push edx
        push 5dh
        push 1
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 E1 EB 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 4485e0h
        lea eax, [ebp - 128h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea ecx, [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 A3 EB 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 87 EB 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cmp eax, 64h
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x402e0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 1eh]
        and edx, 0ffffh
        push edx
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        push eax
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 9B 9D 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E1 A7 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 66 16 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x402e0e
        __asm _emit 0x74
        __asm _emit 0x50
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        add ecx, 198h
        ; Exact mapped bytes E8 CA 15 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        add ecx, 198h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 29 A3 00 00: call 0x40d11e
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 E5 EA 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x402e22
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 CC EA 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
