// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798E50 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58798e50_58798E50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891760h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        lea ecx, [edi + 8]
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 5B 1A 00 00: call 0x5879a8e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 8], 0
        mov dword ptr [edi + 0ch], 0
        ; Exact mapped bytes E8 35 00 00 00: call 0x58798ed0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x58798eb3
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [edi + 4]
        and al, 3
        cmp al, 1
        ; Exact mapped bytes 75 09: jne 0x58798eb3
        __asm _emit 0x75
        __asm _emit 0x09
        push ecx
        ; Exact mapped bytes E8 50 07 0C 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
