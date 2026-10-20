// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004331A0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_004331a0_004331A0() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 74 37: je 0x4331e5
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp + 0ch]
        push 0
        push eax
        push edi
        push dword ptr [ebp + 8]
        push dword ptr [esi + 4]
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4331d4
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9A 05 00 00: call 0x43376e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 74 0C: je 0x4331e5
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [esi + 0ch]
        push -1
        push 0dh
        ; Exact mapped bytes E8 4A 06 00 00: call 0x43382f
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
