// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FEB74 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_004feb74_004FEB74() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0e000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 D8 02 00: call 0x52c484
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        push 0e001h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC D8 02 00: call 0x52c484
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 D8 02 00: call 0x52c42d
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4febc2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f5h
        push 6756ach
        ; Exact mapped bytes E8 83 A1 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4febc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x4feb98
        __asm _emit 0x75
        __asm _emit 0xd0
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
