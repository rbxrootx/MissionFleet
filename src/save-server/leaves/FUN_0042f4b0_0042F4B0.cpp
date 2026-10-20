// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F4B0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_0042f4b0_0042F4B0() {
    __asm {
        push -1
        push 58b9bbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov dword ptr [esp + 4], ecx
        mov esi, dword ptr [ecx]
        mov dword ptr [esp + 10h], 0
        test esi, esi
        ; Exact mapped bytes 74 53: je 0x42f52c
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ecx + 8]
        sub eax, esi
        sar eax, 1
        shl eax, 1
        cmp eax, 80h
        ; Exact mapped bytes 76 19: jbe 0x42f502
        __asm _emit 0x76
        __asm _emit 0x19
        push esi
        ; Exact mapped bytes E8 BA CF 09 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        pop esi
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
        dec eax
        push edi
        shr eax, 3
        push 685094h
        lea edi, [eax*4 + 685054h]
        ; Exact mapped bytes E8 E8 30 00 00: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov dword ptr [edi], esi
        ; Exact mapped bytes C7 05 94 50 68 00 00 00 00 00: mov dword ptr [0x685094], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov ecx, dword ptr [esp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
