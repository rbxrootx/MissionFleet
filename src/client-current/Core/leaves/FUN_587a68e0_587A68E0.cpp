// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A68E0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_587a68e0_587A68E0() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x587a68f3
        __asm _emit 0x75
        __asm _emit 0x08
        xor edi, edi
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [esi + 290h]
        mov ebx, dword ptr [esp + 14h]
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x587a690a
        __asm _emit 0x74
        __asm _emit 0x08
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x587a6912
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 01 2D 0B 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 12: je 0x587a692a
        __asm _emit 0x74
        __asm _emit 0x12
        push ebx
        push 0
        push edi
        ; Exact mapped bytes E8 EF 64 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
        push 588b9448h
        push esi
        ; Exact mapped bytes E8 4B 85 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
