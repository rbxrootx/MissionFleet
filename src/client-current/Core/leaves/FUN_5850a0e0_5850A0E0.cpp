// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A0E0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5850a0e0_5850A0E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C0 D1 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 B2 FB FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
