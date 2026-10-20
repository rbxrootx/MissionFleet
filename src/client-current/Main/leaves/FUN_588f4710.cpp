// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4710 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_588f4710() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 10h]
        xor esi, esi
        ; Exact mapped bytes E8 82 83 ED FF: call 0x587ccaa0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        cmp eax, 0ffh
        ; Exact mapped bytes 7D 33: jge 0x588f475c
        __asm _emit 0x7d
        __asm _emit 0x33
        test eax, eax
        ; Exact mapped bytes 7E 2F: jle 0x588f475c
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov esi, dword ptr [esp + 0ch]
        push ebx
        push ebp
        lea ebp, [eax + eax*2]
        mov ebx, eax
        shl ebp, 7
        ; Exact mapped bytes EB 03: jmp 0x588f4740
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A8 FC FF FF: call 0x588f43f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 180h
        sub ebx, 1
        ; Exact mapped bytes 75 ED: jne 0x588f4740
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        mov eax, esi
        pop esi
    }
}
