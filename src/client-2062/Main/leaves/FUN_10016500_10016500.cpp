// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016500 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_10016500_10016500() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 75 0D: jne 0x10016518
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x10016527
        __asm _emit 0x75
        __asm _emit 0x15
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D0 FB FF FF: call 0x100160f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2ch]
        test eax, eax
        ; Exact mapped bytes 74 EB: je 0x10016512
        __asm _emit 0x74
        __asm _emit 0xeb
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        lea eax, [esp + 14h]
        push edi
        mov edi, dword ptr [esp + 14h]
        push eax
        push 0
        push edi
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 28h], 0
        ; Exact mapped bytes E8 17 00 00 00: call 0x10016560
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push edi
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 0C 02 00 00: call 0x10016760
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        pop edi
        pop ebx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
