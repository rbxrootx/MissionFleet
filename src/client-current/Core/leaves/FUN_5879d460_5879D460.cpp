// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879D460 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_5879d460_5879D460() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ff5dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        cmp dword ptr [edi + 48h], 0
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x5879d551
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 FE D2 FF FF: call 0x5879a7a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5879d551
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [edi + 94h], 2
        ; Exact mapped bytes 75 07: jne 0x5879d4ba
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 B6 00 00 00: call 0x5879d570
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 28h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 49 CF FF FF: call 0x5879a410
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0fh
        lea esi, [ebp - 28h]
        mov dword ptr [ebp - 4], 0
        cmova esi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0fh
        lea ecx, [ebp - 28h]
        mov eax, dword ptr [ebp - 18h]
        cmova ecx, dword ptr [ebp - 28h]
        add eax, ecx
        cmp esi, eax
        ; Exact mapped bytes 74 4E: je 0x5879d542
        __asm _emit 0x74
        __asm _emit 0x4e
        movzx eax, byte ptr [esi]
        push eax
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 B0 D8 FF FF: call 0x5879adb0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp byte ptr [esi], 0ah
        ; Exact mapped bytes 75 37: jne 0x5879d53f
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [ebp - 14h], 0fh
        lea ecx, [ebp - 28h]
        mov eax, dword ptr [ebp - 18h]
        lea edx, [esi + 1]
        cmova ecx, dword ptr [ebp - 28h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 74 20: je 0x5879d53f
        __asm _emit 0x74
        __asm _emit 0x20
        cmp byte ptr [edx], 2fh
        ; Exact mapped bytes 75 1B: jne 0x5879d53f
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [edi + 28h], 0fh
        lea ecx, [edi + 14h]
        ; Exact mapped bytes 76 03: jbe 0x5879d530
        __asm _emit 0x76
        __asm _emit 0x03
        mov ecx, dword ptr [edi + 14h]
        push dword ptr [edi + 24h]
        push ecx
        push dword ptr [edi + 4]
        ; Exact mapped bytes E8 14 DB FF FF: call 0x5879b050
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        inc esi
        ; Exact mapped bytes EB 9E: jmp 0x5879d4e0
        __asm _emit 0xeb
        __asm _emit 0x9e
        and byte ptr [edi + 94h], 0fdh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DF C7 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 E8 3A 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
