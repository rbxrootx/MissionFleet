// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6F60 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_587a6f60() {
    __asm {
        push esi
        push edi
        lea esi, [ecx + 8]
        mov edi, 20h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x587a6f99
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x587a6f93
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi], 0
        mov dword ptr [esi], 0
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 CF: jne 0x587a6f70
        __asm _emit 0x75
        __asm _emit 0xcf
        pop edi
        pop esi
        ret
    }
}
