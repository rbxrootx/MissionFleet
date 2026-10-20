// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874A5D0 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_5874a5d0() {
    __asm {
        push -1
        push 58988128h
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
        mov dword ptr [esi], 5898d008h
        mov ecx, dword ptr [esi + 1bch]
        xor edi, edi
        mov dword ptr [esp + 18h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a61d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1bch], edi
        mov ecx, dword ptr [esi + 0b8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a635
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b8h], edi
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a64d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c0h], edi
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a665
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c8h], edi
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a67d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0dch], edi
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a695
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0cch], edi
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a6ad
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d0h], edi
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a6c5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d4h], edi
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a6dd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c4h], edi
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a6f5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e0h], edi
        mov ecx, dword ptr [esi + 1e0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a70d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1e0h], edi
        mov ecx, dword ptr [esi + 1e4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x5874a725
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1e4h], edi
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 1C B8 06 00: call 0x587b5f50
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb8
        __asm _emit 0x06
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
