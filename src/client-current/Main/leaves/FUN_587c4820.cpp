// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4820 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_587c4820() {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx]
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x587c486a
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        lea ecx, [esp + 0ch]
        ; Exact mapped bytes E8 CA CE 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 76 09: jbe 0x587c4846
        __asm _emit 0x76
        __asm _emit 0x09
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c4846
        __asm _emit 0x73
        __asm _emit 0x04
        dec eax
        mov dword ptr [edi + 4], eax
        push esi
        mov esi, dword ptr [edi + 4]
        neg esi
        sbb esi, esi
        not esi
        lea ecx, [esp + 0ch]
        and esi, edi
        ; Exact mapped bytes E8 CD CE 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x587c4869
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        test byte ptr [esp + 10h], 1
        ; Exact mapped bytes 74 09: je 0x587c487a
        __asm _emit 0x74
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 CB 83 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x83
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        pop edi
        mov eax, ebx
        pop ebx
        pop ecx
    }
}
