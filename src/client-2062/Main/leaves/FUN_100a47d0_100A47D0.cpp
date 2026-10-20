// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A47D0 .. +0x26B bytes.
extern "C" __declspec(naked) void FUN_100a47d0_100A47D0() {
    __asm {
        push -1
        push 10171438h
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
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [ebp], 10176070h
        xor ebx, ebx
        lea esi, [ebp + 0d8h]
        mov dword ptr [esp + 1ch], ebx
        mov edi, 0bh
        mov ecx, dword ptr [esi - 2ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100a4818
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 2ch], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a4826
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 DC: jne 0x100a4808
        __asm _emit 0x75
        __asm _emit 0xdc
        lea esi, [ebp + 1d8h]
        mov edi, 1fh
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100a4847
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a4855
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebx
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100a4865
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a4873
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebx
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4889
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f8h], ebx
        mov ecx, dword ptr [esi + 174h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a489f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 174h], ebx
        mov ecx, dword ptr [esi + 1f0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a48b5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1f0h], ebx
        mov ecx, dword ptr [esi + 26ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a48cb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 26ch], ebx
        mov ecx, dword ptr [esi + 2e8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a48e1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 2e8h], ebx
        mov ecx, dword ptr [esi + 364h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a48f7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 364h], ebx
        mov ecx, dword ptr [esi - 7ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100a4907
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 7ch], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 0F 85 26 FF FF FF: jne 0x100a4837
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 9ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4927
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 9ch], ebx
        mov ecx, dword ptr [ebp + 0a0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a493d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0a0h], ebx
        mov ecx, dword ptr [ebp + 0a4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4953
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0a4h], ebx
        mov ecx, dword ptr [ebp + 5b8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4969
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 5b8h], ebx
        mov ecx, dword ptr [ebp + 5bch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a497f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 5bch], ebx
        mov ecx, dword ptr [ebp + 84h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4995
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 84h], ebx
        mov ecx, dword ptr [ebp + 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a49ab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 88h], ebx
        mov ecx, dword ptr [ebp + 94h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a49c1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 94h], ebx
        mov ecx, dword ptr [ebp + 90h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a49d7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 90h], ebx
        mov ecx, dword ptr [ebp + 8ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a49ed
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 8ch], ebx
        mov ecx, dword ptr [ebp + 0a8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4a03
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0a8h], ebx
        mov ecx, dword ptr [ebp + 98h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100a4a19
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 98h], ebx
        mov ecx, ebp
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 D8 2B FA FF: call 0x10047600
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
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
