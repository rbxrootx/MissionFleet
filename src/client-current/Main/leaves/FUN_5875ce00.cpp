// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CE00 .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_5875ce00() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 2e4h], 0
        mov edx, ecx
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5875cee6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 50h]
        push esi
        push edi
        cmp eax, ecx
        ; Exact mapped bytes 74 4D: je 0x5875ce87
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [edx + 54h]
        cmp eax, edx
        ; Exact mapped bytes 74 46: je 0x5875ce87
        __asm _emit 0x74
        __asm _emit 0x46
        mov al, byte ptr [eax + 354h]
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        cmp al, byte ptr [ecx + 354h]
        ; Exact mapped bytes 75 16: jne 0x5875ce6b
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 12e8h]
        mov eax, dword ptr [ecx + 6ch]
        push eax
        push 5898d948h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        ; Exact mapped bytes EB 29: jmp 0x5875ce94
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [edx + 12e8h]
        mov eax, dword ptr [eax + 6ch]
        push eax
        push 5898d948h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        lea ecx, [esp + 10h]
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x5875ce9a
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 5898d920h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        lea edx, [esp + 10h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 2e4h]
        add esp, 0ch
        push 9fh
        push 0
        push 5898cde8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 D9 DC 01 00: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 10101h
        push 1
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, dword ptr [edx + 2e4h]
        ; Exact mapped bytes E8 BC DC 01 00: call 0x5877aba0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 100h]
        xor ecx, esp
        ; Exact mapped bytes E8 E6 FC 21 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 104h
        ret
    }
}
