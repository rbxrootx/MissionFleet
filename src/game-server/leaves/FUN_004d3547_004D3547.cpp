// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3547 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004d3547_004D3547() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F0 31 00 00: call 0x4d6752
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 31 00 00: call 0x4d6752
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, -1
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
