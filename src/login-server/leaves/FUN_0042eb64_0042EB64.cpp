// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EB64 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0042eb64_0042EB64() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3E 71 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 1038h]
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x42ebb2
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x42ebb2
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 4ch]
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x42eb97
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edi, dword ptr [ecx]
        push eax
        push edx
        push esi
        ; Exact mapped bytes FF 57 1C: call dword ptr [edi + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes EB 0A: jmp 0x42eba1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push eax
        push dword ptr [esi + 40h]
        push esi
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x42ebb2
        __asm _emit 0x75
        __asm _emit 0x0d
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 6F FF FF FF: call 0x42eb1d
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x42ebe7
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, esi
        ; Exact mapped bytes E8 86 06 00 00: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 26: je 0x42ebe5
        __asm _emit 0x74
        __asm _emit 0x26
        test byte ptr [esi + 25h], 1
        ; Exact mapped bytes 74 20: je 0x42ebe5
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        push 0
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 94 C4 43 00: call dword ptr [0x43c494]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 00 07 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42ebe5
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 AD F7 FF FF: call 0x42e390
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
