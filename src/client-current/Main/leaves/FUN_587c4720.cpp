// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4720 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_587c4720() {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        push 0
        lea ecx, [esp + 0ch]
        ; Exact mapped bytes E8 D0 CF 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 76 09: jbe 0x587c4740
        __asm _emit 0x76
        __asm _emit 0x09
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c4740
        __asm _emit 0x73
        __asm _emit 0x04
        dec eax
        mov dword ptr [edi + 4], eax
        mov esi, dword ptr [edi + 4]
        neg esi
        sbb esi, esi
        not esi
        lea ecx, [esp + 8]
        and esi, edi
        ; Exact mapped bytes E8 D4 CF 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}
