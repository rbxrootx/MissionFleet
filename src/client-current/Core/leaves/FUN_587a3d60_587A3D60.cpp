// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3D60 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_587a3d60_587A3D60() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 8], eax
        push esi
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x587a3e00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 4], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 5], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 6], al
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        mov eax, ebx
        shr eax, 18h
        mov byte ptr [esp + 0ch], al
        mov eax, ebx
        shr eax, 10h
        mov byte ptr [esp + 0dh], al
        mov eax, ebx
        shr eax, 8
        mov byte ptr [esp + 0eh], al
        lea eax, [esp + 8]
        push 8
        push eax
        push esi
        mov dword ptr [esi + 2dch], 22h
        mov byte ptr [esp + 17h], cl
        mov byte ptr [esp + 1bh], bl
        ; Exact mapped bytes E8 E7 2A 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov dword ptr [esi + 120h], ebx
        ; Exact mapped bytes E8 0B CC FF FF: call 0x587a09f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 BE B7 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov dword ptr [esi + 2dch], 42h
        pop ebx
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 44 D2 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
