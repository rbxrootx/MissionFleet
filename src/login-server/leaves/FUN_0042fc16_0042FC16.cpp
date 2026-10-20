// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FC16 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_0042fc16_0042FC16() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push edi
        push dword ptr [ebp + 0ch]
        mov ebx, ecx
        push dword ptr [ebp + 8]
        push dword ptr [ebx + 1ch]
        ; Exact mapped bytes E8 64 4D 00 00: call 0x43498f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 4D: je 0x42fc7e
        __asm _emit 0x74
        __asm _emit 0x4d
        push esi
        push edi
        ; Exact mapped bytes FF 15 E0 C4 43 00: call dword ptr [0x43c4e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 10h]
        movzx eax, ax
        test esi, esi
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 32: je 0x42fc78
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [esi], 28h
        ; Exact mapped bytes 72 2D: jb 0x42fc78
        __asm _emit 0x72
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 1ch]
        or dword ptr [esi + 4], 1
        or dword ptr [esi + 24h], 0ffffffffh
        push 0
        push 0
        push 87h
        push edi
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], edi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test ah, 20h
        ; Exact mapped bytes 75 07: jne 0x42fc78
        __asm _emit 0x75
        __asm _emit 0x07
        or dword ptr [esi + 4], 80000002h
        mov eax, dword ptr [ebp + 0ch]
        pop esi
        ; Exact mapped bytes EB 03: jmp 0x42fc81
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
