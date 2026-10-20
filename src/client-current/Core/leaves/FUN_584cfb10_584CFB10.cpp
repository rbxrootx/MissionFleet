// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFB10 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_584cfb10_584CFB10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 84 FB FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 FF FF FF: call 0x584cfa80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x584cfb64
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D1 83 FB FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 B8 FE FF FF: call 0x584cfa10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D A9 FD FF: call 0x584aa4c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 14h], 7
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        lea ecx, [ebp - 2]
        push ecx
        mov edx, 2
        imul eax, edx, 0
        add eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4D 00 00 00: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
