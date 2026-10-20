// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585209D0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_585209d0_585209D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 7fffffffh
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 EA E9 FF FF: call 0x5851f3e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 C5 69 F6 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x69
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
