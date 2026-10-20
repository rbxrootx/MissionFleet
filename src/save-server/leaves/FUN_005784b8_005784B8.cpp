// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005784B8 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_005784b8_005784B8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58faa7h
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
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e4h
        mov dword ptr [ebp - 18h], eax
        push 0b3dh
        push 67cd14h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 68 1D F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 54 2A FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 8000ffffh
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 38h], eax
        push 0b46h
        push 67cd14h
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 33 1D F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 7
        lea edi, [ebp - 34h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        xor eax, eax
        cmp dword ptr [ebp - 40h], 0
        sete al
        mov dword ptr [ebp - 14h], eax
        mov ecx, 7
        lea esi, [ebp - 34h]
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes EB 39: jmp 0x5785a3
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 19 1C F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1c
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57858f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4dh
        push 67cd14h
        ; Exact mapped bytes E8 B6 07 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57858f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
