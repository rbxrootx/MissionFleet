// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA470 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_587ba470() {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        push edi
        push ebp
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes E8 AB 70 1B 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x70
        __asm _emit 0x1b
        __asm _emit 0x00
        push ebp
        mov ebx, eax
        push 0
        push ebx
        ; Exact mapped bytes E8 BA 27 1C 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x27
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        mov ecx, 27h
        mov edi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 2ch]
        mov eax, esi
        add esp, 10h
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587ba4a7
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        push eax
        lea eax, [ebx + 9ch]
        push esi
        push eax
        ; Exact mapped bytes E8 8E 28 1C 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edi, dword ptr [esp + 2ch]
        mov eax, edi
        add esp, 0ch
        lea edx, [eax + 1]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587ba4d0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov edx, eax
        mov eax, esi
        lea esi, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x587ba4e0
        __asm _emit 0x75
        __asm _emit 0xf9
        push edx
        sub eax, esi
        lea ecx, [eax + ebx + 9ch]
        push edi
        push ecx
        ; Exact mapped bytes E8 54 28 1C 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        add esp, 0ch
        push 0
        inc ebp
        push ebp
        push ebx
        push 0
        push 0
        push 80010a05h
        ; Exact mapped bytes E8 5E 67 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x67
        __asm _emit 0x1b
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 2A 27 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x27
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
