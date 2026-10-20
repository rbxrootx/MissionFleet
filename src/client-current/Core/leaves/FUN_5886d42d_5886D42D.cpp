// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D42D .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_5886d42d_5886D42D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        lea eax, [ebp - 0ch]
        push esi
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        lea esi, [ebx + 1]
        push eax
        mov eax, dword ptr [ebp + 8]
        push 1
        push esi
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 F2 C7 00 00: call 0x58879c49
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 2ch]
        xor edx, edx
        cmp dword ptr [ebp - 0ch], 2dh
        push dword ptr [ebp + 28h]
        sete dl
        xor ecx, ecx
        push eax
        test ebx, ebx
        lea eax, [ebp - 0ch]
        push eax
        mov eax, dword ptr [ebp + 10h]
        setg cl
        sub eax, ecx
        sub eax, edx
        cmp dword ptr [ebp + 10h], -1
        push esi
        cmove eax, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 0ch]
        push eax
        lea eax, [ecx + edx]
        add eax, esi
        push eax
        ; Exact mapped bytes E8 BF C6 00 00: call 0x58879b50
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 38h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5886d49d
        __asm _emit 0x74
        __asm _emit 0x05
        mov byte ptr [esi], 0
        ; Exact mapped bytes EB 1C: jmp 0x5886d4b9
        __asm _emit 0xeb
        __asm _emit 0x1c
        push dword ptr [ebp + 2ch]
        lea eax, [ebp - 0ch]
        push 0
        push eax
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push ebx
        push dword ptr [ebp + 10h]
        push esi
        ; Exact mapped bytes E8 07 00 00 00: call 0x5886d4bd
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        pop esi
        pop ebx
        leave
        ret
    }
}
