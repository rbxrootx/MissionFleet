// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055B89D .. +0x29C bytes.
extern "C" __declspec(naked) void FUN_0055b89d_0055B89D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f613h
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 23 DE FF FF: call 0x5596ed
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], 589888h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x55b8f3
        __asm _emit 0x74
        __asm _emit 0x13
        push 304h
        push 5cebe0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6D F8 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x55b91e
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 50 45 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55b91e
        __asm _emit 0x75
        __asm _emit 0x14
        push 305h
        push 5cebe0h
        ; Exact mapped bytes E8 E7 90 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55b91e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x55b8f3
        __asm _emit 0x75
        __asm _emit 0xcf
        push 88h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 39 DA F4 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xda
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x55b962
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 60h], 88h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55b996
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 EA 51 F9 FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55b996
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 64h]
        or edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 64h], edx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 70h], 559690h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 3ch], 7806h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 C4 FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0cch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D C4 FF FF: call 0x557e08
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0c4h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 75: jne 0x55ba4f
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 75 69: jne 0x55ba4f
        __asm _emit 0x75
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 34h]
        push eax
        ; Exact mapped bytes FF 15 28 2A 5E 00: call dword ptr [0x5e2a28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x55ba0d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 66 C7 45 EC 00 00: mov word ptr [ebp - 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes FF 15 2C 2A 5E 00: call dword ptr [0x5e2a2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 56 F4 FE FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0d4h], eax
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 82 C8 00 00 00: mov word ptr [edx + 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 12: jne 0x55ba67
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F A5 FF FF: call 0x555f96
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 0d4h], 0
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x55bb0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        lea eax, [ebp - 1ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 84h
        push ecx
        ; Exact mapped bytes FF 15 50 2A 5E 00: call dword ptr [0x5e2a50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x55baad
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 E6 F3 FE FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 52: jmp 0x55baff
        __asm _emit 0xeb
        __asm _emit 0x52
        push 100h
        ; Exact mapped bytes FF 15 80 2A 5E 00: call dword ptr [0x5e2a80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3E: je 0x55baff
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 18h]
        mov byte ptr [eax], 3fh
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 1], 0
        push 100h
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0f095h
        ; Exact mapped bytes E8 5F F1 F9 FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55baf9
        __asm _emit 0x75
        __asm _emit 0x14
        push 33dh
        push 5cebe0h
        ; Exact mapped bytes E8 0C 8F FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55baf9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x55bace
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0d4h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A A8 FF FF: call 0x55631d
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0d0h], eax
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
