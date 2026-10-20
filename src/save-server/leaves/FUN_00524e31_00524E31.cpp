// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524E31 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_00524e31_00524E31() {
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
        ; Exact mapped bytes E8 FC E5 F7 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x524e5e
        __asm _emit 0x75
        __asm _emit 0x14
        push 9fh
        push 6345e8h
        ; Exact mapped bytes E8 E7 3E 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524e5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x524e3b
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 7D 47 F2 FF: call 0x4495f0
        __asm _emit 0xe8
        __asm _emit 0x7d
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
