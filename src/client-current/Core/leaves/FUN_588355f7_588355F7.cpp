// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588355F7 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_588355f7_588355F7() {
    __asm {
        push esi
        push edi
        push 58966c7ch
        xor eax, eax
        mov edi, ecx
        push eax
        push edi
        push 588342a3h
        push eax
        push eax
        ; Exact mapped bytes FF 15 F8 43 89 58: call dword ptr [0x588943f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 21: jne 0x58835638
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f1e80h
        ; Exact mapped bytes E8 2B 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [edi + 28h]
        push eax
        ; Exact mapped bytes E8 57 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 4D: jmp 0x58835685
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes FF 35 7C 6C 96 58: push dword ptr [0x58966c7c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x7c
        __asm _emit 0x6c
        __asm _emit 0x96
        __asm _emit 0x58
        add edi, 28h
        push esi
        push 588f1each
        ; Exact mapped bytes E8 07 6D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 36 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push 1f4h
        push esi
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 102h
        ; Exact mapped bytes 75 14: jne 0x5883567e
        __asm _emit 0x75
        __asm _emit 0x14
        push 588f0584h
        ; Exact mapped bytes E8 DF 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push edi
        ; Exact mapped bytes E8 0F 4A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push esi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes 74 1C: je 0x588356ac
        __asm _emit 0x74
        __asm _emit 0x1c
        push 588f1ecch
        ; Exact mapped bytes E8 B9 6C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 E1 49 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
