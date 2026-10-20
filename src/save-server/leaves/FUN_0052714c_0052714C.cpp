// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052714C .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0052714c_0052714C() {
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
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52717c
        __asm _emit 0x75
        __asm _emit 0x14
        push 181h
        push 6345f0h
        ; Exact mapped bytes E8 C9 1B 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52717c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52715f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 53 FA FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x53
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
