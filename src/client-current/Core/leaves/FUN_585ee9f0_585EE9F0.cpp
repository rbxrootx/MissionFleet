// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE9F0 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_585ee9f0_585EE9F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588add78h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, 13ch
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 08 26 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x26
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F C6 F0 FF: call 0x584fb080
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc6
        __asm _emit 0xf0
        __asm _emit 0xff
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
