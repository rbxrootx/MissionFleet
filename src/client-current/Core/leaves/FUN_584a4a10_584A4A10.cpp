// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A4A10 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_584a4a10_584A4A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584a4a2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 39: jge 0x584a4a6a
        __asm _emit 0x7d
        __asm _emit 0x39
        imul ecx, dword ptr [ebp - 4], 38h
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx + 1ch], 0
        ; Exact mapped bytes 74 29: je 0x584a4a68
        __asm _emit 0x74
        __asm _emit 0x29
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F5 C5 38 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc5
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        imul ecx, dword ptr [ebp - 4], 38h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 1ch], 0
        ; Exact mapped bytes EB B8: jmp 0x584a4a22
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e0h
        ; Exact mapped bytes E8 78 FF FF FF: call 0x584a49f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
