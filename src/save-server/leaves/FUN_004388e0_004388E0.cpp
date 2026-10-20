// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004388E0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_004388e0_004388E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x438906
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 9D D4 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x43892f
        __asm _emit 0x73
        __asm _emit 0x08
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 06: jmp 0x438935
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 4E: je 0x4389b0
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 08: jne 0x43897f
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 17: jmp 0x438996
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 D0 D2 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
