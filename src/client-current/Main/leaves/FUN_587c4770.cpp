// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4770 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_587c4770() {
    __asm {
        push ecx
        push edi
        mov edi, dword ptr [ecx]
        test edi, edi
        ; Exact mapped bytes 74 3F: je 0x587c47b7
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        lea ecx, [esp + 8]
        ; Exact mapped bytes E8 7D CF 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 76 09: jbe 0x587c4793
        __asm _emit 0x76
        __asm _emit 0x09
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c4793
        __asm _emit 0x73
        __asm _emit 0x04
        dec eax
        mov dword ptr [edi + 4], eax
        push esi
        mov esi, dword ptr [edi + 4]
        neg esi
        sbb esi, esi
        not esi
        lea ecx, [esp + 8]
        and esi, edi
        ; Exact mapped bytes E8 80 CF 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x587c47b6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        pop edi
        pop ecx
        ret
    }
}
