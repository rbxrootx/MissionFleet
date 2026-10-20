// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFBB0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_584cfbb0_584CFBB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 AB FD FF: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 E7 76 FB FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 60 FF FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
