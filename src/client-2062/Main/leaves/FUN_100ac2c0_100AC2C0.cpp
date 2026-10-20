// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AC2C0 .. +0x30F bytes.
extern "C" __declspec(naked) void FUN_100ac2c0_100AC2C0() {
    __asm {
        push -1
        push 101718c8h
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
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 101760e0h
        mov ecx, dword ptr [esi + 0ach]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 74 0C: je 0x100ac302
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ach], ebp
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac318
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 8ch], ebp
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac32e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 90h], ebp
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac344
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 98h], ebp
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac35a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 9ch], ebp
        mov ecx, dword ptr [esi + 0a8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac370
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a8h], ebp
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac386
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b0h], ebp
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac39c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a0h], ebp
        mov ecx, dword ptr [esi + 0a4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac3b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a4h], ebp
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac3c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 174h], ebp
        mov ecx, dword ptr [esi + 0e4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac3de
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0e4h], ebp
        mov ecx, dword ptr [esi + 0e8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac3f4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0e8h], ebp
        mov ecx, dword ptr [esi + 0ech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac40a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ech], ebp
        mov ecx, dword ptr [esi + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac420
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 18ch], ebp
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac436
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d4h], ebp
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac44c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d8h], ebp
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac462
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0dch], ebp
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac478
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0e0h], ebp
        mov ecx, dword ptr [esi + 180h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac48e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 180h], ebp
        mov ecx, dword ptr [esi + 184h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac4a4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 184h], ebp
        mov ecx, dword ptr [esi + 188h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac4ba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 188h], ebp
        push ebx
        push edi
        lea edi, [esi + 190h]
        lea ebx, [esi + 0f4h]
        mov dword ptr [esp + 10h], 0bh
        mov ecx, dword ptr [edi - 48h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100ac4e0
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi - 48h], ebp
        mov ecx, dword ptr [ebx - 4]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100ac4f0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx - 4], ebp
        mov ecx, dword ptr [ebx]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100ac4fe
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx], ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100ac50c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        mov ecx, dword ptr [edi + 2ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100ac51c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 2ch], ebp
        mov eax, dword ptr [esp + 10h]
        add edi, 4
        add ebx, 8
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 A3: jne 0x100ac4d0
        __asm _emit 0x75
        __asm _emit 0xa3
        lea edi, [esi + 0b4h]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100ac546
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100ac538
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 1f4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac562
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1f4h], ebp
        mov ecx, dword ptr [esi + 1f8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ac578
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1f8h], ebp
        lea edi, [esi + 1fch]
        mov ebx, 20h
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100ac591
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100ac583
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 1f0h]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x100ac5af
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1f0h], ebp
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 42 B0 F9 FF: call 0x10047600
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
