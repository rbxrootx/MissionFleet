// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005245B9 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_005245b9_005245B9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        ; Exact mapped bytes E8 A0 4D F8 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40h], 8
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 B8 C9 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        ; Exact mapped bytes E8 4D C5 FC FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x524633
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        or ch, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 7ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
