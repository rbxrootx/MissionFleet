// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A202 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_5886a202_5886A202() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        cmp dword ptr [esi + 8], ebx
        ; Exact mapped bytes 75 50: jne 0x5886a263
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 4]
        lea eax, [ecx - 2]
        cmp eax, 1
        ; Exact mapped bytes 77 45: ja 0x5886a263
        __asm _emit 0x77
        __asm _emit 0x45
        push ecx
        push dword ptr [esi]
        ; Exact mapped bytes E8 7C 01 00 00: call 0x5886a3a2
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 37: je 0x5886a263
        __asm _emit 0x74
        __asm _emit 0x37
        push edi
        push dword ptr [esi + 4]
        mov edi, dword ptr [ebp + 8]
        push dword ptr [esi]
        push 40h
        push edi
        ; Exact mapped bytes E8 33 BD FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x5886a269
        __asm _emit 0x75
        __asm _emit 0x25
        push dword ptr [esi + 4]
        lea ecx, [edi + 120h]
        push dword ptr [esi]
        push 55h
        push ecx
        ; Exact mapped bytes E8 19 BD FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop edi
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x5886a269
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5886a265
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop esi
        pop ebx
        pop ebp
        ret
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 66 6D FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
