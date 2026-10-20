// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C49E0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587c49e0() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 38h]
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [esp + 10h]
        push 0
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 0ch], 0
        mov dword ptr [edi], esi
        ; Exact mapped bytes E8 FF CC 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c4a0d
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 4], eax
        lea ecx, [esp + 10h]
        ; Exact mapped bytes E8 12 CD 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
