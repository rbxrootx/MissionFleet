// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433B18 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00433b18_00433B18() {
    __asm {
        push ebx
        push esi
        push edi
        or ebx, 0ffffffffh
        ; Exact mapped bytes E8 A8 E4 FF FF: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 89 21 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 1ch]
        mov edi, dword ptr [eax + 4]
        push dword ptr [esp + 1ch]
        push dword ptr [esp + 1ch]
        push dword ptr [esp + 1ch]
        ; Exact mapped bytes E8 4F 37 00 00: call 0x437291
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x433b81
        __asm _emit 0x74
        __asm _emit 0x3b
        test edi, edi
        ; Exact mapped bytes 74 0E: je 0x433b58
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [edi]
        mov ecx, edi
        ; Exact mapped bytes FF 90 84 00 00 00: call dword ptr [eax + 0x84]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x433b81
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x433b78
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x433b6f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        ; Exact mapped bytes EB 07: jmp 0x433b7f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ebx, eax
        ; Exact mapped bytes E8 C7 56 00 00: call 0x43924d
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
