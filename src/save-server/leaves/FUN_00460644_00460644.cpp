// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460644 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00460644_00460644() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0ach
        push 67c8a4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FF 9B 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F8 2D 04 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x460686
        __asm _emit 0x75
        __asm _emit 0x14
        push 0adh
        push 67c8a4h
        ; Exact mapped bytes E8 BF 86 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x460686
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x460661
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0b0h
        push 67c8a4h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 BE 9B 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 AA B4 0C 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
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
