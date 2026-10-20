// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853610 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58853610() {
    __asm {
        push esi
        mov eax, 1
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        ; Exact mapped bytes 84 05 5C 83 A2 58: test byte ptr [0x58a2835c], al
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 0A: jne 0x5885362f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 09 05 5C 83 A2 58: or dword ptr [0x58a2835c], eax
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, edi
        ; Exact mapped bytes EB 06: jmp 0x58853635
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D 58 83 A2 58: mov ecx, dword ptr [0x58a28358]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esp + 0ch]
        xor edx, edx
        cmp ecx, eax
        setl dl
        mov ecx, edi
        sub ecx, eax
        ; Exact mapped bytes A3 58 83 A2 58: mov dword ptr [0x58a28358], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, ecx
        imul eax, eax, 31h
        mov dword ptr [esi + 31ch], edx
        cdq
        idiv edi
        mov edi, eax
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x5885366a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 30ch]
        lea ecx, [eax + edi + 1]
        push ecx
        ; Exact mapped bytes EB 07: jmp 0x58853671
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, dword ptr [esi + 30ch]
        push edx
        mov ecx, dword ptr [esi + 308h]
        ; Exact mapped bytes E8 64 FC 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 314h]
        mov ecx, dword ptr [esi + 304h]
        sub eax, edi
        push eax
        ; Exact mapped bytes E8 50 FC 0A 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
