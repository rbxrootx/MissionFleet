// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C4D0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5850c4d0_5850C4D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        add eax, 18h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2B FF FF FF: call 0x5850c420
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        or edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
