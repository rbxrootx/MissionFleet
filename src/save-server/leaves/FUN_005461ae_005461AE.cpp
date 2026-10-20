// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005461AE .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_005461ae_005461AE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 35 04 00 00: call 0x5465f0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
