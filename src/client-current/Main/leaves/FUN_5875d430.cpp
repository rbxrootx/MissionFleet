// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875D430 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_5875d430() {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 78h]
        cmp eax, 1
        ; Exact mapped bytes 7E 4F: jle 0x5875d48a
        __asm _emit 0x7e
        __asm _emit 0x4f
        lea ecx, [eax - 1]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 3
        push esi
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov eax, 88888889h
        imul esi
        push edi
        add edx, esi
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        mov dword ptr [ebx + 78h], ecx
        mov ecx, dword ptr [ebx + 10h]
        push edi
        ; Exact mapped bytes E8 F0 9E 1A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 14h]
        mov eax, edi
        shl eax, 4
        sub eax, edi
        add eax, eax
        add eax, eax
        sub esi, eax
        push esi
        ; Exact mapped bytes E8 DA 9E 1A 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9e
        __asm _emit 0x1a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        ; Exact mapped bytes 75 FC: jne 0x5875d488
        __asm _emit 0x75
        __asm _emit 0xfc
        cmp dword ptr [ebx + 60h], 1
        mov dword ptr [ebx + 78h], 0
        ; Exact mapped bytes 75 0D: jne 0x5875d4a6
        __asm _emit 0x75
        __asm _emit 0x0d
        mov dword ptr [ebx + 60h], 4
        pop ebx
        ; Exact mapped bytes E9 FA F8 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 60h], 5
        pop ebx
        ; Exact mapped bytes E9 ED F8 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
