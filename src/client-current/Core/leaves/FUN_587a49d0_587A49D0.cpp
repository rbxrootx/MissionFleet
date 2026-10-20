// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A49D0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_587a49d0_587A49D0() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [esp + 14h]
        movzx eax, word ptr [esi + 144h]
        cmp ebx, eax
        ; Exact mapped bytes 7E 13: jle 0x587a49fe
        __asm _emit 0x7e
        __asm _emit 0x13
        push 588b8ea0h
        push esi
        ; Exact mapped bytes E8 3A AA FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        push edi
        lea eax, [ebx + ebx]
        push eax
        push 68495354h
        push esi
        ; Exact mapped bytes E8 52 F3 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor edi, edi
        test ebx, ebx
        ; Exact mapped bytes 7E 3D: jle 0x587a4a54
        __asm _emit 0x7e
        __asm _emit 0x3d
        ; Exact mapped bytes 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + edi*2]
        mov eax, ecx
        mov byte ptr [esp + 11h], cl
        shr eax, 8
        mov byte ptr [esp + 10h], al
        lea eax, [esp + 10h]
        push 2
        push eax
        push esi
        ; Exact mapped bytes E8 81 1E 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 64 AB FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        add esp, 18h
        cmp edi, ebx
        ; Exact mapped bytes 7C CC: jl 0x587a4a20
        __asm _emit 0x7c
        __asm _emit 0xcc
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 18h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 19h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 1ah], al
        lea eax, [esp + 18h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 27h], cl
        ; Exact mapped bytes E8 30 1E 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1e
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
