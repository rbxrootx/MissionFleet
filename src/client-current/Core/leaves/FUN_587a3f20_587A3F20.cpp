// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3F20 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_587a3f20_587A3F20() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        push edi
        mov edi, dword ptr [esp + 18h]
        push ebx
        push 65584966h
        push edi
        ; Exact mapped bytes E8 23 FE FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor esi, esi
        test ebx, ebx
        ; Exact mapped bytes 7E 2D: jle 0x587a3f73
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov al, byte ptr [esi + ebp]
        mov byte ptr [esp + 13h], al
        test edi, edi
        ; Exact mapped bytes 74 1D: je 0x587a3f6e
        __asm _emit 0x74
        __asm _emit 0x1d
        push 1
        lea eax, [esp + 17h]
        push eax
        push edi
        ; Exact mapped bytes E8 62 29 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea eax, [esp + 23h]
        push eax
        push edi
        ; Exact mapped bytes E8 45 B6 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        inc esi
        cmp esi, ebx
        ; Exact mapped bytes 7C D3: jl 0x587a3f46
        __asm _emit 0x7c
        __asm _emit 0xd3
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x587a3fb6
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [edi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 20h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 21h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 22h], al
        lea eax, [esp + 20h]
        push 4
        push eax
        push edi
        mov dword ptr [edi + 2dch], 82h
        mov byte ptr [esp + 2fh], cl
        ; Exact mapped bytes E8 0D 29 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
