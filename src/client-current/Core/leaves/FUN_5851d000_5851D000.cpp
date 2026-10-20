// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D000 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5851d000_5851D000() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 29 10 00 00: call 0x5851e040
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 93 A2 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 04 00 00: call 0x5851d4e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
