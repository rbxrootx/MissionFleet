// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502E70 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58502e70_58502E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2E 44 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 F2 F9 FF: call 0x584a2140
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
