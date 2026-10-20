// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F890 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_0050f890_0050F890() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57db49h
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
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 1A FE FF: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 88h
        ; Exact mapped bytes E8 8F 60 02 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 90h
        ; Exact mapped bytes E8 77 64 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 69 64 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 5B 64 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 5853a4h
        push 88h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes E8 5E 9A F9 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 67: jne 0x50f985
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 6
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 6
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 09: jne 0x50f96c
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 11: je 0x50f97d
        __asm _emit 0x74
        __asm _emit 0x11
        push 4eh
        push 5c84b0h
        ; Exact mapped bytes E8 88 50 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f97d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x50f95a
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 50: jmp 0x50f9d5
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 7
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 7
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 2
        push 5
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x50f9ef
        __asm _emit 0x75
        __asm _emit 0x0d
        push 6
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 12: je 0x50fa01
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c84c0h
        push 5c84f0h
        ; Exact mapped bytes E8 17 02 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
