// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541B1F .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_00541b1f_00541B1F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x541b43
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c2h
        push 582398h
        ; Exact mapped bytes E8 C2 2E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541b43
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x541b29
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 44h], edx
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
