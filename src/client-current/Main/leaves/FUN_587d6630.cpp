// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6630 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_587d6630() {
    __asm {
        push -1
        push 58981e4eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 88h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 84h], eax
        push ebx
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 94h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov ecx, dword ptr [esi + 0a4h]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x587d6687
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a4h], 0
        movzx ecx, word ptr [esi + 0d54h]
        mov eax, ecx
        shr eax, 4
        and eax, 0fh
        cdq
        mov ebx, 0ah
        idiv ebx
        and ecx, 0fh
        push edx
        push eax
        push ecx
        lea eax, [esp + 1ch]
        push 58995b3ch
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        push 198h
        ; Exact mapped bytes E8 90 65 1A 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x65
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esp + 9ch], 0
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x587d66e6
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8C D6 11 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587d66e8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a8h]
        mov dword ptr [esi + 0a4h], eax
        movzx eax, word ptr [esi + 0d54h]
        mov edx, eax
        shr edx, 4
        and edx, 0fh
        push edx
        and eax, 0fh
        push eax
        mov dword ptr [esp + 0a4h], 0ffffffffh
        ; Exact mapped bytes E8 D8 66 F9 FF: call 0x5876cdf0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 94h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 84h]
        xor ecx, esp
        ; Exact mapped bytes E8 A3 64 1A 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 94h
        ret
    }
}
