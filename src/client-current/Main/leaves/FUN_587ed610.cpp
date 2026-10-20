// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ED610 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_587ed610() {
    __asm {
        sub esp, 404h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 400h], eax
        push ebx
        mov ebx, dword ptr [esp + 40ch]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, 2
        mov dword ptr [edi + 21ce8h], 5
        mov dword ptr [edi + 21ce4h], eax
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 0b8h], eax
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 5
        ; Exact mapped bytes E8 91 F7 09 00: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        push 3ffh
        lea edx, [esp + 15h]
        push 0
        push edx
        mov byte ptr [esp + 1ch], 0
        ; Exact mapped bytes E8 D3 F5 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf5
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        push ebx
        push 5899c0b8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 18h]
        push 400h
        push eax
        ; Exact mapped bytes E8 C9 E3 F5 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 154h]
        mov eax, dword ptr [esi + 80h]
        add esp, 10h
        lea edx, [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 80h]
        lea ebp, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587ed6c1
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, ebp
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 94h], eax
        lea eax, [edi + 21cech]
        mov edx, 18h
        sub ebx, eax
        lea ecx, [edx + 7fffffe6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587ed6fe
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [ebx + eax]
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x587ed6fe
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x587ed6e3
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587ed702
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x587ed703
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov ecx, dword ptr [esp + 410h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        mov byte ptr [eax], 0
        ; Exact mapped bytes E8 C2 F4 18 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 404h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
