// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58782960 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58782960_58782960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 74h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 62 D4 FF: call 0x584c8c40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x62
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
