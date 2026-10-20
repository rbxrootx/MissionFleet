// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001D770 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_1001d770_1001D770() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 6ch], 0
        ; Exact mapped bytes E8 22 B1 FF FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 1A B1 FF FF: call 0x100188c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [esi + 58h], 0
        cmp eax, 386h
        ; Exact mapped bytes 74 0E: je 0x1001d7c5
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 387h
        ; Exact mapped bytes 74 07: je 0x1001d7c5
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 388h
        ; Exact mapped bytes 75 28: jne 0x1001d7ed
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        mov ecx, dword ptr [ecx + 30h]
        mov eax, dword ptr [eax + 9a4h]
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 94h], 1
        mov eax, dword ptr [esi + 74h]
        cmp eax, 398h
        ; Exact mapped bytes 74 23: je 0x1001d81a
        __asm _emit 0x74
        __asm _emit 0x23
        cmp eax, 399h
        ; Exact mapped bytes 74 1C: je 0x1001d81a
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 39ah
        ; Exact mapped bytes 74 15: je 0x1001d81a
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 39bh
        ; Exact mapped bytes 74 0E: je 0x1001d81a
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 3a0h
        ; Exact mapped bytes 74 07: je 0x1001d81a
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 3c0h
        ; Exact mapped bytes 75 36: jne 0x1001d850
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov eax, dword ptr [ecx + 9a4h]
        mov dl, byte ptr [eax + 25h]
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 1D: jne 0x1001d850
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push eax
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 94h], 1
        mov eax, dword ptr [esi + 94h]
        pop esi
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x1001d86d
        __asm _emit 0x75
        __asm _emit 0x12
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
        ret
    }
}
