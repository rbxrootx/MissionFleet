// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F860 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0042f860_0042F860() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 4]
        mov edx, dword ptr [edi]
        mov eax, esi
        sub eax, edx
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 77 33: ja 0x42f8ab
        __asm _emit 0x77
        __asm _emit 0x33
        lea ebx, [edx + ecx*2]
        cmp ebx, esi
        ; Exact mapped bytes 74 3B: je 0x42f8ba
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, esi
        sub eax, esi
        sar eax, 1
        inc eax
        ; Exact mapped bytes 74 0D: je 0x42f895
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, eax
        push eax
        push esi
        push ebx
        ; Exact mapped bytes E8 CE 63 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [edi + 4]
        sub esi, ebx
        sar esi, 1
        neg esi
        shl esi, 1
        add eax, esi
        mov dword ptr [edi + 4], eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        sub ecx, eax
        push edx
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 E6 32 00 00: call 0x432ba0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
