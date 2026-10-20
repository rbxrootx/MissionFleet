// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DFC4 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_0042dfc4_0042DFC4() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 88 FB FF FF: call 0x42db54
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 8]
        cmp eax, -1
        ; Exact mapped bytes 75 08: jne 0x42dfdd
        __asm _emit 0x75
        __asm _emit 0x08
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx - 8], eax
        mov ecx, dword ptr [esi]
        pop esi
        and byte ptr [ecx + eax], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
