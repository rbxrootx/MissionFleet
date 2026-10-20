// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D540 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_1004d540_1004D540() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x1004d579
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esp + 8]
        push 0
        push 0eh
        push eax
        and ecx, 0ffffh
        push 4
        push ecx
        push 80011005h
        mov ecx, esi
        ; Exact mapped bytes E8 E1 E9 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 100h
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
