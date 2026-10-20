// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022CA0 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_10022ca0_10022CA0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 5ch]
        add ecx, edi
        add eax, ebx
        mov dword ptr [esi + 58h], ecx
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr [esi + 5ch], eax
        ; Exact mapped bytes E8 6A C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push ebx
        push edi
        ; Exact mapped bytes E8 5D C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push ebx
        push edi
        ; Exact mapped bytes E8 50 C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push ebx
        push edi
        ; Exact mapped bytes E8 43 C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push ebx
        push edi
        ; Exact mapped bytes E8 36 C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push ebx
        push edi
        ; Exact mapped bytes E8 29 C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c4h]
        push ebx
        push edi
        ; Exact mapped bytes E8 1C C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        push ebx
        push edi
        ; Exact mapped bytes E8 0F C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push ebx
        push edi
        ; Exact mapped bytes E8 02 C1 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
