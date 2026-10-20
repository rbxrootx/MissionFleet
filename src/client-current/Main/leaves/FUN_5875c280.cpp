// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875C280 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_5875c280() {
    __asm {
        push -1
        push 589809d8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 5898d8e8h
        mov ecx, dword ptr [esi + 190h]
        xor edi, edi
        mov dword ptr [esp + 18h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5875c2cd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 190h], edi
        mov ecx, dword ptr [esi + 194h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5875c2e5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 194h], edi
        mov ecx, dword ptr [esi + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5875c2fd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 18ch], edi
        mov ecx, dword ptr [esi + 188h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5875c315
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 188h], edi
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 21c34h], edi
        ; Exact mapped bytes 75 1C: jne 0x5875c33e
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 07: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 12: jne 0x5875c33e
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [eax + 21f04h]
        push esi
        lea ecx, [eax + 94h]
        ; Exact mapped bytes E8 E2 8D 19 00: call 0x588f5120
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8d
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 23 CD 1A 00: call 0x58909070
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        add esp, 10h
        ret
    }
}
