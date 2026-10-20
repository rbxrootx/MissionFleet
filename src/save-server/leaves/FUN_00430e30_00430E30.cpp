// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430E30 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00430e30_00430E30() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi]
        sub eax, edi
        mov edi, dword ptr [esp + 14h]
        sar eax, 1
        cmp edi, eax
        ; Exact mapped bytes 76 0D: jbe 0x430e52
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 51 4F 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 10h]
        sub eax, edx
        sar eax, 1
        sub eax, edi
        mov dword ptr [esp + 14h], eax
        cmp eax, ecx
        lea eax, [esp + 14h]
        ; Exact mapped bytes 72 04: jb 0x430e71
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 10h]
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x430e8f
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [eax + eax]
        lea esi, [edx + edi*2]
        mov edi, dword ptr [esp + 0ch]
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
