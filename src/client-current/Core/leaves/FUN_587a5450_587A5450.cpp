// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5450 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_587a5450_587A5450() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 10h], eax
        push ebx
        mov ebx, dword ptr [esp + 28h]
        push esi
        mov esi, dword ptr [esp + 20h]
        cmp ebx, 2
        ; Exact mapped bytes 7C 0E: jl 0x587a547b
        __asm _emit 0x7c
        __asm _emit 0x0e
        push 588b901ch
        push esi
        ; Exact mapped bytes E8 B8 9F FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [esp + 24h]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 0ch], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 0dh], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 0eh], al
        mov byte ptr [esp + 0fh], cl
        mov ecx, dword ptr [esp + 28h]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        mov byte ptr [esp + 13h], cl
        mov byte ptr [esp + 14h], bl
        test esi, esi
        ; Exact mapped bytes 74 66: je 0x587a552f
        __asm _emit 0x74
        __asm _emit 0x66
        push 9
        push 70485973h
        push esi
        ; Exact mapped bytes E8 8A E8 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 DD 13 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        lea eax, [esp + 28h]
        push eax
        push esi
        ; Exact mapped bytes E8 C0 A0 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 2ch], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 2dh], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 2eh], al
        lea eax, [esp + 2ch]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 3bh], cl
        ; Exact mapped bytes E8 94 13 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        mov ecx, dword ptr [esp + 18h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 14 BB 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
