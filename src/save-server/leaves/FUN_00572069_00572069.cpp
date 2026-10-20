// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572069 .. +0x18F bytes.
extern "C" __declspec(naked) void FUN_00572069_00572069() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f8bah
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 63d1ach
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 56 01 00 00: call 0x5721f8
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 1B: je 0x5720c9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 0bch]
        ; Exact mapped bytes E8 B8 89 FD FF: call 0x54aa74
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C D7 FD FF: call 0x54f84d
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C1 D8 FD FF: call 0x54f9a1
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0E: je 0x5720f7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6C D6 FD FF: call 0x54f761
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB DD: jmp 0x5720d4
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 3E: je 0x572141
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x57212d
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x572134
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 11: je 0x57215e
        __asm _emit 0x74
        __asm _emit 0x11
        push 41h
        push 67cd14h
        ; Exact mapped bytes E8 E7 6B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57215e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x572141
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x572189
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x572164
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 25: je 0x5721c0
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ach]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ach]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0ach], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x57218f
        __asm _emit 0x75
        __asm _emit 0xc9
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 14 A7 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 61 9B FF FF: call 0x56bd48
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
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
