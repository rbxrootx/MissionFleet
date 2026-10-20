// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB370 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_587bb370() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        sub eax, edx
        sar eax, 1
        push esi
        mov esi, dword ptr [esp + 10h]
        lea ecx, [eax + eax]
        sub esi, ecx
        test eax, eax
        ; Exact mapped bytes 7E 0C: jle 0x587bb396
        __asm _emit 0x7e
        __asm _emit 0x0c
        push ecx
        push edx
        push ecx
        push esi
        ; Exact mapped bytes E8 C1 18 1C 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x18
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 10h
        mov eax, esi
        pop esi
        ret
    }
}
