// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9EA0 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_587a9ea0_587A9EA0() {
    __asm {
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 40h], eax
        push esi
        mov esi, dword ptr [esp + 4ch]
        push edi
        mov ecx, dword ptr [esi + 80h]
        test ecx, ecx
        ; Exact mapped bytes 74 4A: je 0x587a9f08
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, ecx
        mov byte ptr [esp + 0bh], cl
        shr eax, 18h
        mov byte ptr [esp + 8], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 9], al
        mov eax, ecx
        push 588b89c8h
        shr eax, 8
        push 4
        mov byte ptr [esp + 12h], al
        lea eax, [esp + 10h]
        push 40h
        push eax
        ; Exact mapped bytes E8 20 54 FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes E8 95 4E FF FF: call 0x5879ed90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [esi + 80h], 0
        mov eax, dword ptr [esi + 23ch]
        xor edx, edx
        and eax, 0ch
        mov ecx, 0fh
        cmp eax, 0ch
        setne al
        cmovne ecx, edx
        mov byte ptr [esi + 15ch], al
        lea eax, [esi + 84h]
        test byte ptr [esi + 78h], 2
        mov dword ptr [eax], edx
        mov dword ptr [esi + 88h], edx
        mov dword ptr [esi + 90h], edx
        mov dword ptr [esi + 94h], edx
        ; Exact mapped bytes 74 2D: je 0x587a9f74
        __asm _emit 0x74
        __asm _emit 0x2d
        push ecx
        push eax
        ; Exact mapped bytes E8 82 5A 00 00: call 0x587af9d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 8
        test edi, edi
        ; Exact mapped bytes 74 38: je 0x587a9f8f
        __asm _emit 0x74
        __asm _emit 0x38
        push edi
        push esi
        ; Exact mapped bytes E8 22 6B FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 40h]
        xor ecx, esp
        ; Exact mapped bytes E8 E0 70 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 44h
        ret
        push 38h
        push 588b8a04h
        push ecx
        push eax
        ; Exact mapped bytes E8 AE 57 00 00: call 0x587af730
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 10h
        test edi, edi
        ; Exact mapped bytes 75 CC: jne 0x587a9f57
        __asm _emit 0x75
        __asm _emit 0xcc
        or dword ptr [esi + 78h], 2
        mov eax, dword ptr [esp + 54h]
        mov ecx, dword ptr [esp + 48h]
        mov dword ptr [esi + 80h], eax
        mov eax, edi
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 A8 70 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 44h
        ret
    }
}
