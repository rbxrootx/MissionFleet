// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419DBB .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_00419dbb_00419DBB() {
    __asm {
        mov eax, 43ae08h
        ; Exact mapped bytes E8 43 58 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esp
        push -14h
        push dword ptr [esi + 20h]
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        and dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [esi]
        push ecx
        push 2
        push 0fffffdf8h
        mov ecx, esi
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 66 83 7D E8 01: cmp word ptr [ebp - 0x18], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 04: jne 0x419e03
        __asm _emit 0x75
        __asm _emit 0x04
        or byte ptr [ebp - 13h], 2
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
