// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004257C8 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_004257c8_004257C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea eax, [ebp - 28h]
        push esi
        push eax
        lea eax, [ebp - 10h]
        push eax
        mov eax, dword ptr [ebp + 8]
        push ecx
        push ecx
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 62 1C 00 00: call 0x427448
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        lea eax, [ebp - 10h]
        push eax
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [esi + 1]
        push eax
        xor eax, eax
        cmp dword ptr [ebp - 10h], 2dh
        sete al
        xor ecx, ecx
        test esi, esi
        setg cl
        add edx, eax
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 C3 1B 00 00: call 0x4273d1
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push 0
        push eax
        push dword ptr [ebp + 14h]
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 09 00 00 00: call 0x425829
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add esp, 30h
        pop esi
        leave
        ret
    }
}
