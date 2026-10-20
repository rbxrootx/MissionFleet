// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541AE8 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00541ae8_00541AE8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x541b0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c0h
        push 582398h
        ; Exact mapped bytes E8 F9 2E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541b0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x541af2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 44h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
