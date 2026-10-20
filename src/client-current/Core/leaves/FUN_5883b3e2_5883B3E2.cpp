// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B3E2 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_5883b3e2_5883B3E2() {
    __asm {
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 8], 0
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        ; Exact mapped bytes 74 29: je 0x5883b41b
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [esi + 14h], 8
        ; Exact mapped bytes 72 23: jb 0x5883b41b
        __asm _emit 0x72
        __asm _emit 0x23
        push ebx
        mov ebx, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x5883b40a
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 33 05 00 00: call 0x5883b93a
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 14h]
        push 2
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 95 EE FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebx
        mov dword ptr [esi + 14h], 7
        cmp dword ptr [esi + 14h], 8
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes 72 02: jb 0x5883b42d
        __asm _emit 0x72
        __asm _emit 0x02
        mov esi, dword ptr [esi]
        xor eax, eax
        ; Exact mapped bytes 66 89 04 7E: mov word ptr [esi + edi*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x7e
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
