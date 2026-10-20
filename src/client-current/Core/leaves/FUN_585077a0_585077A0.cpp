// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585077A0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_585077a0_585077A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 36 2F FA FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 13 2E FA FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 1], 0
        lea edx, [ebp - 1]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 1]
        push edx
        ; Exact mapped bytes E8 F8 2D FA FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
