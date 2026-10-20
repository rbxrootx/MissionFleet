// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004371B1 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004371b1_004371B1() {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes FF 15 E8 C1 43 00: call dword ptr [0x43c1e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor ecx, ecx
        push 1
        mov cl, ah
        movzx edx, al
        movzx ecx, cl
        shl edx, 8
        add ecx, edx
        mov dword ptr [esi + 54h], ecx
        mov ecx, eax
        shr ecx, 1fh
        cmp al, 4
        mov dword ptr [esi + 58h], ecx
        sbb eax, eax
        pop ecx
        inc eax
        xor ebx, ebx
        sub ecx, eax
        cmp eax, ebx
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 68h], ebx
        ; Exact mapped bytes 74 12: je 0x437204
        __asm _emit 0x74
        __asm _emit 0x12
        push ebx
        ; Exact mapped bytes FF 15 CC C0 43 00: call dword ptr [0x43c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, 40000h
        sbb eax, eax
        inc eax
        mov dword ptr [esi + 68h], eax
        mov ecx, esi
        ; Exact mapped bytes E8 D4 BC FF FF: call 0x432edf
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esi + 24h], ebx
        ; Exact mapped bytes E8 86 BC FF FF: call 0x432e9b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 8C C3 43 00: mov edi, dword ptr [0x43c38c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push 7f02h
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 7f00h
        push ebx
        mov dword ptr [esi + 3ch], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 40h], eax
        xor eax, eax
        cmp dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 44h], ebx
        pop edi
        setne al
        inc eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 14h], eax
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}
