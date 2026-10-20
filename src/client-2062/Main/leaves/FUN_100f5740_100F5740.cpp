// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F5740 .. +0x2B1 bytes.
extern "C" __declspec(naked) void FUN_100f5740_100F5740() {
    __asm {
        push -1
        push 101742f8h
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
        mov dword ptr [esi], 1017662ch
        mov ecx, dword ptr [esi + 68h]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 74 09: je 0x100f577a
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
        ; Exact mapped bytes 74 09: je 0x100f578a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], ebx
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100f579a
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
        ; Exact mapped bytes 74 09: je 0x100f57aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebx
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f57c0
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
        ; Exact mapped bytes 74 0C: je 0x100f57d6
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
        ; Exact mapped bytes 74 0C: je 0x100f57ec
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 88h], ebx
        mov ecx, dword ptr [esi + 110h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5802
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 110h], ebx
        mov ecx, dword ptr [esi + 114h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5818
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 114h], ebx
        mov ecx, dword ptr [esi + 118h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f582e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 118h], ebx
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5844
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10ch], ebx
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f585a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b0h], ebx
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5870
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b4h], ebx
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5886
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d0h], ebx
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f589c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d4h], ebx
        push ebp
        push edi
        lea edi, [esi + 0e8h]
        mov ebp, 2
        mov ecx, dword ptr [edi - 8]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100f58b9
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi - 8], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100f58c7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebx
        mov ecx, dword ptr [edi - 20h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100f58d7
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi - 20h], ebx
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 CC: jne 0x100f58a9
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [esi + 0d8h]
        pop edi
        cmp ecx, ebx
        pop ebp
        ; Exact mapped bytes 74 0C: je 0x100f58f5
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
        ; Exact mapped bytes 74 0C: je 0x100f590b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0dch], ebx
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5921
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0bch], ebx
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5937
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c0h], ebx
        mov ecx, dword ptr [esi + 0f0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f594d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f0h], ebx
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5963
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f8h], ebx
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f5979
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0fch], ebx
        mov ecx, dword ptr [esi + 0f4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f598f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f4h], ebx
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f59a5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 100h], ebx
        mov ecx, dword ptr [esi + 104h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f59bb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 104h], ebx
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100f59d1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 108h], ebx
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 C0 D4 00 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0x00
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
