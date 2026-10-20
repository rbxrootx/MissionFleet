// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10058230 .. +0x243 bytes.
extern "C" __declspec(naked) void FUN_10058230_10058230() {
    __asm {
        push -1
        push 1016f0b8h
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
        mov dword ptr [esi], 10175c10h
        mov ecx, dword ptr [esi + 68h]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 09: je 0x1005826a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1005827a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], edi
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1005828a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], edi
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1005829a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 74h], edi
        mov ecx, esi
        ; Exact mapped bytes E8 9F 53 00 00: call 0x1005d640
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 56ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100582b7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 56ch], edi
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100582cd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ch], edi
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100582e3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], edi
        mov ecx, dword ptr [esi + 54ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100582f9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 54ch], edi
        mov ecx, dword ptr [esi + 548h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005830f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 548h], edi
        mov ecx, dword ptr [esi + 544h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058325
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 544h], edi
        mov ecx, dword ptr [esi + 550h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005833b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 550h], edi
        mov ecx, dword ptr [esi + 55ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058351
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 55ch], edi
        mov ecx, dword ptr [esi + 558h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058367
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 558h], edi
        mov ecx, dword ptr [esi + 0d3ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005837d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d3ch], edi
        mov ecx, dword ptr [esi + 0d5ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058393
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d5ch], edi
        mov ecx, dword ptr [esi + 0d40h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100583a9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d40h], edi
        mov ecx, dword ptr [esi + 0d50h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100583bf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d50h], edi
        mov ecx, dword ptr [esi + 0d44h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100583d5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d44h], edi
        mov ecx, dword ptr [esi + 0d4ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100583eb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d4ch], edi
        mov ecx, dword ptr [esi + 0d48h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058401
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d48h], edi
        mov ecx, dword ptr [esi + 0d64h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058417
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d64h], edi
        mov ecx, dword ptr [esi + 0d54h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005842d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d54h], edi
        mov ecx, dword ptr [esi + 460h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10058443
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 460h], edi
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x10058453
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 3E AA 0A 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xaa
        __asm _emit 0x0a
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
