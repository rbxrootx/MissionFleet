// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585468C0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_585468c0_585468C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1cch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2f8h]
        ; Exact mapped bytes E8 CD 57 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0C 5D FA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1cch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1cch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
