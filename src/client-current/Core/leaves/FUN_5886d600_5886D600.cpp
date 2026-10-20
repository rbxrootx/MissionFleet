// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D600 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5886d600_5886D600() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        xor eax, eax
        push esi
        push edi
        push dword ptr [ebp + 18h]
        lea edi, [ebp - 0ch]
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        lea eax, [ebp - 0ch]
        push eax
        mov eax, dword ptr [ebp + 8]
        push 0
        push ebx
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 19 C6 00 00: call 0x58879c49
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 24h]
        mov edi, dword ptr [ebp + 10h]
        xor ecx, ecx
        push dword ptr [ebp + 20h]
        cmp dword ptr [ebp - 0ch], 2dh
        mov esi, dword ptr [ebp + 0ch]
        push eax
        lea eax, [ebp - 0ch]
        sete cl
        push eax
        mov eax, dword ptr [ebp - 8]
        add eax, ebx
        push eax
        mov eax, edi
        sub eax, ecx
        cmp edi, -1
        cmove eax, edi
        push eax
        lea eax, [ecx + esi]
        push eax
        ; Exact mapped bytes E8 EC C4 00 00: call 0x58879b50
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 38h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5886d670
        __asm _emit 0x74
        __asm _emit 0x05
        mov byte ptr [esi], 0
        ; Exact mapped bytes EB 14: jmp 0x5886d684
        __asm _emit 0xeb
        __asm _emit 0x14
        push dword ptr [ebp + 24h]
        lea eax, [ebp - 0ch]
        push 0
        push eax
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 08 00 00 00: call 0x5886d689
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
