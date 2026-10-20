// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB820 .. +0x65 bytes.
extern "C" __declspec(naked) void ___lc_lctostr_004BB820() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 10 E6 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 40: movsx eax, byte ptr [edx + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x40
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4bb858
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 40h
        push ecx
        push 58cd2ch
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 1B FE FF FF: call 0x4bb670
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 88 80 00 00 00: movsx ecx, byte ptr [eax + 0x80]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x4bb883
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        add edx, 80h
        push edx
        push 58cd28h
        push 2
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 FD FF FF: call 0x4bb670
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop ebp
        ret
    }
}
