// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004367C3 .. +0x46 bytes.
extern "C" __declspec(naked) void FID_conflict__GetSectionKey_CWinApp__QAEPAUHKEY____PB_W_Z_004367C3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        xor esi, esi
        push edi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 5B FF FF FF: call 0x43672f
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        cmp edi, esi
        ; Exact mapped bytes 75 04: jne 0x4367de
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x436803
        __asm _emit 0xeb
        __asm _emit 0x25
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 4]
        push eax
        push esi
        push 2001fh
        push esi
        push esi
        push esi
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes FF 15 04 C0 43 00: call dword ptr [0x43c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 00 C0 43 00: call dword ptr [0x43c000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
