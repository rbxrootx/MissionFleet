// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534552 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00534552_00534552() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x534576
        __asm _emit 0x74
        __asm _emit 0x11
        push 60h
        push 5820f4h
        ; Exact mapped bytes E8 8F 04 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534576
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53455c
        __asm _emit 0x75
        __asm _emit 0xe0
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
