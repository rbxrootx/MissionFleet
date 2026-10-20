// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004912BB .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_004912bb_004912BB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e2b2h
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
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 586d84h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x491310
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 55 79 00 00: call 0x498c60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x491317
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 27 1E 00 00: call 0x493146
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 15 00 00: call 0x49292c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 58e450h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E3 15 00 00: call 0x49292c
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 58e400h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CC 15 00 00: call 0x49292c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 2E: je 0x491397
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 1C: je 0x4913bc
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 54h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 44: je 0x491409
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 18h]
        add edx, 0a8h
        push edx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        push -1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9A 2D 00 00: call 0x4941bf
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 74 47: je 0x491478
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 3B: je 0x491478
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 90h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 29: je 0x491478
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 90h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 9ch
        ; Exact mapped bytes E8 C2 C3 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 58h
        ; Exact mapped bytes E8 D7 B0 0B 00: call 0x54c570
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 93 68 06 00: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
