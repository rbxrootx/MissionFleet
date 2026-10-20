// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BBB40 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587bbb40_587BBB40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 43: je 0x587bbb93
        __asm _emit 0x74
        __asm _emit 0x43
        push 0
        push ecx
        ; Exact mapped bytes F3 0F 10 45 08: movss xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 44h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0
        push ecx
        ; Exact mapped bytes F3 0F 10 45 0C: movss xmm0, dword ptr [ebp + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 40h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
