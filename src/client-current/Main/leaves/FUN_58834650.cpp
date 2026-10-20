// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834650 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58834650() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [esp + 0ch]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 1D: je 0x5883467e
        __asm _emit 0x74
        __asm _emit 0x1d
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x58834672
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, 15h
        mov esi, edx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        add edx, 54h
        add eax, 54h
        cmp edx, ebx
        ; Exact mapped bytes 75 E7: jne 0x58834663
        __asm _emit 0x75
        __asm _emit 0xe7
        pop edi
        pop esi
        pop ebx
        ret
    }
}
