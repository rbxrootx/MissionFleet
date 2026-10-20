// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10052CE0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_10052ce0_10052CE0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + 0a8h]
        push edi
        cdq
        idiv ecx
        mov edi, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 20h]
        push edi
        mov dword ptr [esi + 0b8h], ecx
        push ecx
        mov ecx, esi
        mov dword ptr [esi + 0bch], edi
        cdq
        sub eax, edx
        sar eax, 1
        lea eax, [eax + ebx + 1eh]
        mov dword ptr [esi + 80h], eax
        mov eax, dword ptr [esi + 0ach]
        cdq
        idiv edi
        cdq
        sub eax, edx
        sar eax, 1
        lea edx, [eax + ebp - 0ah]
        lea eax, [esi + 0b0h]
        push eax
        mov dword ptr [esi + 84h], edx
        ; Exact mapped bytes E8 7E 00 00 00: call 0x10052dc0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 80h], ebx
        mov dword ptr [esi + 84h], ebp
        pop edi
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov eax, dword ptr [esi + 0a4h]
        sar edx, 5
        lea eax, [eax + eax*4]
        mov ecx, edx
        shr ecx, 1fh
        lea eax, [eax + eax*4]
        add edx, ecx
        mov dword ptr [esi + 0c0h], edx
        mov ecx, dword ptr [esi + 0ach]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esi + 0a0h]
        mov dword ptr [esi + 68h], eax
        mov eax, ecx
        neg eax
        shl eax, 2
        sub eax, ecx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esi + 0a8h]
        mov dword ptr [esi + 6ch], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
