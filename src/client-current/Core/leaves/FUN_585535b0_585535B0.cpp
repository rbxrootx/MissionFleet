// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585535B0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_585535b0_585535B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 A8 CB F5 FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 26: jne 0x585535f5
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 D2 FD F6 FF: call 0x584c33b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C BD 12 00: call 0x5867f390
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
