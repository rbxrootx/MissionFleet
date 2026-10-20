// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F8050 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_584f8050_584F8050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a33b8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 A8 8F 33 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 2F 00 00: call 0x584fb080
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
