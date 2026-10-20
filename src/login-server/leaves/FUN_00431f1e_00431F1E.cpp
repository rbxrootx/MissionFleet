// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431F1E .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_00431f1e_00431F1E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 98h]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x431fc4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 20 C2 43 00: mov ebx, dword ptr [0x43c220]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        movzx ecx, word ptr [eax + 2]
        push dword ptr [ebp + 8]
        add ecx, eax
        push ecx
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 70: jne 0x431fc4
        __asm _emit 0x75
        __asm _emit 0x70
        lea eax, [ebp - 4]
        push edi
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 6E FF FF: call 0x428e08
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x431fc4
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [esi + 94h]
        cmp eax, edi
        ; Exact mapped bytes 74 06: je 0x431f75
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 00 2B 00 00: call 0x434a75
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push edi
        push edi
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 4]
        push edi
        ; Exact mapped bytes E8 7E 6E FF FF: call 0x428e02
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 42h
        ; Exact mapped bytes FF 15 1C C2 43 00: call dword ptr [0x43c21c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 2
        push edi
        push eax
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 4]
        push edi
        ; Exact mapped bytes E8 5C 6E FF FF: call 0x428e02
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 11: je 0x431fbc
        __asm _emit 0x74
        __asm _emit 0x11
        push dword ptr [esi + 94h]
        ; Exact mapped bytes E8 BF 2A 00 00: call 0x434a75
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 94h], edi
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 6E FF FF: call 0x428dfc
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
