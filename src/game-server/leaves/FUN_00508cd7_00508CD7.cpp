// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508CD7 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00508cd7_00508CD7() {
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
        ; Exact mapped bytes 74 14: je 0x508cfe
        __asm _emit 0x74
        __asm _emit 0x14
        push 20fh
        push 5cb374h
        ; Exact mapped bytes E8 07 BD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508cfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x508ce1
        __asm _emit 0x75
        __asm _emit 0xdd
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
