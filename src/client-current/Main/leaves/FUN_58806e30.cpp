// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58806E30 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_58806e30() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 118h]
        mov ecx, edi
        ; Exact mapped bytes E8 DE BD 0F 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xbd
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 27 BE 0F 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e4ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov edi, 1
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        xor ebx, ebx
        mov dword ptr [esi + 58h], ebx
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax + 50h], ebx
        mov dword ptr [eax + 54h], 2ceh
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 150h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 10 48 A2 58: mov eax, dword ptr [0x58a24810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 75 19: jne 0x58806ecf
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [eax + 482ch], -1
        mov dword ptr [eax + 4], ebx
        ; Exact mapped bytes 74 0D: je 0x58806ecf
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [eax + 4820h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C0 98 58: call dword ptr [0x5898c0c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 2c4h], ebx
        mov dword ptr [esi + 2c8h], 0fah
        mov dword ptr [esi + 2cch], ebx
        mov dword ptr [esi + 2d0h], ebx
        mov dword ptr [esi + 2d4h], ebx
        mov dword ptr [esi + 2d8h], ebx
        mov dword ptr [esi + 2dch], ebx
        mov dword ptr [esi + 2e0h], ebx
        mov dword ptr [esi + 2e4h], ebx
        mov dword ptr [esi + 2e8h], ebx
        mov dword ptr [esi + 2ech], ebx
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 29ch
        ; Exact mapped bytes E8 3B C4 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 88 1D 5E 48 A2 58: mov byte ptr [0x58a2485e], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 9C 90 9C 58 FF FF FF FF: mov dword ptr [0x589c909c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 A3 B8 AD A0 58: mov word ptr [0x58a0adb8], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A2 BA AD A0 58: mov byte ptr [0x58a0adba], al
        __asm _emit 0xa2
        __asm _emit 0xba
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        pop edi
        mov dword ptr [esi + 2f0h], ebx
        mov dword ptr [esi + 2f4h], ebx
        pop esi
        pop ebx
        ret
    }
}
