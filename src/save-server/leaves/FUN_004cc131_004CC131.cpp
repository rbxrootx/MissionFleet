// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC131 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004cc131_004CC131() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        neg edx
        sbb edx, edx
        and edx, 3
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6D A6 F9 FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 10h
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
