// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E74F0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_587e74f0() {
    __asm {
        sub esp, 84h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 80h], eax
        push esi
        mov esi, dword ptr [esp + 8ch]
        mov eax, dword ptr [esi + 12e8h]
        mov eax, dword ptr [eax + 6ch]
        push edi
        mov edi, ecx
        push eax
        lea ecx, [esi + 3a0h]
        push ecx
        push 5899bd5ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 14h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        cmp dword ptr [esi + 1258h], 0
        ; Exact mapped bytes 74 12: je 0x587e7558
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 20d38h]
        push 0ffff00h
        lea eax, [esp + 0ch]
        push eax
        ; Exact mapped bytes EB 10: jmp 0x587e7568
        __asm _emit 0xeb
        __asm _emit 0x10
        lea ecx, [esp + 8]
        push 0ffffh
        push ecx
        mov ecx, dword ptr [edi + 20d3ch]
        ; Exact mapped bytes E8 23 48 12 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 1dh
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x587e7593
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587e7593
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x587e7595
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 F0 03 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        pop edi
        pop esi
        ; Exact mapped bytes 7E 14: jle 0x587e75c3
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587e75c3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x587e75c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 80h]
        xor ecx, esp
        ; Exact mapped bytes E8 FE 55 19 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x55
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 84h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
