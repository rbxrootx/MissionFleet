// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D8850 .. +0x415 bytes.
extern "C" __declspec(naked) void FUN_100d8850_100D8850() {
    __asm {
        push -1
        push 101735f8h
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
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 1017648ch
        mov ecx, dword ptr [esi + 60h]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 74 09: je 0x100d888a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 60h], ebx
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d889a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebx
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d88aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 68h], ebx
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d88ba
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], ebx
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d88ca
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], ebx
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d88da
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 74h], ebx
        mov ecx, dword ptr [esi + 78h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d88ea
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 78h], ebx
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d88fa
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 7ch], ebx
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8910
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 80h], ebx
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8926
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 84h], ebx
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d893c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 88h], ebx
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8952
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 8ch], ebx
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8968
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 90h], ebx
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d897e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 94h], ebx
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8994
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 98h], ebx
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d89aa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ch], ebx
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d89c0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], ebx
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d89d6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ach], ebx
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d89ec
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b0h], ebx
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a02
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b4h], ebx
        mov ecx, dword ptr [esi + 0b8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a18
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b8h], ebx
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a2e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0bch], ebx
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a44
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c0h], ebx
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a5a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c4h], ebx
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a70
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c8h], ebx
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a86
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0cch], ebx
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8a9c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d0h], ebx
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8ab2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d4h], ebx
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8ac8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d8h], ebx
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8ade
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0dch], ebx
        push ebp
        push edi
        lea edi, [esi + 0ech]
        mov ebp, 3
        mov ecx, dword ptr [edi - 0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100d8afb
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi - 0ch], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100d8b09
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebx
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 DC: jne 0x100d8aeb
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [esi + 138h]
        pop edi
        cmp ecx, ebx
        pop ebp
        ; Exact mapped bytes 74 0C: je 0x100d8b27
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 138h], ebx
        mov ecx, dword ptr [esi + 13ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8b3d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 13ch], ebx
        mov ecx, dword ptr [esi + 148h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8b53
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 148h], ebx
        mov ecx, dword ptr [esi + 14ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8b69
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 14ch], ebx
        mov ecx, dword ptr [esi + 150h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8b7f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 150h], ebx
        mov ecx, dword ptr [esi + 154h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8b95
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 154h], ebx
        mov ecx, dword ptr [esi + 158h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8bab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 158h], ebx
        mov ecx, dword ptr [esi + 15ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8bc1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 15ch], ebx
        mov ecx, dword ptr [esi + 160h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8bd7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 160h], ebx
        mov ecx, dword ptr [esi + 164h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8bed
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 164h], ebx
        mov ecx, dword ptr [esi + 168h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8c03
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 168h], ebx
        mov ecx, dword ptr [esi + 16ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8c19
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 16ch], ebx
        mov ecx, dword ptr [esi + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8c2f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 190h], ebx
        mov ecx, dword ptr [esi + 198h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100d8c45
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 198h], ebx
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 4C A2 02 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        pop ebx
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
