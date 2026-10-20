// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575D41 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_00575d41_00575D41() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f990h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d4h
        mov dword ptr [ebp - 18h], eax
        push 737h
        push 67cd14h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 DF 44 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x44
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4C 0C FE FF: call 0x5569dc
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 40 01 00 00: call dword ptr [edx + 0x140]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x575df6
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D8 43 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x575dd0
        __asm _emit 0x75
        __asm _emit 0x14
        push 740h
        push 67cd14h
        ; Exact mapped bytes E8 75 2F FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575dd0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x575dab
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 67 62 FD FF: call 0x54c046
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AE 41 F6 FF: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0xff
    }
}
