// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFA30 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_584cfa30_584CFA30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 10h], ecx
        mov byte ptr [ebp - 1], 0
        lea edx, [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E AA FD FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 85 AB FD FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
