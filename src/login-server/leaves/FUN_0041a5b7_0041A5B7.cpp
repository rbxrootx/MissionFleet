// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A5B7 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_0041a5b7_0041A5B7() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 10h]
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x41a5c9
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [eax], 0
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edi - 0a0h]
        lea esi, [edi - 0a0h]
        push 440268h
        ; Exact mapped bytes E8 FC D3 01 00: call 0x4379de
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x41a5ed
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 3C: jmp 0x41a629
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [esi]
        add edi, 0ffffff70h
        push edi
        push dword ptr [ebp + 14h]
        mov esi, dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 18 C4 43 00: call dword ptr [0x43c418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 18h]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 2C C5 43 00: call dword ptr [0x43c52c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        and dword ptr [eax + 4], 0
        test esi, esi
        ; Exact mapped bytes 74 03: je 0x41a61c
        __asm _emit 0x74
        __asm _emit 0x03
        mov esi, dword ptr [esi + 1ch]
        and dword ptr [eax + 0ch], 0
        and dword ptr [eax + 10h], 0
        mov dword ptr [eax + 8], esi
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
