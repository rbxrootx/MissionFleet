// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052BD8D .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0052bd8d_0052BD8D() {
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
        ; Exact mapped bytes 75 11: jne 0x52bdb9
        __asm _emit 0x75
        __asm _emit 0x11
        push 70h
        push 634f78h
        ; Exact mapped bytes E8 8C CF FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52bdb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x52bd97
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 02 A0 FB FF: call 0x4e5dd4
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
