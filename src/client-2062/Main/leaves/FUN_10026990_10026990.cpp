// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10026990 .. +0x290 bytes.
extern "C" __declspec(naked) void FUN_10026990_10026990() {
    __asm {
        push -1
        push 1016da78h
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
        mov dword ptr [esi], 10175650h
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        mov dword ptr [esp + 14h], edi
        mov eax, dword ptr [eax + 0d48h]
        mov ecx, dword ptr [eax + 9ch]
        cmp dword ptr [ecx + 84h], esi
        ; Exact mapped bytes 75 07: jne 0x100269da
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, ecx
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 3d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100269f0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3d8h], edi
        mov ecx, dword ptr [esi + 3e0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a06
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3e0h], edi
        mov ecx, dword ptr [esi + 40ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a1c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 40ch], edi
        mov ecx, dword ptr [esi + 410h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a32
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 410h], edi
        mov ecx, dword ptr [esi + 408h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a48
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 408h], edi
        mov ecx, dword ptr [esi + 3dch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a5e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3dch], edi
        mov ecx, dword ptr [esi + 3e4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a74
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3e4h], edi
        mov ecx, dword ptr [esi + 3f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026a8a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3f8h], edi
        mov ecx, dword ptr [esi + 3f0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026aa0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3f0h], edi
        mov ecx, dword ptr [esi + 3f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026ab6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3f4h], edi
        mov ecx, dword ptr [esi + 3e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026acc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3e8h], edi
        mov ecx, dword ptr [esi + 3ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026ae2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3ech], edi
        mov ecx, dword ptr [esi + 404h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026af8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 404h], edi
        mov ecx, dword ptr [esi + 400h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b0e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 400h], edi
        mov ecx, dword ptr [esi + 3fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b24
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3fch], edi
        mov ecx, dword ptr [esi + 424h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b3a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 424h], edi
        mov ecx, dword ptr [esi + 428h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b50
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 428h], edi
        mov ecx, dword ptr [esi + 42ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b66
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 42ch], edi
        mov ecx, dword ptr [esi + 41ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b7c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 41ch], edi
        mov ecx, dword ptr [esi + 438h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026b92
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 438h], edi
        mov ecx, dword ptr [esi + 434h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026ba8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 434h], edi
        mov ecx, dword ptr [esi + 3cch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026bbe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3cch], edi
        mov ecx, dword ptr [esi + 3d4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026bd4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3d4h], edi
        mov ecx, dword ptr [esi + 450h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026bea
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 450h], edi
        mov ecx, dword ptr [esi + 454h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10026c00
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 454h], edi
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 01 C0 0D 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x0d
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
