// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7BC0 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_100b7bc0_100B7BC0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 2fh
        ; Exact mapped bytes 7E 12: jle 0x100b7be9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b7be9
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x100b7beb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 44 24 08: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 3B 86 C2 00 00 00: cmp ax, word ptr [esi + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 C0 00 00 00: mov word ptr [esi + 0xc0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x100b7ca6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0bch], 2
        lea ecx, [esi + 8ch]
        mov edx, 5
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100b7c20
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 66 8B 86 C2 00 00 00: mov ax, word ptr [esi + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x100b7c46
        __asm _emit 0x75
        __asm _emit 0x0b
        mov esi, dword ptr [esi + 78h]
        or byte ptr [esi + 24h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x100b7c61
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [esi + 78h]
        push 0
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 43 A8 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x100b7c86
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [esi + 74h]
        mov ecx, 1
        mov dword ptr [esi + 0bch], ecx
        push ecx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 1E A8 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 06: je 0x100b7c91
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 0D 00: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x100b7ca6
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [esi + 74h]
        mov ecx, 1
        push ecx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 FA A7 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
