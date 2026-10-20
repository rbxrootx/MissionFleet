// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A48D0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_584a48d0_584A48D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 2ch], 0
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 1ch], 0
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 20h], 3ch
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 34h], 0
        push 8
        push 0
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 24h]
        push ecx
        ; Exact mapped bytes E8 E8 84 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 38h]
        push ecx
        ; Exact mapped bytes E8 D0 84 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
