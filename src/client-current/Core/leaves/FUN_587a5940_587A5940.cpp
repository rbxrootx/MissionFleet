// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5940 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_587a5940_587A5940() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        mov esi, dword ptr [esp + 10h]
        cmp ebx, 4
        ; Exact mapped bytes 7C 0E: jl 0x587a595e
        __asm _emit 0x7c
        __asm _emit 0x0e
        push 588b8c24h
        push esi
        ; Exact mapped bytes E8 D5 9A FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [esp + 0bh], bl
        test esi, esi
        ; Exact mapped bytes 74 66: je 0x587a59cc
        __asm _emit 0x74
        __asm _emit 0x66
        push 1
        push 73524742h
        push esi
        ; Exact mapped bytes E8 ED E3 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea eax, [esp + 1bh]
        push eax
        push esi
        ; Exact mapped bytes E8 40 0F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea eax, [esp + 27h]
        push eax
        push esi
        ; Exact mapped bytes E8 23 9C FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 38h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 39h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 3ah], al
        lea eax, [esp + 38h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 47h], cl
        ; Exact mapped bytes E8 F7 0E 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
