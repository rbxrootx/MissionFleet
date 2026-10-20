// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FCC4 .. +0x79 bytes.
extern "C" __declspec(naked) void _HasBlankItems_COleDocument__QBEHXZ_0054FCC4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 100h
        push 67bf90h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 80 A5 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 40: je 0x54fd37
        __asm _emit 0x74
        __asm _emit 0x40
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 106h
        push 67bf90h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 41 A5 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x54fd35
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x54fd39
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB BA: jmp 0x54fcf1
        __asm _emit 0xeb
        __asm _emit 0xba
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
