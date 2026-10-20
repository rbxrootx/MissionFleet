// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418996 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00418996_00418996() {
    __asm {
        mov eax, 43ad40h
        ; Exact mapped bytes E8 68 6C 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43ec4ch
        xor edi, edi
        cmp dword ptr [esi + 20h], edi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes 75 19: jne 0x4189d2
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [esi + 2ch], edi
        mov ebx, dword ptr [esi + 24h]
        ; Exact mapped bytes 76 11: jbe 0x4189d2
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebx]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        inc edi
        add ebx, 4
        cmp edi, dword ptr [esi + 2ch]
        ; Exact mapped bytes 72 EF: jb 0x4189c1
        __asm _emit 0x72
        __asm _emit 0xef
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 50 F2 01 00: call 0x437c2d
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
