// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054474F .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_0054474f_0054474F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 324h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 324h], ecx
        ; Exact mapped bytes E8 FD BE FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 324h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 11: je 0x544782
        __asm _emit 0x74
        __asm _emit 0x11
        push 3eh
        push 677f0ch
        ; Exact mapped bytes E8 C3 45 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544782
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x544761
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes E8 D6 BE FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 11: je 0x5447a4
        __asm _emit 0x74
        __asm _emit 0x11
        push 3fh
        push 677f0ch
        ; Exact mapped bytes E8 A1 45 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5447a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x544788
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 B4 BE FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ecx + 0ch], eax
        push 104h
        lea ecx, [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x544801
        __asm _emit 0x75
        __asm _emit 0x11
        push 4fh
        push 677f0ch
        ; Exact mapped bytes E8 44 45 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544801
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x5447d0
        __asm _emit 0x75
        __asm _emit 0xc9
        push 2eh
        lea edx, [ebp - 208h]
        push edx
        ; Exact mapped bytes E8 F2 CA EB FF: call 0x401307
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 310h], eax
        cmp dword ptr [ebp - 310h], 0
        ; Exact mapped bytes 75 11: jne 0x544838
        __asm _emit 0x75
        __asm _emit 0x11
        push 52h
        push 677f0ch
        ; Exact mapped bytes E8 0D 45 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544838
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54481e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2eh
        ; Exact mapped bytes 74 11: je 0x54485d
        __asm _emit 0x74
        __asm _emit 0x11
        push 53h
        push 677f0ch
        ; Exact mapped bytes E8 E8 44 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54485d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x54483e
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 310h]
        mov byte ptr [ecx], 0
        push 104h
        lea edx, [ebp - 30ch]
        push edx
        lea eax, [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 C0 01 00 00: call 0x544a44
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x544899
        __asm _emit 0x74
        __asm _emit 0x11
        push 59h
        push 677f0ch
        ; Exact mapped bytes E8 AC 44 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544899
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x54486c
        __asm _emit 0x75
        __asm _emit 0xcd
        mov edx, dword ptr [ebp - 324h]
        cmp dword ptr [edx + 8ch], 0
        ; Exact mapped bytes 75 34: jne 0x5448e2
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        ; Exact mapped bytes E8 8A 79 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 314h], eax
        lea eax, [ebp - 30ch]
        push eax
        ; Exact mapped bytes E8 B9 56 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 314h]
        push edx
        ; Exact mapped bytes E8 5D 79 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 324h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 6B: jne 0x544959
        __asm _emit 0x75
        __asm _emit 0x6b
        push 0
        ; Exact mapped bytes E8 4A 79 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        push 100h
        lea ecx, [ebp - 104h]
        push ecx
        push 0e000h
        ; Exact mapped bytes E8 2F 54 F9 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x54492f
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 5F 56 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 7ch], eax
        ; Exact mapped bytes EB 1E: jmp 0x54494d
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 324h]
        mov eax, dword ptr [edx + 8ch]
        push eax
        ; Exact mapped bytes E8 3F 56 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x56
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 318h]
        push edx
        ; Exact mapped bytes E8 E6 78 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 324h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [eax + 10h], edx
        ; Exact mapped bytes E8 F6 BC FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x544984
        __asm _emit 0x75
        __asm _emit 0x11
        push 6dh
        push 677f0ch
        ; Exact mapped bytes E8 C1 43 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544984
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x544968
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 324h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 4F: jne 0x5449e8
        __asm _emit 0x75
        __asm _emit 0x4f
        push 677f18h
        mov edx, dword ptr [ebp - 310h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 8D 78 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        lea eax, [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 BC 55 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 31ch]
        push edx
        ; Exact mapped bytes E8 60 78 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 310h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 324h]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 75 46: jne 0x544a3d
        __asm _emit 0x75
        __asm _emit 0x46
        push 677f20h
        lea edx, [ebp - 30ch]
        push edx
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 2F 78 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        lea eax, [ebp - 30ch]
        push eax
        ; Exact mapped bytes E8 5E 55 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x55
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 94h], eax
        mov edx, dword ptr [ebp - 320h]
        push edx
        ; Exact mapped bytes E8 02 78 F8 FF: call 0x4cc23f
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
