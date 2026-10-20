// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BEA70 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_100bea70_100BEA70() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        mov edx, dword ptr [esp + 8]
        xor ecx, ecx
        test eax, eax
        setl cl
        dec ecx
        and ecx, eax
        mov dword ptr [esi + edx*4 + 94h], ecx
        mov ecx, dword ptr [esi + 94h]
        lea eax, [ecx + ecx*2]
        shl eax, 4
        add eax, ecx
        lea eax, [eax + eax*8]
        lea eax, [ecx + eax*2]
        mov ecx, dword ptr [esi + 68h]
        cdq
        idiv dword ptr [esi + 0a8h]
        add eax, 7eh
        push eax
        ; Exact mapped bytes E8 9D 02 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        lea eax, [ecx + ecx*2]
        shl eax, 4
        add eax, ecx
        lea edx, [eax + eax*8]
        lea eax, [ecx + edx*2]
        mov ecx, dword ptr [esi + 6ch]
        cdq
        idiv dword ptr [esi + 0a8h]
        add eax, 7eh
        push eax
        ; Exact mapped bytes E8 76 02 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
