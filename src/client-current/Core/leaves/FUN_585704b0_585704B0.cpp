// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585704B0 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_585704b0_585704B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 1
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 2
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 0F 87 DE 00 00 00: ja 0x585705b8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 95 38 06 57 58: jmp dword ptr [edx*4 + 0x58570638]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x57
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 188h], -1
        ; Exact mapped bytes 74 14: je 0x58570504
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 188h]
        or edx, 20000h
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x5857050b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x585705bf
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 190h], -1
        ; Exact mapped bytes 74 14: je 0x58570530
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        or edx, 40000h
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x58570537
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x585705bf
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18ch], -1
        ; Exact mapped bytes 74 14: je 0x5857055c
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        or edx, 30000h
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x58570563
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 5A: jmp 0x585705bf
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58570577
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 23: jge 0x585705a0
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        imul edx, dword ptr [ebp - 0ch], 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 4B 06 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5857059e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585705a0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CE: jmp 0x5857056e
        __asm _emit 0xeb
        __asm _emit 0xce
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 09: jge 0x585705af
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 50000h
        ; Exact mapped bytes EB 07: jmp 0x585705b6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x585705bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x5857060d
        __asm _emit 0x74
        __asm _emit 0x48
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x585705db
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 12: jmp 0x585705ed
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 9C 0B 2E 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0
        push 8001b115h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 C3 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc3
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x58570632
        __asm _emit 0xeb
        __asm _emit 0x25
        push 588a9944h
        ; Exact mapped bytes E8 D9 19 FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F FD 16 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
