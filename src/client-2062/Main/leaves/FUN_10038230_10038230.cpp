// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10038230 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_10038230_10038230() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 8E A4 02 00 00: mov cx, word ptr [esi + 0x2a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 16: jne 0x10038256
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 86 E2 02 00 00: mov ax, word ptr [esi + 0x2e2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 09: je 0x10038256
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 86 D6 02 00 00: mov word ptr [esi + 0x2d6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6E: jmp 0x100382c4
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 75 16: jne 0x10038272
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 86 E4 02 00 00: mov ax, word ptr [esi + 0x2e4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 09: je 0x10038272
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 86 D8 02 00 00: mov word ptr [esi + 0x2d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x100382c4
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 66 83 F9 0B: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0b
        ; Exact mapped bytes 75 24: jne 0x1003829c
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 86 E6 02 00 00: mov ax, word ptr [esi + 0x2e6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 17: je 0x1003829c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 89 86 DA 02 00 00: mov word ptr [esi + 0x2da], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 EA 02 00 00: mov ax, word ptr [esi + 0x2ea]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 DE 02 00 00: mov word ptr [esi + 0x2de], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x100382c4
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 66 83 F9 0C: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0c
        ; Exact mapped bytes 75 22: jne 0x100382c4
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 66 8B 86 E8 02 00 00: mov ax, word ptr [esi + 0x2e8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D FF FF: cmp ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x100382c4
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 8E EC 02 00 00: mov cx, word ptr [esi + 0x2ec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 DC 02 00 00: mov word ptr [esi + 0x2dc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8E E0 02 00 00: mov word ptr [esi + 0x2e0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1ech]
        and edx, 0e4fdh
        mov ecx, 0fffeh
        or edx, 405h
        push ebx
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1f0h]
        push edi
        lea edi, [esi + 110h]
        mov ebx, 28h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1f4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], 0fffffe70h
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 A4 05 FE FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x10038315
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push eax
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        pop ebx
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 12: jle 0x10038356
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10038356
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x10038358
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov esi, dword ptr [esi + 1f8h]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 00 59 1C 10 00 00 00 00: mov dword ptr [0x101c5900], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
