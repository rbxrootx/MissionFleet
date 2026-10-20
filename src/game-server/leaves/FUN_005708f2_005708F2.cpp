// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005708F2 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_005708f2_005708F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 58e4e0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 B7 FD FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x570928
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a7h
        push 5d0930h
        ; Exact mapped bytes E8 DD 40 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570928
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57090e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
