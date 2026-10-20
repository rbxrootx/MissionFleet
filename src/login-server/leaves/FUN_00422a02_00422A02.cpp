// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422A02 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_00422a02_00422A02() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 88 11 45 00: cmp dword ptr [0x451188], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 75 05: jne 0x422a19
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A2 DD FF FF: call 0x4207bb
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, 44fd60h
        push 104h
        push esi
        push ebx
        ; Exact mapped bytes FF 15 74 C2 43 00: call dword ptr [0x43c274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 13 45 00: mov eax, dword ptr [0x4513c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 E8 FC 44 00: mov dword ptr [0x44fce8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        mov edi, esi
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 02: je 0x422a3e
        __asm _emit 0x74
        __asm _emit 0x02
        mov edi, eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 4]
        push eax
        push ebx
        push ebx
        push edi
        ; Exact mapped bytes E8 4D 00 00 00: call 0x422a9b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [eax + ecx*4]
        push eax
        ; Exact mapped bytes E8 87 C9 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 18h
        cmp esi, ebx
        ; Exact mapped bytes 75 08: jne 0x422a6e
        __asm _emit 0x75
        __asm _emit 0x08
        push 8
        ; Exact mapped bytes E8 CA C5 FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 4]
        push eax
        mov eax, dword ptr [ebp - 4]
        lea eax, [esi + eax*4]
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 17 00 00 00: call 0x422a9b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 14h
        dec eax
        ; Exact mapped bytes 89 35 D0 FC 44 00: mov dword ptr [0x44fcd0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes A3 CC FC 44 00: mov dword ptr [0x44fccc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
