// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884ED90 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_5884ed90_5884ED90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov byte ptr [ebp - 1], 0
        push dword ptr [ebx]
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes E8 3B E6 02 00: call 0x5887d3e9
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebx], eax
        mov ebx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebx + 8]
        lea esi, [ebx + 10h]
        ; Exact mapped bytes 33 05 40 60 90 58: xor eax, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        push esi
        push eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 84 FF FF FF: call 0x5884ed50
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 18 17 00 00: call 0x588504ec
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add esp, 10h
        mov edi, dword ptr [ebx + 0ch]
        test byte ptr [eax + 4], 66h
        ; Exact mapped bytes 75 5A: jne 0x5884ee3d
        __asm _emit 0x75
        __asm _emit 0x5a
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 1ch]
        mov dword ptr [ebx - 4], eax
        cmp edi, -2
        ; Exact mapped bytes 74 69: je 0x5884ee60
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 8]
        lea eax, [edi + 2]
        lea eax, [edi + eax*2]
        mov ebx, dword ptr [ecx + eax*4]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], eax
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5884ee24
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, esi
        ; Exact mapped bytes E8 29 1A 00 00: call 0x58850840
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, 1
        mov byte ptr [ebp - 1], cl
        test eax, eax
        ; Exact mapped bytes 78 14: js 0x5884ee34
        __asm _emit 0x78
        __asm _emit 0x14
        ; Exact mapped bytes 7F 48: jg 0x5884ee6a
        __asm _emit 0x7f
        __asm _emit 0x48
        ; Exact mapped bytes EB 03: jmp 0x5884ee27
        __asm _emit 0xeb
        __asm _emit 0x03
        mov cl, byte ptr [ebp - 1]
        mov edi, ebx
        cmp ebx, -2
        ; Exact mapped bytes 75 C9: jne 0x5884edf7
        __asm _emit 0x75
        __asm _emit 0xc9
        test cl, cl
        ; Exact mapped bytes 74 2E: je 0x5884ee60
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes EB 20: jmp 0x5884ee54
        __asm _emit 0xeb
        __asm _emit 0x20
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 17: jmp 0x5884ee54
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp edi, -2
        ; Exact mapped bytes 74 1E: je 0x5884ee60
        __asm _emit 0x74
        __asm _emit 0x1e
        push 58906040h
        push esi
        mov edx, 0fffffffeh
        mov ecx, ebx
        ; Exact mapped bytes E8 4C 1A 00 00: call 0x588508a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 FE FF FF: call 0x5884ed50
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0e06d7363h
        ; Exact mapped bytes 75 38: jne 0x5884eead
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 83 3D C0 25 8C 58 00: cmp dword ptr [0x588c25c0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2F: je 0x5884eead
        __asm _emit 0x74
        __asm _emit 0x2f
        push 588c25c0h
        ; Exact mapped bytes E8 98 E0 02 00: call 0x5887cf20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5884eeaa
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 35 C0 25 8C 58: mov esi, dword ptr [0x588c25c0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        mov ecx, esi
        push 1
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov esi, dword ptr [ebp - 10h]
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, eax
        ; Exact mapped bytes E8 C9 19 00 00: call 0x58850880
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 0ch], edi
        ; Exact mapped bytes 74 12: je 0x5884eed1
        __asm _emit 0x74
        __asm _emit 0x12
        push 58906040h
        push esi
        mov edx, edi
        mov ecx, eax
        ; Exact mapped bytes E8 D2 19 00 00: call 0x588508a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push esi
        push dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], ebx
        ; Exact mapped bytes E8 73 FE FF FF: call 0x5884ed50
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        add esp, 8
        mov edx, esi
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 73 19 00 00: call 0x58850860
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
