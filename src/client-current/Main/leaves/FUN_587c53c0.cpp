// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C53C0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_587c53c0() {
    __asm {
        cmp dword ptr [ecx + 18h], 10h
        ; Exact mapped bytes 72 17: jb 0x587c53dd
        __asm _emit 0x72
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 4]
        push esi
        mov esi, dword ptr [esp + 8]
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 29 FC FF FF: call 0x587c5000
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 8]
        lea eax, [ecx + 4]
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 12 FC FF FF: call 0x587c5000
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
