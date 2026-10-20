// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B2990 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_588b2990() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 98h]
        mov dword ptr [ecx + 50h], 1
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov edx, dword ptr [esi + 9ch]
        mov dword ptr [edx + 50h], 6
        mov eax, dword ptr [esi + 9ch]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        push 1f2h
        push 2edh
        mov ecx, esi
        ; Exact mapped bytes E8 0A 36 F0 FF: call 0x587b6020
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 98h]
        cmp dword ptr [eax + 50h], 6
        ; Exact mapped bytes 75 04: jne 0x588b2a26
        __asm _emit 0x75
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 0E: jmp 0x588b2a34
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 9ch]
        cmp dword ptr [ecx + 50h], 6
        ; Exact mapped bytes 75 0F: jne 0x588b2a41
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 2
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 32h
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 17: jle 0x588b2a6a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588b2a6a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b2a6c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 18 4F 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        pop esi
        ; Exact mapped bytes 7E 1F: jle 0x588b2aa5
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 16: je 0x588b2aa5
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0c8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}
