// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F9C0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0042f9c0_0042F9C0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi]
        sub eax, edi
        mov edi, dword ptr [esp + 0ch]
        sar eax, 1
        cmp edi, eax
        ; Exact mapped bytes 72 0D: jb 0x42f9e2
        __asm _emit 0x72
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 C1 63 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        lea eax, [ecx + edi*2]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
