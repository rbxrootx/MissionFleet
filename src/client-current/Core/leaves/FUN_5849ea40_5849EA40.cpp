// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849EA40 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5849ea40_5849EA40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 49ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4a0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 49ch]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4a0h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, dword ptr [ebp - 8]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 75 25 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x25
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 DD 27 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x27
        __asm _emit 0x39
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4a4h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
