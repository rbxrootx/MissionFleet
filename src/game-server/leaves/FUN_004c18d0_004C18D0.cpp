// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C18D0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_004c18d0_004C18D0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        lea eax, [edx + ecx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
