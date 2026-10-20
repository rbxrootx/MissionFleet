// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507150 .. +0x282 bytes.
extern "C" __declspec(naked) void FUN_00507150_00507150() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e147h
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
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 67 0B FF FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 60h
        ; Exact mapped bytes E8 7C 9D 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 586a44h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5071a7
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 11: jb 0x5071b8
        __asm _emit 0x72
        __asm _emit 0x11
        push 1eh
        push 5ca348h
        ; Exact mapped bytes E8 4D D8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5071b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x507198
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 22: je 0x5071e6
        __asm _emit 0x74
        __asm _emit 0x22
        push 587bf8h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 59 42 FF FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5071e6
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 5ca348h
        ; Exact mapped bytes E8 1F D8 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5071e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x5071be
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x507214
        __asm _emit 0x74
        __asm _emit 0x22
        push 585e80h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 2B 42 FF FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x507214
        __asm _emit 0x75
        __asm _emit 0x11
        push 22h
        push 5ca348h
        ; Exact mapped bytes E8 F1 D7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507214
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x5071ec
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 22: je 0x507242
        __asm _emit 0x74
        __asm _emit 0x22
        push 585e68h
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 FD 41 FF FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x507242
        __asm _emit 0x75
        __asm _emit 0x11
        push 24h
        push 5ca348h
        ; Exact mapped bytes E8 C3 D7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507242
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x50721a
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 3ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 40h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 44h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 48h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 38h], 0
        ; Exact mapped bytes 83 3D C0 5D 5C 00 00: cmp dword ptr [0x5c5dc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x5073a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 83 3D 28 E5 5D 00 00: cmp dword ptr [0x5de528], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 43: jne 0x507347
        __asm _emit 0x75
        __asm _emit 0x43
        push 3eh
        push 5ca348h
        push 1ch
        ; Exact mapped bytes E8 4D 5D FE FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x50732e
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 FC FD FF: call 0x4e6ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x507335
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes A3 28 E5 5D 00: mov dword ptr [0x5de528], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 24 E5 5D 00 00: cmp dword ptr [0x5de524], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x507392
        __asm _emit 0x75
        __asm _emit 0x42
        push 40h
        push 5ca348h
        push 20h
        ; Exact mapped bytes E8 01 5D FE FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x507378
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 68 26 04 00: call 0x5499db
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x50737f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 24 E5 5D 00: mov dword ptr [0x5de524], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 28 E5 5D 00: mov ecx, dword ptr [0x5de528]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 B1 FF FD FF: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x5073b5
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 1ch], 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1D 00 00 00: call 0x5073d2
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
