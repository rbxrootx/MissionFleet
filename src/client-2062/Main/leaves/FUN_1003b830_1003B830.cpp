// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003B830 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_1003b830_1003B830() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 30ch]
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x1003b88f
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [edi + 0e8h]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 41 86 0C 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x00
        dec esi
        cmp eax, esi
        ; Exact mapped bytes 7D 3B: jge 0x1003b88f
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov ecx, dword ptr [edi + 0e8h]
        push ebx
        ; Exact mapped bytes E8 50 8D 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        lea esi, [edi + 0ech]
        mov ebx, 6
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 3E 8D 0C 00: call 0x101045b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x1003b86b
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, edi
        ; Exact mapped bytes E8 01 CD FF FF: call 0x10038580
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 3A CE FF FF: call 0x100386c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        pop edi
        mov eax, 1
        pop esi
        ret
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}
