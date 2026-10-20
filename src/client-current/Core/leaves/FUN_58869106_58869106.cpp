// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869106 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_58869106_58869106() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 DE FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x5886916b
        __asm _emit 0x75
        __asm _emit 0x46
        lea eax, [edi + 80h]
        ; Exact mapped bytes 66 39 30: cmp word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x30
        ; Exact mapped bytes 74 16: je 0x58869146
        __asm _emit 0x74
        __asm _emit 0x16
        push eax
        push 588c4e70h
        push 2
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 05 00 00: call 0x588696b8
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        add edi, 100h
        ; Exact mapped bytes 66 39 37: cmp word ptr [edi], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x37
        ; Exact mapped bytes 74 16: je 0x58869167
        __asm _emit 0x74
        __asm _emit 0x16
        push edi
        push 588c4e74h
        push 2
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 05 00 00: call 0x588696b8
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        pop edi
        pop esi
        pop ebp
        ret
        push esi
        push esi
        push esi
        push esi
        push esi
        ; Exact mapped bytes E8 64 7E FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
