// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005270B2 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_005270b2_005270B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5270e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 17bh
        push 6345f0h
        ; Exact mapped bytes E8 63 1C 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5270e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5270c5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 54 FA FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
