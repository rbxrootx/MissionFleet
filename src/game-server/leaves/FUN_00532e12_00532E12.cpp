// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532E12 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00532e12_00532E12() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 25 D0 F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x532e49
        __asm _emit 0x75
        __asm _emit 0x14
        push 12bh
        push 5820dch
        ; Exact mapped bytes E8 BC 1B 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x532e49
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x532e24
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        add eax, 8
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
