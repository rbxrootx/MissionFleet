// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005338E9 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_005338e9_005338E9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x53390d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dfh
        push 636640h
        ; Exact mapped bytes E8 38 54 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53390d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5338f3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 FC B3 68 00: call dword ptr [0x68b3fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 53 FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x53
        __asm _emit 0xfb
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
