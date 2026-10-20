// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877690 .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_58877690_58877690() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 01 15 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        mov ebx, eax
        xor ecx, ecx
        xor edx, edx
        mov dword ptr [ebp - 8], edx
        lea eax, [ebx + 2a0h]
        mov dword ptr [ebx + 58h], edx
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        lea edi, [ebx + 50h]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebx + 54h]
        lea eax, [esi + 80h]
        mov dword ptr [edi], esi
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 15: je 0x588776e4
        __asm _emit 0x74
        __asm _emit 0x15
        push ecx
        push 16h
        push 588ca120h
        ; Exact mapped bytes E8 47 FF FF FF: call 0x58877623
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebx + 54h]
        xor edx, edx
        mov eax, dword ptr [edi]
        push edi
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 48: je 0x58877734
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 07: je 0x588776fa
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 2E F9 FF FF: call 0x58877026
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x588776ff
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 C0 F9 FF FF: call 0x588770bf
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop ecx
        cmp dword ptr [ebx + 58h], eax
        ; Exact mapped bytes 75 3E: jne 0x58877745
        __asm _emit 0x75
        __asm _emit 0x3e
        push edi
        push 40h
        push 588c9e10h
        ; Exact mapped bytes E8 0F FF FF FF: call 0x58877623
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x5887773a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebx + 54h]
        xor ecx, ecx
        push edi
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 74 07: je 0x5887772d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 FB F8 FF FF: call 0x58877026
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x58877739
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E8 8D F9 FF FF: call 0x588770bf
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x58877739
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 66 F8 FF FF: call 0x58876f9f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        xor eax, eax
        cmp dword ptr [ebx + 58h], eax
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x5887788b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x58877761
        __asm _emit 0x74
        __asm _emit 0x18
        xor ebx, ebx
        ; Exact mapped bytes 66 39 1E: cmp word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1e
        ; Exact mapped bytes 75 11: jne 0x58877761
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 39 9E 00 01 00 00: cmp word ptr [esi + 0x100], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x58877761
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 84 41 89 58: call dword ptr [0x58894184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB 15: jmp 0x58877776
        __asm _emit 0xeb
        __asm _emit 0x15
        lea eax, [esi + 100h]
        neg esi
        push edi
        sbb esi, esi
        and esi, eax
        push esi
        ; Exact mapped bytes E8 72 FD FF FF: call 0x588774e6
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x5887788b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, 0fde8h
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x5887788b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, si
        push eax
        ; Exact mapped bytes FF 15 88 41 89 58: call dword ptr [0x58894188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x5887788b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x588777a7
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], esi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x58877876
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        lea ebx, [edi + 120h]
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 45 F8: cmp ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 75 F4: jne 0x588777c3
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        push dword ptr [ebp - 4]
        push 55h
        push ebx
        ; Exact mapped bytes E8 8E E7 FE FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x58877892
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push edi
        push 1001h
        push ebx
        ; Exact mapped bytes E8 BD 7F FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5887788b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        lea ebx, [edi + 80h]
        push ebx
        push 1002h
        lea eax, [edi + 120h]
        push eax
        ; Exact mapped bytes E8 9B 7F FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x5887788b
        __asm _emit 0x74
        __asm _emit 0x6a
        push 5fh
        push ebx
        ; Exact mapped bytes E8 26 5B 00 00: call 0x5887d34f
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5887783d
        __asm _emit 0x75
        __asm _emit 0x0e
        push 2eh
        push ebx
        ; Exact mapped bytes E8 18 5B 00 00: call 0x5887d34f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58877852
        __asm _emit 0x74
        __asm _emit 0x15
        push 40h
        push ebx
        push 7
        lea eax, [edi + 120h]
        push eax
        ; Exact mapped bytes E8 6A 7F FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5887788b
        __asm _emit 0x74
        __asm _emit 0x39
        add edi, 100h
        cmp esi, 0fde9h
        ; Exact mapped bytes 75 1B: jne 0x5887787b
        __asm _emit 0x75
        __asm _emit 0x1b
        push 5
        push 588caba4h
        push 10h
        push edi
        ; Exact mapped bytes E8 01 E7 FE FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x58877892
        __asm _emit 0x75
        __asm _emit 0x1c
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 12: jmp 0x5887788d
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0ah
        push 10h
        push edi
        push esi
        ; Exact mapped bytes E8 D4 EE FD FF: call 0x5885675a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB EB: jmp 0x58877876
        __asm _emit 0xeb
        __asm _emit 0xeb
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 3B 97 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
