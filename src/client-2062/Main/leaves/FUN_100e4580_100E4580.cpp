// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E4580 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_100e4580_100E4580() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov ecx, 0dfh
        xor eax, eax
        lea edi, [esi + 0a0h]
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 90h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 9ch], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 0dfh
        lea edi, [esi + 41ch]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6eh
        ; Exact mapped bytes 7E 12: jle 0x100e45db
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e45db
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1b8h]
        ; Exact mapped bytes EB 02: jmp 0x100e45dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e460f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 6fh
        ; Exact mapped bytes 7E 12: jle 0x100e462f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100e462f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1bch]
        ; Exact mapped bytes EB 02: jmp 0x100e4631
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 54h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100e4663
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 58h]
        push ebx
        ; Exact mapped bytes E8 B4 B0 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 68h]
        mov eax, dword ptr [eax + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x100e468d
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 1017f514h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e468d
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 74h]
        push ebx
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 84 B0 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ebx
        ; Exact mapped bytes E8 7B B0 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push ebx
        ; Exact mapped bytes E8 6F B0 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 64h
        push ebx
        ; Exact mapped bytes E8 91 5C F4 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        push 64h
        push ebx
        ; Exact mapped bytes E8 83 5C F4 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
    }
}
