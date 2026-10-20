// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58814F10 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_58814f10() {
    __asm {
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x58814fc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 6C: jne 0x58814fa1
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 2
        ; Exact mapped bytes 74 63: je 0x58814fa1
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [edi + 58h]
        mov eax, dword ptr [edx + 80h]
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x58814fa1
        __asm _emit 0x74
        __asm _emit 0x56
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 7E 4B: jle 0x58814fa1
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov ecx, dword ptr [edi + 58h]
        mov edx, dword ptr [ecx + 80h]
        mov al, byte ptr [edx + eax - 1]
        cmp al, 20h
        ; Exact mapped bytes 74 0E: je 0x58814f75
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp al, 27h
        ; Exact mapped bytes 74 0A: je 0x58814f75
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp al, 7fh
        ; Exact mapped bytes 74 06: je 0x58814f75
        __asm _emit 0x74
        __asm _emit 0x06
        dec al
        cmp al, 1eh
        ; Exact mapped bytes 77 2C: ja 0x58814fa1
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes E8 C6 A9 F4 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa9
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push 0
        push 64h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push edi
        push 0
        push 0
        push 8
        ; Exact mapped bytes E8 56 6B F5 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F FD F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x58814fc6
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58814fc8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x58814fb0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        ret
        pop esi
        pop edi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
