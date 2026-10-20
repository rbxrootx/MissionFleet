// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C47C0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587c47c0() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 24h]
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [esp + 10h]
        push 0
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 0ch], 0
        mov dword ptr [edi], esi
        ; Exact mapped bytes E8 1F CF 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c47ed
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 4], eax
        lea ecx, [esp + 10h]
        ; Exact mapped bytes E8 32 CF 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcf
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
