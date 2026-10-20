// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971A48 .. +0x5C bytes.
extern "C" __declspec(naked) void _Locinfo_ctor() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 18h], 10h
        push esi
        push edi
        ; Exact mapped bytes 72 05: jb 0x58971a5d
        __asm _emit 0x72
        __asm _emit 0x05
        mov esi, dword ptr [eax + 4]
        ; Exact mapped bytes EB 03: jmp 0x58971a60
        __asm _emit 0xeb
        __asm _emit 0x03
        lea esi, [eax + 4]
        push 0
        push 0
        ; Exact mapped bytes E8 49 BB 00 00: call 0x5897d5b2
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58971a74
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 5898c922h
        mov edi, dword ptr [ebp + 8]
        push eax
        lea ecx, [edi + 3ch]
        ; Exact mapped bytes E8 C0 36 DC FF: call 0x58735140
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x36
        __asm _emit 0xdc
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x58971a92
        __asm _emit 0x74
        __asm _emit 0x0e
        push esi
        push 0
        ; Exact mapped bytes E8 26 BB 00 00: call 0x5897d5b2
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58971a97
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 5898c978h
        push eax
        lea ecx, [edi + 58h]
        ; Exact mapped bytes E8 A0 36 DC FF: call 0x58735140
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x36
        __asm _emit 0xdc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ret
    }
}
