// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534B73 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_00534b73_00534B73() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x534b9a
        __asm _emit 0x75
        __asm _emit 0x14
        push 291h
        push 636640h
        ; Exact mapped bytes E8 AB 41 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534b9a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534b7d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 28 FB FF: call 0x4e74a1
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
