// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798660 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_58798660_58798660() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889162dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 20h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C4 FC FF FF: call 0x58798360
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 7E 00: movq xmm0, qword ptr [eax]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes 66 0F D6 45 D4: movq qword ptr [ebp - 0x2c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xd4
        mov dword ptr [ebp - 24h], eax
        test al, al
        ; Exact mapped bytes 74 05: je 0x587986b4
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 78: jmp 0x5879872c
        __asm _emit 0xeb
        __asm _emit 0x78
        cmp dword ptr [esi + 4], 5555555h
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x58798745
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi]
        mov dword ptr [ebp - 1ch], esi
        push 30h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes E8 29 89 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [ebp - 18h], edi
        push dword ptr [ebp + 10h]
        lea esi, [edi + 10h]
        mov dword ptr [ebp - 4], 1
        mov ecx, esi
        mov dword ptr [ebp - 14h], esi
        ; Exact mapped bytes E8 56 00 00 00: call 0x58798750
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [esi + 8]
        add eax, 8
        mov byte ptr [ebp - 4], 2
        push eax
        ; Exact mapped bytes E8 43 03 00 00: call 0x58798a50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push edi
        push dword ptr [ebp - 28h]
        mov dword ptr [edi], ebx
        push dword ptr [ebp - 2ch]
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        ; Exact mapped bytes 66 C7 47 0C 00 00: mov word ptr [edi + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 0E 00 00: call 0x58799580
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 AE D0 FF: call 0x584a35c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
