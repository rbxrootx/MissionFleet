// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588774E6 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_588774e6_588774E6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x588775b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        ; Exact mapped bytes 66 39 3E: cmp word ptr [esi], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3e
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x588775b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 588cabb0h
        mov eax, esi
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 11: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 75 1E: jne 0x58877531
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 15: je 0x5887752d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 51 02: cmp dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x58877531
        __asm _emit 0x75
        __asm _emit 0x0f
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DE: jne 0x5887750b
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, edi
        ; Exact mapped bytes EB 05: jmp 0x58877536
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x588775b7
        __asm _emit 0x74
        __asm _emit 0x7d
        push 588caba4h
        push esi
        ; Exact mapped bytes E8 6B C7 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x588775a5
        __asm _emit 0x74
        __asm _emit 0x5a
        push 588cabb8h
        push esi
        ; Exact mapped bytes E8 5A C7 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x588775a5
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, 588cabc4h
        mov eax, esi
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 11: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 75 1C: jne 0x58877587
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 1C: je 0x5887758c
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 51 02: cmp dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 75 0D: jne 0x58877587
        __asm _emit 0x75
        __asm _emit 0x0d
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DE: jne 0x58877563
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes EB 05: jmp 0x5887758c
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb edi, edi
        or edi, 1
        test edi, edi
        ; Exact mapped bytes 75 1E: jne 0x588775ae
        __asm _emit 0x75
        __asm _emit 0x1e
        push 2
        lea eax, [ebp - 4]
        push eax
        push 2000000bh
        ; Exact mapped bytes EB 25: jmp 0x588775c2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        cmp eax, 3
        ; Exact mapped bytes 7D 05: jge 0x588775aa
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, 0fde9h
        pop edi
        pop esi
        leave
        ret
        push esi
        ; Exact mapped bytes E8 A5 06 FE FF: call 0x58857c59
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB F3: jmp 0x588775aa
        __asm _emit 0xeb
        __asm _emit 0xf3
        push 2
        lea eax, [ebp - 4]
        push eax
        push 20001004h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 250h
        push eax
        ; Exact mapped bytes E8 E8 81 FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x5887759d
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes EB D4: jmp 0x588775aa
        __asm _emit 0xeb
        __asm _emit 0xd4
    }
}
