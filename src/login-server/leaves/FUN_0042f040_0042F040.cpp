// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F040 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_0042f040_0042F040() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 A0 F1 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 40000000h
        ; Exact mapped bytes 75 41: jne 0x42f09a
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, esi
        ; Exact mapped bytes E8 E0 17 00 00: call 0x430840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 10h]
        mov ebx, eax
        mov ecx, edi
        ; Exact mapped bytes E8 D4 17 00 00: call 0x430840
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 74 2A: je 0x42f09a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 1ch]
        test edi, edi
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 05: jne 0x42f07f
        __asm _emit 0x75
        __asm _emit 0x05
        and dword ptr [ebp - 4], edi
        ; Exact mapped bytes EB 06: jmp 0x42f085
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [edi + 1ch]
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 8]
        push eax
        push dword ptr [ebp + 0ch]
        push 36eh
        push dword ptr [ebx + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
