// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CF7F .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5886cf7f_5886CF7F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 3B 05 4C 9C 96 58: cmp eax, dword ptr [0x58969c4c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 17: je 0x5886cfa9
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 04 78 90 58: mov eax, dword ptr [0x58907804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        test dword ptr [ecx + 350h], eax
        ; Exact mapped bytes 75 07: jne 0x5886cfa9
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 80 81 00 00: call 0x58875127
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], eax
        pop esi
        pop ebp
        ret
    }
}
