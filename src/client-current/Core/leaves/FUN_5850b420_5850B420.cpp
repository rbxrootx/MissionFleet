// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B420 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5850b420_5850B420() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 E2 FF FF: call 0x58509640
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        push 20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 13 00 00: call 0x5850c760
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 40h], al
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 0D: jne 0x5850b468
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 0E 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx eax, byte ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5850b47c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 72 56 32 00: call 0x58830aeb
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x56
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
