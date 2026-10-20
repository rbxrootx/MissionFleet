// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E09C0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_587e09c0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push 0
        push esi
        mov edi, ecx
        mov dword ptr [esi + 0ech], 1
        ; Exact mapped bytes E8 16 86 FF FF: call 0x587d8ff0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x587e09e7
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, edi
        ; Exact mapped bytes E8 9B A3 FF FF: call 0x587dad80
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 47: jmp 0x587e0a2e
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [esi + 0ce0h]
        mov cl, byte ptr [edi + 61h]
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x587e0a2e
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes EB 0A: jmp 0x587e0a00
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0cc0h]
        cmp byte ptr [edx + 35ch], cl
        ; Exact mapped bytes 75 09: jne 0x587e0a17
        __asm _emit 0x75
        __asm _emit 0x09
        cmp dword ptr [eax + 0ech], 0
        ; Exact mapped bytes 74 0C: je 0x587e0a23
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0ce0h]
        test eax, eax
        ; Exact mapped bytes 75 DF: jne 0x587e0a00
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB 0B: jmp 0x587e0a2e
        __asm _emit 0xeb
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587e0a2e
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 F2 A1 FF FF: call 0x587dac20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 49 EB FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0dd4h]
    }
}
