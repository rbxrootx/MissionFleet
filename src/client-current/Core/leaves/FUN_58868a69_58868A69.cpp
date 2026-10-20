// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868A69 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_58868a69_58868A69() {
    __asm {
        mov edi, edi
        push edi
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push -1
        ; Exact mapped bytes FF 35 58 74 90 58: push dword ptr [0x58907458]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        mov edi, eax
        ; Exact mapped bytes E8 2B 6D 00 00: call 0x5886f7ac
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58868a90
        __asm _emit 0x75
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        pop edi
        ret
        push ebx
        push esi
        push 364h
        push 1
        ; Exact mapped bytes E8 72 67 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 20: jne 0x58868ac6
        __asm _emit 0x75
        __asm _emit 0x20
        xor ebx, ebx
        push ebx
        ; Exact mapped bytes FF 35 58 74 90 58: push dword ptr [0x58907458]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 6C 00 00: call 0x5886f7ac
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 56 41 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push edi
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes EB 47: jmp 0x58868b0d
        __asm _emit 0xeb
        __asm _emit 0x47
        push esi
        ; Exact mapped bytes FF 35 58 74 90 58: push dword ptr [0x58907458]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 6C 00 00: call 0x5886f7ac
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x58868aed
        __asm _emit 0x75
        __asm _emit 0x17
        xor ebx, ebx
        push ebx
        ; Exact mapped bytes FF 35 58 74 90 58: push dword ptr [0x58907458]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 6C 00 00: call 0x5886f7ac
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 26 41 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 17: jmp 0x58868b04
        __asm _emit 0xeb
        __asm _emit 0x17
        push 58969984h
        push esi
        ; Exact mapped bytes E8 EA FD FF FF: call 0x588688e2
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 11 41 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ebx, esi
        push edi
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, ebx
        pop esi
        pop ebx
        pop edi
        ret
    }
}
