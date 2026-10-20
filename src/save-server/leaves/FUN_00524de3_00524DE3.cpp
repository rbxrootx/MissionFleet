// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524DE3 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_00524de3_00524DE3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4A E6 F7 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x524e10
        __asm _emit 0x75
        __asm _emit 0x14
        push 9dh
        push 6345e8h
        ; Exact mapped bytes E8 35 3F 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524e10
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x524ded
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 AB 47 F2 FF: call 0x4495d0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x47
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
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
