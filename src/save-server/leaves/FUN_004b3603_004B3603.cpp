// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3603 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004b3603_004B3603() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4b362f
        __asm _emit 0x75
        __asm _emit 0x11
        push 3ch
        push 636788h
        ; Exact mapped bytes E8 16 57 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b362f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4b360d
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 CF FF FF: call 0x4b0601
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        push 430h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 38 85 FF FF: call 0x4abb90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x85
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
