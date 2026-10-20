// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FAC00 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_100fac00_100FAC00() {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push edi
        xor edi, edi
        test ebp, ebp
        mov dword ptr [esp + 8], ecx
        ; Exact mapped bytes 7E 34: jle 0x100fac45
        __asm _emit 0x7e
        __asm _emit 0x34
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [edi + ebx]
        lea eax, [edi + ebx]
        lea ecx, [ebx + edi + 5ch]
        shr esi, 1
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push eax
        and esi, 1fh
        ; Exact mapped bytes E8 0F 04 00 00: call 0x100fb040
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + esi*4]
        dec ebp
        lea edi, [edi + edx*2 + 5ch]
        ; Exact mapped bytes 75 DC: jne 0x100fac17
        __asm _emit 0x75
        __asm _emit 0xdc
        pop esi
        mov eax, edi
        pop ebx
        pop edi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
