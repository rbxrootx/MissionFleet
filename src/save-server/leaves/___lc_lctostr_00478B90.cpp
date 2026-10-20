// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478B90 .. +0x65 bytes.
extern "C" __declspec(naked) void ___lc_lctostr_00478B90() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D0 CD FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcd
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
        ; Exact mapped bytes 74 1A: je 0x478bc8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 40h
        push ecx
        push 63f394h
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 1B FE FF FF: call 0x4789e0
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
        ; Exact mapped bytes 74 1D: je 0x478bf3
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        add edx, 80h
        push edx
        push 63f390h
        push 2
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 FD FF FF: call 0x4789e0
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
