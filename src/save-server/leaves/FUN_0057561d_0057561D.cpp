// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057561D .. +0x224 bytes.
extern "C" __declspec(naked) void FUN_0057561d_0057561D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 65bh
        push 67cd14h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 24 4C F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x57565a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 05: jne 0x57565f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x575838
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x57567f
        __asm _emit 0x75
        __asm _emit 0x14
        push 662h
        push 67cd14h
        ; Exact mapped bytes E8 C6 36 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57567f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x57565f
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d4h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 1C: je 0x5756c9
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x5756e9
        __asm _emit 0x75
        __asm _emit 0x14
        push 668h
        push 67cd14h
        ; Exact mapped bytes E8 5C 36 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5756e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5756c9
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 28 01 00 00: call dword ptr [eax + 0x128]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 1A: je 0x57572f
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 75 34: jne 0x57576f
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C3 CA F9 FF: call 0x512208
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 70 10 F6 FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 88h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 DA A2 F5 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0dch]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 74 1A: je 0x5757af
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 B4 A2 F5 FF: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0bch], 0
        ; Exact mapped bytes E8 AF C2 FB FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0A: jne 0x5757d9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x5757f9
        __asm _emit 0x75
        __asm _emit 0x14
        push 682h
        push 67cd14h
        ; Exact mapped bytes E8 4C 35 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5757f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5757d9
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c20h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes E8 E3 50 FD FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x575838
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
