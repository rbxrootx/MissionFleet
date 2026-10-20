// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004342BB .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004342bb_004342BB() {
    __asm {
        mov eax, 43aaf0h
        ; Exact mapped bytes E8 43 B3 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 D0 F8 FF FF: call 0x433ba1
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        mov dword ptr [esi], 43e790h
        lea ecx, [esi + 14h]
        mov eax, dword ptr [eax + 1ch]
        push ecx
        push eax
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes FF 15 AC C3 43 00: call dword ptr [0x43c3ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 61 F9 FF FF: call 0x433c58
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x434300
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 3B 01 00 00: call 0x43443b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
