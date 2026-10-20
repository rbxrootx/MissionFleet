// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834AD0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58834ad0() {
    __asm {
        mov edx, dword ptr [esp + 8]
        test edx, edx
        ; Exact mapped bytes 76 25: jbe 0x58834afd
        __asm _emit 0x76
        __asm _emit 0x25
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x58834af2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 15h
        mov esi, ebx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        dec edx
        add eax, 54h
        test edx, edx
        ; Exact mapped bytes 77 E9: ja 0x58834ae3
        __asm _emit 0x77
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebx
        ret
    }
}
