// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F88D .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5884f88d_5884F88D() {
    __asm {
        push 8
        push 588ed008h
        ; Exact mapped bytes E8 C7 2E FE FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7D 04: jge 0x5884f8a8
        __asm _emit 0x7d
        __asm _emit 0x04
        mov edi, ecx
        ; Exact mapped bytes EB 06: jmp 0x5884f8ae
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edi, [ecx + 0ch]
        add edi, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], 0
        mov esi, dword ptr [ebp + 14h]
        push esi
        push edx
        push ecx
        mov ebx, dword ptr [ebp + 8]
        push ebx
        ; Exact mapped bytes E8 8B FE FF FF: call 0x5884f74f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        sub eax, 1
        ; Exact mapped bytes 74 21: je 0x5884f8ed
        __asm _emit 0x74
        __asm _emit 0x21
        sub eax, 1
        ; Exact mapped bytes 75 34: jne 0x5884f905
        __asm _emit 0x75
        __asm _emit 0x34
        lea eax, [esi + 8]
        push eax
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 44 F7 FF FF: call 0x5884f021
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 1
        push eax
        push dword ptr [esi + 18h]
        push edi
        ; Exact mapped bytes E8 94 0B 00 00: call 0x5885047f
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5884f905
        __asm _emit 0xeb
        __asm _emit 0x18
        lea eax, [esi + 8]
        push eax
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 28 F7 FF FF: call 0x5884f021
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push eax
        push dword ptr [esi + 18h]
        push edi
        ; Exact mapped bytes E8 6A 0B 00 00: call 0x5885046f
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0fffffffeh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
