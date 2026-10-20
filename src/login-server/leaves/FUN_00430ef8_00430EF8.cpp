// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430EF8 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00430ef8_00430EF8() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov ebx, ecx
        lea eax, [ebp + 0ch]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 03 FB FF FF: call 0x430a11
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x430f17
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 3D: jmp 0x430f54
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 435e85h
        mov ecx, 44f614h
        ; Exact mapped bytes E8 22 5F 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        mov esi, eax
        ; Exact mapped bytes 74 03: je 0x430f2f
        __asm _emit 0x74
        __asm _emit 0x03
        mov edi, dword ptr [edi + 1ch]
        push dword ptr [esi + 8]
        mov eax, dword ptr [ebp + 8]
        push dword ptr [esi + 4]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 17 00 00 00: call 0x430f5b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x430f51
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, ebx
        ; Exact mapped bytes E8 F0 E2 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 03: jmp 0x430f54
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [esi + 4]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
