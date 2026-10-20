// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AEC18 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004aec18_004AEC18() {
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
        ; Exact mapped bytes 75 14: jne 0x4aec47
        __asm _emit 0x75
        __asm _emit 0x14
        push 124h
        push 635af0h
        ; Exact mapped bytes E8 FE A0 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aec47
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aec22
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 0
        push 0
        push 0
        push 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C BE FF FF: call 0x4aaaa5
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
