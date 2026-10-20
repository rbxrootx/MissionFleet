// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7B30 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_587e7b30() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx + 398h]
        xor eax, 0aaaaaaaah
        add eax, eax
        sub eax, dword ptr [edx + 63c4h]
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 0F: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 1E: jne 0x587e7b73
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [edx + 63bch], 0
        ; Exact mapped bytes 74 15: je 0x587e7b73
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [edx + 398h]
        xor eax, 0aaaaaaaah
        add eax, eax
        add eax, eax
        sub eax, dword ptr [edx + 63c4h]
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x587e7b79
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 10b7ch]
        push eax
        ; Exact mapped bytes E8 BB 6B F9 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        ret
    }
}
