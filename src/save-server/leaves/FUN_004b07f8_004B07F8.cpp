// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B07F8 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_004b07f8_004B07F8() {
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
        ; Exact mapped bytes 75 14: jne 0x4b081f
        __asm _emit 0x75
        __asm _emit 0x14
        push 1e7h
        push 635af0h
        ; Exact mapped bytes E8 26 85 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b081f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4b0802
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 34 B3 68 00: call dword ptr [0x68b334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
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
