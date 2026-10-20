// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873B90 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_58873b90() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x58873c40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x58873bcf
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58873bc8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x58873bcf
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58873bb2
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 74 67: je 0x58873c40
        __asm _emit 0x74
        __asm _emit 0x67
        cmp eax, 20ah
        ; Exact mapped bytes 75 60: jne 0x58873c40
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0a0h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 4B D9 EB FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd9
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x58873c39
        __asm _emit 0x74
        __asm _emit 0x40
        movzx eax, word ptr [edi + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 19: jle 0x58873c1b
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp dword ptr [esi + 190h], 0
        ; Exact mapped bytes 7E 2E: jle 0x58873c39
        __asm _emit 0x7e
        __asm _emit 0x2e
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 1C F4 FF FF: call 0x58873030
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1C: jge 0x58873c39
        __asm _emit 0x7d
        __asm _emit 0x1c
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 2ch]
        sub ecx, 7
        cmp dword ptr [esi + 190h], ecx
        ; Exact mapped bytes 7D 09: jge 0x58873c39
        __asm _emit 0x7d
        __asm _emit 0x09
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 F7 F3 FF FF: call 0x58873030
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
