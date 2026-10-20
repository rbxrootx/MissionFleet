// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58742FB0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58742fb0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x5874305b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        cmp eax, 6
        ; Exact mapped bytes 74 05: je 0x58742fcc
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 0ah
        ; Exact mapped bytes 75 22: jne 0x58742fee
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esi + 30h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58742fee
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x58742fee
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 1
        push 2
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, 5
        cmp dword ptr [esi + 50h], eax
        ; Exact mapped bytes 75 07: jne 0x58742fff
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 50h], 6
        cmp dword ptr [esi + 50h], 4
        ; Exact mapped bytes 75 03: jne 0x58743008
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 50h], eax
        mov eax, 9
        cmp dword ptr [esi + 50h], eax
        ; Exact mapped bytes 75 07: jne 0x58743019
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 50h], 0ah
        cmp dword ptr [esi + 50h], 8
        ; Exact mapped bytes 75 03: jne 0x58743022
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C0 FE FF FF: call 0x58742ef0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5874303d
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5874305b
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5874305d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58743045
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
