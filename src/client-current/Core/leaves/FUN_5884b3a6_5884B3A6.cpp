// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B3A6 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5884b3a6_5884B3A6() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        ; Exact mapped bytes EB 19: jmp 0x5884b3c8
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp esi, -1
        ; Exact mapped bytes 74 28: je 0x5884b3dc
        __asm _emit 0x74
        __asm _emit 0x28
        push esi
        lea eax, [edi + 74h]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 5D 14 00 00: call 0x5884c81d
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 75 21: jne 0x5884b3e5
        __asm _emit 0x75
        __asm _emit 0x21
        add ebx, esi
        mov ecx, edi
        push 4000h
        lea eax, [edi + 74h]
        push eax
        ; Exact mapped bytes E8 10 0F 00 00: call 0x5884c2e6
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 D3: jne 0x5884b3af
        __asm _emit 0x75
        __asm _emit 0xd3
        mov dword ptr [edi + 70h], ebx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, 60000h
        ; Exact mapped bytes EB F5: jmp 0x5884b3e1
        __asm _emit 0xeb
        __asm _emit 0xf5
    }
}
