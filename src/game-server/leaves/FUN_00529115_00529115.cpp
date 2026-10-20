// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529115 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00529115_00529115() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 52 8A FC FF: call 0x4f1b79
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 5C FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 30h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52914a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ach
        push 5c8f88h
        ; Exact mapped bytes E8 BB B8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52914a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x529127
        __asm _emit 0x75
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
