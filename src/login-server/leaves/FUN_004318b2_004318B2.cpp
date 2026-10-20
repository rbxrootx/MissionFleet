// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004318B2 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_004318b2_004318B2() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 5F DA FF FF: call 0x42f31d
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x4318f1
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 80 00 00 00: call dword ptr [eax + 0x80]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 D9 DA FF FF: call 0x42f3b3
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push -4
        push dword ptr [esp + 10h]
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 02: jne 0x4318ee
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [esi], eax
        push 1
        pop eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
