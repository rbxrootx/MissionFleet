// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057351B .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0057351b_0057351B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 293h
        push 67cd14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 28 6D F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x573552
        __asm _emit 0x75
        __asm _emit 0x14
        push 294h
        push 67cd14h
        ; Exact mapped bytes E8 F3 57 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x57
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573552
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x573538
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0f089h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C FE FF FF: call 0x5733f5
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
