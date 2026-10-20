// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431CCF .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_00431ccf_00431CCF() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x431cfd
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 75 4C: jne 0x431d2c
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [esp + 0ch]
        neg ecx
        sbb ecx, ecx
        and ecx, 8
        or ch, 4
        push ecx
        push dword ptr [esi + 8]
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 15 F8 C3 43 00: call dword ptr [0x43c3f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x431d2c
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes 8B 3D 4C C5 43 00: mov edi, dword ptr [0x43c54c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        push 87h
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test ah, 20h
        ; Exact mapped bytes 74 13: je 0x431d2c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esi + 14h]
        push 0
        push dword ptr [esp + 10h]
        push 0f1h
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
