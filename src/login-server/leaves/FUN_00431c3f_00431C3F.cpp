// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431C3F .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00431c3f_00431C3F() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x431c6f
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 75 7C: jne 0x431ccb
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [esp + 8]
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffffffdh
        add ecx, 3
        or ch, 4
        push ecx
        push dword ptr [esi + 8]
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 15 5C C5 43 00: call dword ptr [0x43c55c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 55: jmp 0x431cc4
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp dword ptr [esp + 8], 0
        push edi
        ; Exact mapped bytes 75 40: jne 0x431cb7
        __asm _emit 0x75
        __asm _emit 0x40
        mov edi, dword ptr [esi + 14h]
        ; Exact mapped bytes FF 15 0C C4 43 00: call dword ptr [0x43c40c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, dword ptr [edi + 1ch]
        ; Exact mapped bytes 75 32: jne 0x431cb7
        __asm _emit 0x75
        __asm _emit 0x32
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 44 D6 FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 03: je 0x431c9e
        __asm _emit 0x74
        __asm _emit 0x03
        mov ecx, dword ptr [ecx + 1ch]
        push 0
        push ecx
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 94 C4 43 00: call dword ptr [0x43c494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 28 D6 FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 C6 FF FF: call 0x42e390
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 14h]
        ; Exact mapped bytes E8 A6 C6 FF FF: call 0x42e369
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov dword ptr [esi + 18h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
