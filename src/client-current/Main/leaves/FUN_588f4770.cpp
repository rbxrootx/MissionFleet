// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4770 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_588f4770() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 5B: je 0x588f47d6
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [esi + 74h]
        cmp dword ptr [esi + 70h], eax
        ; Exact mapped bytes 7E 59: jle 0x588f47dc
        __asm _emit 0x7e
        __asm _emit 0x59
        cdq
        idiv dword ptr [esi + 78h]
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x588f47ae
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, 0ffffh
        ; Exact mapped bytes 66 33 C1: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc1
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x588f47d6
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x588f47d8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588f47c0
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
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 74 08: je 0x588f47ea
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 A6 ED FF FF: call 0x588f3590
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 26 E4 00 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6F E4 00 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
    }
}
