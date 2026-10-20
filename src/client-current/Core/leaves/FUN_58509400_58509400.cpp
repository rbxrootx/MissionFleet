// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509400 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_58509400_58509400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 18h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 24h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 2E 00 00: call 0x5850c2f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 2E 00 00: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
