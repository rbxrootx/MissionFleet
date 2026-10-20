// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E28E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_100e28e0_100E28E0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        cmp eax, esi
        mov ebx, dword ptr [edi + 4]
        ; Exact mapped bytes 76 02: jbe 0x100e28f4
        __asm _emit 0x76
        __asm _emit 0x02
        mov ebx, eax
        mov eax, dword ptr [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 40 51 17 10: call dword ptr [0x10175140]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 4
        cmp ebx, esi
        ; Exact mapped bytes 76 23: jbe 0x100e2929
        __asm _emit 0x76
        __asm _emit 0x23
        push ebp
        ; Exact mapped bytes 8B 2D 20 51 17 10: mov ebp, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [edi + 0ch]
        inc esi
        cmp esi, ebx
        mov dword ptr [ecx + esi*4 - 4], eax
        ; Exact mapped bytes 72 F2: jb 0x100e290d
        __asm _emit 0x72
        __asm _emit 0xf2
        mov dword ptr [edi + 10h], 0
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi + 10h], esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
