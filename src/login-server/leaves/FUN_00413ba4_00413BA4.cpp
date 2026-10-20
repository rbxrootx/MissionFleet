// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413BA4 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00413ba4_00413BA4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 0b4h]
        lea edi, [esi + 0b4h]
        ; Exact mapped bytes E8 56 9D 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2ch]
        and dword ptr [edi], 0
        test ah, 2
        pop ecx
        ; Exact mapped bytes 74 26: je 0x413bf1
        __asm _emit 0x74
        __asm _emit 0x26
        test ah, 4
        ; Exact mapped bytes 75 21: jne 0x413bf1
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [esi + 100h], 0
        ; Exact mapped bytes 74 18: je 0x413bf1
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        push esi
        push 10h
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 89 18 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 44: call dword ptr [eax + 0x44]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x44
        and dword ptr [esi + 100h], 0
        pop edi
        pop esi
        leave
        ret
    }
}
