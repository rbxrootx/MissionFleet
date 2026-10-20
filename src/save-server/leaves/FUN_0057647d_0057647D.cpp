// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057647D .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_0057647d_0057647D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f9aeh
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
        sub eax, 0d8h
        mov dword ptr [ebp - 18h], eax
        push 812h
        push 67cd14h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 A3 3D F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8F 4A FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x576532
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9C 3C F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3c
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57650c
        __asm _emit 0x75
        __asm _emit 0x14
        push 81ch
        push 67cd14h
        ; Exact mapped bytes E8 39 28 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57650c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
