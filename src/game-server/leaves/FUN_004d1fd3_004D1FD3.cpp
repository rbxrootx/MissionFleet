// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1FD3 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004d1fd3_004D1FD3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57df49h
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
        ; Exact mapped bytes E8 26 07 07 00: call 0x542720
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 586448h
        push 586408h
        push 1
        push 58641ch
        push 586410h
        ; Exact mapped bytes FF 15 74 23 5E 00: call dword ptr [0x5e2374]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 7C E8 5D 00: mov dword ptr [0x5de87c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 586408h
        push 0
        push 58642ch
        push 586410h
        ; Exact mapped bytes FF 15 74 23 5E 00: call dword ptr [0x5e2374]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 78 E8 5D 00: mov dword ptr [0x5de878], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 E8 5D 00 00: cmp dword ptr [0x5de888], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4d205c
        __asm _emit 0x74
        __asm _emit 0x11
        push 77h
        push 5c936ch
        ; Exact mapped bytes E8 A9 29 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d205c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d2042
        __asm _emit 0x75
        __asm _emit 0xe0
        push 4d1e04h
        ; Exact mapped bytes E8 44 99 FD FF: call 0x4ab9b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A3 88 E8 5D 00: mov dword ptr [0x5de888], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 8C E8 5D 00 00: cmp dword ptr [0x5de88c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4d208e
        __asm _emit 0x74
        __asm _emit 0x11
        push 7ah
        push 5c937ch
        ; Exact mapped bytes E8 77 29 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d208e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d2074
        __asm _emit 0x75
        __asm _emit 0xe0
        push 4d1f76h
        ; Exact mapped bytes E8 72 EA FD FF: call 0x4b0b10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A3 8C E8 5D 00: mov dword ptr [0x5de88c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 4
        push 2
        ; Exact mapped bytes E8 81 E9 FD FF: call 0x4b0a30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xfd
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
