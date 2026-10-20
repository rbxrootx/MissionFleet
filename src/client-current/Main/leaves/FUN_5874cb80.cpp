// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874CB80 .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_5874cb80() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 66h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 7E 17: jle 0x5874cbb6
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5874cbb6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 198h]
        ; Exact mapped bytes EB 02: jmp 0x5874cbb8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b8h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874cbed
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x5874cc0f
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5874cc0f
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 190h]
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x5874cc11
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c4h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874cc46
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 65h
        ; Exact mapped bytes 7E 17: jle 0x5874cc6b
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5874cc6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 194h]
        ; Exact mapped bytes EB 02: jmp 0x5874cc6d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0c0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874cca2
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        test byte ptr [esi + 194h], 3
        ; Exact mapped bytes 75 5C: jne 0x5874cd07
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 1e8h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        movzx eax, word ptr [esi + 178h]
        mov ecx, dword ptr [esi + 1e8h]
        push edi
        movzx edi, ax
        push edi
        ; Exact mapped bytes E8 93 A6 1B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa6
        __asm _emit 0x1b
        __asm _emit 0x00
        push 0ah
        push 0ah
        lea ecx, [esp + 10h]
        push ecx
        push edi
        ; Exact mapped bytes E8 74 01 23 00: call 0x5897ce50
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 10h
        pop edi
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x5874cd07
        __asm _emit 0x75
        __asm _emit 0x23
        lea edx, [esp + 4]
        push edx
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 4]
        dec eax
        lea eax, [eax + eax*4]
        sub ecx, eax
        sub ecx, 2fh
        push ecx
        mov ecx, dword ptr [esi + 1e8h]
        ; Exact mapped bytes E8 D9 65 1B 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x65
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 C7 FE 22 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
