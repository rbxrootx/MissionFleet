// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869074 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_58869074_58869074() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        push ebx
        push edi
        ; Exact mapped bytes 74 40: je 0x588690c1
        __asm _emit 0x74
        __asm _emit 0x40
        push 55h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 03 FF FF: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        pop ecx
        pop ecx
        cmp ebx, 55h
        ; Exact mapped bytes 73 2D: jae 0x588690c1
        __asm _emit 0x73
        __asm _emit 0x2d
        lea ecx, [ebx*2 + 2]
        push ecx
        ; Exact mapped bytes E8 2F 3E 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 19: je 0x588690c1
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebx + 1]
        push ecx
        push dword ptr [ebp + 8]
        push ecx
        push edi
        ; Exact mapped bytes E8 BA CE FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x588690c7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, edi
        ; Exact mapped bytes EB 02: jmp 0x588690c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop ebx
        pop ebp
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 06 7F FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
