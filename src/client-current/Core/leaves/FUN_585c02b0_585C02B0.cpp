// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C02B0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_585c02b0_585C02B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 11f4h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 44 FD FF FF: call 0x585c0020
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
