// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524CB9 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00524cb9_00524CB9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x524cdc
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 6345e8h
        ; Exact mapped bytes E8 69 40 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524cdc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x524cc3
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        sub eax, 0ch
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
