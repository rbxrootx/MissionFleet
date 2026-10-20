// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100067A0 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_100067a0_100067A0() {
    __asm {
        push -1
        push 1016cf08h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10175254h
        mov ecx, dword ptr [esi + 510h]
        xor edi, edi
        mov dword ptr [esp + 14h], edi
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 514h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 518h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 510h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006801
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 510h], edi
        mov ecx, dword ptr [esi + 514h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006817
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 514h], edi
        mov ecx, dword ptr [esi + 518h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1000682d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 518h], edi
        mov ecx, dword ptr [esi + 4fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006843
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 4fch], edi
        mov ecx, dword ptr [esi + 500h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006859
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 500h], edi
        mov ecx, dword ptr [esi + 504h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1000686f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 504h], edi
        mov eax, dword ptr [esi + 9ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x10006888
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 05 5F 16 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5f
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 9ch], edi
        mov eax, dword ptr [esi + 0a4h]
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x100068a1
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 EC 5E 16 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5e
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0a4h], edi
        mov ecx, dword ptr [esi + 4f0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100068b7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 4f0h], edi
        mov ecx, dword ptr [esi + 4f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100068cd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 4f4h], edi
        mov ecx, dword ptr [esi + 4e4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100068e3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 4e4h], edi
        mov ecx, dword ptr [esi + 4e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100068f9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 4e8h], edi
        mov ecx, dword ptr [esi + 4ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1000690f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 4ech], edi
        mov ecx, dword ptr [esi + 4f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006925
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 4f8h], edi
        mov ecx, dword ptr [esi + 520h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1000693b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 520h], edi
        mov ecx, dword ptr [esi + 524h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006951
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 524h], edi
        mov ecx, dword ptr [esi + 528h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10006967
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 528h], edi
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 21710h], edi
        ; Exact mapped bytes 7E 4D: jle 0x100069c1
        __asm _emit 0x7e
        __asm _emit 0x4d
        mov edi, dword ptr [eax + 21a4ch]
        mov eax, dword ptr [edi + 6ch]
        mov ecx, dword ptr [edi + 70h]
        cmp eax, ecx
        ; Exact mapped bytes 74 3D: je 0x100069c1
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 74 09: je 0x10006991
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, 8
        cmp eax, ecx
        ; Exact mapped bytes 75 F5: jne 0x10006984
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 30: jmp 0x100069c1
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [edi + 70h]
        add eax, 8
        cmp eax, edx
        ; Exact mapped bytes 74 19: je 0x100069b4
        __asm _emit 0x74
        __asm _emit 0x19
        push ebx
        lea ecx, [eax - 8]
        mov ebx, dword ptr [eax]
        add eax, 8
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 4], ebx
        add ecx, 8
        cmp eax, edx
        ; Exact mapped bytes 75 EC: jne 0x1000699f
        __asm _emit 0x75
        __asm _emit 0xec
        pop ebx
        mov eax, dword ptr [edi + 70h]
        add eax, -8
        mov dword ptr [esp + 8], eax
        mov dword ptr [edi + 70h], eax
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 10 7D 04 00: call 0x1004e6e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
