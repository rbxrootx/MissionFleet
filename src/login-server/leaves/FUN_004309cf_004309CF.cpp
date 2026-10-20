// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004309CF .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004309cf_004309CF() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 2F: je 0x430a0a
        __asm _emit 0x74
        __asm _emit 0x2f
        push esi
        ; Exact mapped bytes E8 1E E9 FF FF: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4309f4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 92 90 00 00 00: call dword ptr [edx + 0x90]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x430a05
        __asm _emit 0x75
        __asm _emit 0x11
        cmp esi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 74 10: je 0x430a0a
        __asm _emit 0x74
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB D2: jmp 0x4309d7
        __asm _emit 0xeb
        __asm _emit 0xd2
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x430a0c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
