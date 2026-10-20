// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F929 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_5884f929_5884F929() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 20h], 0
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 10: je 0x5884f94b
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp + 20h]
        push ebx
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 FF FF FF: call 0x5884f88d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp dword ptr [ebp + 2ch], 0
        mov eax, edi
        push dword ptr [ebp + 8]
        cmovne eax, dword ptr [ebp + 2ch]
        push eax
        ; Exact mapped bytes E8 0A D8 FF FF: call 0x5884d168
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 24h]
        push dword ptr [esi]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push edi
        ; Exact mapped bytes E8 78 09 00 00: call 0x588502e7
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        inc eax
        push eax
        push dword ptr [ebp + 18h]
        push edi
        ; Exact mapped bytes E8 00 12 00 00: call 0x58850b7d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push dword ptr [ebp + 28h]
        push dword ptr [ebx + 0ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD 06 00 00: call 0x58850074
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 38h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5884f9a5
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        push eax
        ; Exact mapped bytes E8 93 D7 FF FF: call 0x5884d138
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
