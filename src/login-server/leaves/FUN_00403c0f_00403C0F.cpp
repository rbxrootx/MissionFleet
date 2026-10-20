// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403C0F .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_00403c0f_00403C0F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 448afch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        push -3
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 9F DC 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 7D DC 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
