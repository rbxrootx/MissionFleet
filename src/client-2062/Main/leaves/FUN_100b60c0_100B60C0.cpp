// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B60C0 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_100b60c0_100B60C0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        cmp ecx, 500h
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x100b6193
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        and eax, 0e1ffh
        or eax, 105h
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 54h], 0
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 12: jle 0x100b6116
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100b6116
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x100b6118
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 86 E7 F9 FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        shr eax, 8
        and eax, 0fh
        ; Exact mapped bytes 74 11: je 0x100b6143
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [esi + 8]
        mov ecx, eax
        shl ecx, 4
        add ecx, eax
        lea eax, [ecx + edx - 1]
        push eax
        ; Exact mapped bytes EB 07: jmp 0x100b614a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 8]
        add ecx, 54h
        push ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 6E 8C 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 78h]
        mov eax, 1
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [edx + 50h], eax
        mov dword ptr [esi + 0b4h], 0
        ; Exact mapped bytes A1 D0 56 1C 10: mov eax, dword ptr [0x101c56d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
    }
}
