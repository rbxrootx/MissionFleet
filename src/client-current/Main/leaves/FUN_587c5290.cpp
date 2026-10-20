// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5290 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_587c5290() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 4ch]
        push edi
        test ecx, ecx
        ; Exact mapped bytes 74 6D: je 0x587c5308
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [esp + 0ch]
        mov edi, dword ptr [esp + 10h]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x587c52b0
        __asm _emit 0x75
        __asm _emit 0x09
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x587c52b0
        __asm _emit 0x75
        __asm _emit 0x05
        lea eax, [edi + 4]
        ; Exact mapped bytes EB 02: jmp 0x587c52b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edi
        push eax
        push edx
        push ecx
        ; Exact mapped bytes E8 F9 7C 1B 00: call 0x5897cfb4
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x587c5308
        __asm _emit 0x75
        __asm _emit 0x46
        mov edi, dword ptr [esi + 4ch]
        mov ecx, esi
        mov byte ptr [esi + 48h], 1
        mov byte ptr [esi + 41h], al
        ; Exact mapped bytes E8 4D F7 FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 74 18: je 0x587c52ef
        __asm _emit 0x74
        __asm _emit 0x18
        lea eax, [edi + 8]
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        lea eax, [edi + 4]
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 30h], eax
        mov dword ptr [esi + 34h], eax
        mov dword ptr [esi + 4ch], edi
        ; Exact mapped bytes A1 88 4A A2 58: mov eax, dword ptr [0x58a24a88]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esi + 44h], eax
        pop edi
        mov dword ptr [esi + 3ch], 0
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
