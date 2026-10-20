// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F7EA0 .. +0x226 bytes.
extern "C" __declspec(naked) void FUN_100f7ea0_100F7EA0() {
    __asm {
        push -1
        push 10174438h
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
        push ebp
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], 10176648h
        mov ecx, dword ptr [edi + 6ch]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 09: je 0x100f7eda
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 6ch], ebp
        mov ecx, dword ptr [edi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100f7eea
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 70h], ebp
        mov ecx, dword ptr [edi + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100f7efa
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 78h], ebp
        mov ecx, dword ptr [edi + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100f7f0a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 7ch], ebp
        mov ecx, dword ptr [edi + 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7f20
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 88h], ebp
        mov ecx, dword ptr [edi + 12ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7f36
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 12ch], ebp
        mov ecx, dword ptr [edi + 2bch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7f4c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 2bch], ebp
        mov ecx, dword ptr [edi + 2c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7f62
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 2c0h], ebp
        mov ecx, dword ptr [edi + 2c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7f78
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 2c4h], ebp
        mov ecx, dword ptr [edi + 2c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7f8e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 2c8h], ebp
        mov ecx, dword ptr [edi + 2b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7fa4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 2b0h], ebp
        mov ecx, dword ptr [edi + 2b4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7fba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 2b4h], ebp
        mov ecx, dword ptr [edi + 2b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7fd0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 2b8h], ebp
        mov ecx, dword ptr [edi + 90h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7fe6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 90h], ebp
        mov ecx, dword ptr [edi + 94h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f7ffc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 94h], ebp
        push ebx
        push esi
        lea esi, [edi + 1b0h]
        mov ebx, 20h
        mov ecx, dword ptr [esi - 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100f8019
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 80h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100f8027
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f803d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 80h], ebp
        mov ecx, dword ptr [esi - 118h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f8053
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 118h], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 B0: jne 0x100f8009
        __asm _emit 0x75
        __asm _emit 0xb0
        lea esi, [edi + 11ch]
        mov ebx, 4
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100f8072
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100f8064
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 118h]
        pop esi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x100f8090
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 118h], ebp
        mov ecx, dword ptr [edi + 2cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100f80a6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 2cch], ebp
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 EB AD 00 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop ebp
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
