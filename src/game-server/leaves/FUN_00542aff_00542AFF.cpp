// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542AFF .. +0x230 bytes.
extern "C" __declspec(naked) void FUN_00542aff_00542AFF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cbbch
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B 0D 00 00: call 0x5438c3
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 58328ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x542b52
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D9 D8 F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 7ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x542b5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 7ch], 0
        ; Exact mapped bytes E8 E2 28 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1070h
        ; Exact mapped bytes E8 FE 0B 00 00: call 0x543770
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 3F 6C FB FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x542b8f
        __asm _emit 0x74
        __asm _emit 0x11
        push 55h
        push 5c5db4h
        ; Exact mapped bytes E8 76 1E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542b8f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x542b75
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E8 16 6C FB FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 11: je 0x542bb9
        __asm _emit 0x74
        __asm _emit 0x11
        push 57h
        push 5c5db4h
        ; Exact mapped bytes E8 4C 1E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542bb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DF: jne 0x542b9e
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes FF 15 30 24 5E 00: call dword ptr [0x5e2430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 28h], eax
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 2ch], eax
        ; Exact mapped bytes E8 67 28 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 11: je 0x542bf3
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ch
        push 5c5db4h
        ; Exact mapped bytes E8 12 1E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542bf3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x542bd7
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E8 F9 28 FF FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 11: je 0x542c1d
        __asm _emit 0x74
        __asm _emit 0x11
        push 5eh
        push 5c5db4h
        ; Exact mapped bytes E8 E8 1D FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542c1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DF: jne 0x542c02
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 94h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 C7 81 B6 00 00 00 00 00: mov word ptr [ecx + 0xb6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 C7 82 B4 00 00 00 00 00: mov word ptr [edx + 0xb4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0c0h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0bch], 200h
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
