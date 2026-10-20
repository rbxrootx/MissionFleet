// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884ECB0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_5884ecb0_5884ECB0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov dword ptr [edx], ebp
        mov dword ptr [edx + 4], ebx
        mov dword ptr [edx + 8], edi
        mov dword ptr [edx + 0ch], esi
        mov dword ptr [edx + 10h], esp
        mov eax, dword ptr [esp]
        mov dword ptr [edx + 14h], eax
        mov dword ptr [edx + 20h], 56433230h
        mov dword ptr [edx + 24h], 0
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 18h], eax
        cmp eax, -1
        ; Exact mapped bytes 0F 85 0C 00 00 00: jne 0x5884ecf4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + 1ch], 0ffffffffh
        ; Exact mapped bytes E9 4E 00 00 00: jmp 0x5884ed42
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        or ecx, ecx
        ; Exact mapped bytes 0F 84 0E 00 00 00: je 0x5884ed0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [edx + 24h], eax
        dec ecx
        ; Exact mapped bytes 0F 85 0B 00 00 00: jne 0x5884ed19
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 1ch], eax
        ; Exact mapped bytes E9 29 00 00 00: jmp 0x5884ed42
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [edx + 1ch], eax
        dec ecx
        ; Exact mapped bytes 0F 84 1B 00 00 00: je 0x5884ed42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        lea esi, [esp + 1ch]
        lea edi, [edx + 28h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 86 05 00 00 00: jbe 0x5884ed3e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 6
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        sub eax, eax
        ret
    }
}
