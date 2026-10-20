// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CF4E .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5886cf4e_5886CF4E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 10h]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi]
        cmp ecx, dword ptr [eax*4 + 58969984h]
        ; Exact mapped bytes 74 17: je 0x5886cf7c
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
        ; Exact mapped bytes 75 07: jne 0x5886cf7c
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 AC 92 00 00: call 0x58876226
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], eax
        pop esi
        pop ebp
        ret
    }
}
