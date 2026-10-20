// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857F1F .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_58857f1f_58857F1F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        push 14h
        push 1
        ; Exact mapped bytes E8 E0 72 01 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        xor edi, edi
        push edi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 D3 4C 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x58857f61
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 4], eax
        lea eax, [esi + 0ch]
        push eax
        push ecx
        push 4
        ; Exact mapped bytes FF 15 6C 42 89 58: call dword ptr [0x5889426c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], edi
        mov edi, esi
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 28 FF FF FF: call 0x58857e91
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        pop edi
        pop esi
        leave
        ret
    }
}
