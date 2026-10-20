// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005648D2 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_005648d2_005648D2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 22: je 0x564907
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x564907
        __asm _emit 0x75
        __asm _emit 0x11
        push 63h
        push 5d0bb4h
        ; Exact mapped bytes E8 FE 00 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564907
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x5648dc
        __asm _emit 0x75
        __asm _emit 0xcf
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
