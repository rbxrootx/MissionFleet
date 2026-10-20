// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0E50 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_100b0e50_100B0E50() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 1
        mov esi, ecx
        ; Exact mapped bytes 75 2D: jne 0x100b0e89
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [eax + 94h]
        mov edx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [esi + 0a8h]
        push edx
        push eax
        ; Exact mapped bytes E8 FB 8A FF FF: call 0x100a9980
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 16: jne 0x100b0ea4
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 37 91 FF FF: call 0x100a9fd0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
