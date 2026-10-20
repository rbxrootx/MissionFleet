// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056186C .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0056186c_0056186C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 166h
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D7 89 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5618a6
        __asm _emit 0x75
        __asm _emit 0x14
        push 167h
        push 67c6f0h
        ; Exact mapped bytes E8 9F 74 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5618a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x561889
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        xor ecx, ecx
        test eax, eax
        setge cl
        mov eax, ecx
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
