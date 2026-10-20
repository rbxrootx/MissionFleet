// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043672F .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_0043672f_0043672F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        lea eax, [ebp - 4]
        push edi
        mov esi, 2001fh
        xor edi, edi
        push eax
        push esi
        push edi
        mov ebx, ecx
        push 43e8bch
        push 80000001h
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 0ch], edi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes FF 15 0C C0 43 00: call dword ptr [0x43c00c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x4367a1
        __asm _emit 0x75
        __asm _emit 0x3a
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 8]
        push eax
        push edi
        push esi
        push edi
        push edi
        push edi
        push dword ptr [ebx + 7ch]
        ; Exact mapped bytes 8B 1D 04 C0 43 00: mov ebx, dword ptr [0x43c004]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x4367a1
        __asm _emit 0x75
        __asm _emit 0x1b
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        mov eax, dword ptr [ebp - 14h]
        push edi
        push esi
        push edi
        push edi
        push edi
        push dword ptr [eax + 90h]
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [ebp - 4], edi
        ; Exact mapped bytes 8B 35 00 C0 43 00: mov esi, dword ptr [0x43c000]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x4367b1
        __asm _emit 0x74
        __asm _emit 0x05
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp dword ptr [ebp - 8], edi
        ; Exact mapped bytes 74 05: je 0x4367bb
        __asm _emit 0x74
        __asm _emit 0x05
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
