// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877E2C .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_58877e2c_58877E2C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push esi
        push edi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58877edd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58877edd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 588cabb0h
        mov edx, ecx
        ; Exact mapped bytes 66 8B 3A: mov di, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x3a
        ; Exact mapped bytes 66 3B 3E: cmp di, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3e
        ; Exact mapped bytes 75 1E: jne 0x58877e77
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 15: je 0x58877e73
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 7A 02: mov di, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 7E 02: cmp di, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x58877e77
        __asm _emit 0x75
        __asm _emit 0x0f
        add edx, 4
        add esi, 4
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 DE: jne 0x58877e51
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, eax
        ; Exact mapped bytes EB 05: jmp 0x58877e7c
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb edx, edx
        or edx, 1
        test edx, edx
        ; Exact mapped bytes 74 5D: je 0x58877edd
        __asm _emit 0x74
        __asm _emit 0x5d
        mov esi, 588cabc4h
        mov edx, ecx
        ; Exact mapped bytes 66 8B 3A: mov di, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x3a
        ; Exact mapped bytes 66 3B 3E: cmp di, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3e
        ; Exact mapped bytes 75 1C: jne 0x58877eab
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 1C: je 0x58877eb0
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 7A 02: mov di, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 7E 02: cmp di, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes 75 0D: jne 0x58877eab
        __asm _emit 0x75
        __asm _emit 0x0d
        add edx, 4
        add esi, 4
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 DE: jne 0x58877e87
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes EB 05: jmp 0x58877eb0
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58877ed4
        __asm _emit 0x75
        __asm _emit 0x20
        push 2
        lea eax, [ebp - 4]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push 2000000bh
        push dword ptr [eax + 8]
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58877ef8
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 35: jmp 0x58877f09
        __asm _emit 0xeb
        __asm _emit 0x35
        push ecx
        ; Exact mapped bytes E8 7F FD FD FF: call 0x58857c59
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 2C: jmp 0x58877f09
        __asm _emit 0xeb
        __asm _emit 0x2c
        push 2
        lea eax, [ebp - 4]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push 20001004h
        push dword ptr [eax + 8]
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58877efc
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0D: jmp 0x58877f09
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x58877f09
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 84 41 89 58: call dword ptr [0x58894184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop esi
        leave
        ret
    }
}
