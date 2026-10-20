// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584933C0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_584933c0_584933C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 FC FF FF: call 0x584930c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0xff
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
