// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878D1A .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58878d1a_58878D1A() {
    __asm {
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3F: je 0x58878d5f
        __asm _emit 0x74
        __asm _emit 0x3f
        test edi, edi
        ; Exact mapped bytes 74 33: je 0x58878d57
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [esi]
        sar edx, 6
        mov eax, dword ptr [esi]
        and eax, 3fh
        imul ecx, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov bl, byte ptr [eax + ecx + 28h]
        and bl, 0feh
        mov edx, dword ptr [esi]
        sar edx, 6
        mov eax, dword ptr [esi]
        and eax, 3fh
        imul ecx, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov byte ptr [eax + ecx + 28h], bl
        push dword ptr [esi]
        ; Exact mapped bytes E8 CC 0A 00 00: call 0x5887982a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
    }
}
