// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530EB9 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00530eb9_00530EB9() {
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
        ; Exact mapped bytes 75 11: jne 0x530edc
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5820d4h
        ; Exact mapped bytes E8 29 3B 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530edc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x530ec3
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
