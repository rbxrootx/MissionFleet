// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F370 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_5879f370_5879F370() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 68: je 0x5879f3e2
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [esi + 44h]
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x5879f3ba
        __asm _emit 0x75
        __asm _emit 0x39
        mov edi, dword ptr [esp + 14h]
        mov dword ptr [esi + 48h], eax
        cmp edi, 40h
        ; Exact mapped bytes 77 0F: ja 0x5879f39c
        __asm _emit 0x77
        __asm _emit 0x0f
        mov dword ptr [esi + 44h], esi
        mov eax, esi
        mov ecx, dword ptr [esp + 10h]
        pop edi
        mov dword ptr [esi + 40h], ecx
        pop esi
        ret
        push edi
        push esi
        ; Exact mapped bytes E8 2D 77 00 00: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 44h], eax
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5879f3e2
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 48h], edi
        pop edi
        mov dword ptr [esi + 40h], ecx
        pop esi
        ret
        mov ecx, dword ptr [esi + 48h]
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x5879f3ca
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, 40h
        cmp eax, esi
        ; Exact mapped bytes 75 52: jne 0x5879f41c
        __asm _emit 0x75
        __asm _emit 0x52
        cmp ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 74 C2: je 0x5879f392
        __asm _emit 0x74
        __asm _emit 0xc2
        mov eax, dword ptr [esi + 50h]
        push 588b76f0h
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x5879f3e7
        __asm _emit 0x74
        __asm _emit 0x0b
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        pop edi
        xor eax, eax
        pop esi
        ret
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 6D A8 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 B4 21 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 55 A8 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 9C 21 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        ret
        push 588b76d0h
        push esi
        ; Exact mapped bytes E8 59 FA FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
