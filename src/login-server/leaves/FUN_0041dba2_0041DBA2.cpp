// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DBA2 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0041dba2_0041DBA2() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        test ebx, ebx
        ; Exact mapped bytes 74 4E: je 0x41dbfb
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, ebx
        xor esi, esi
        mov edi, dword ptr [eax + 34h]
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x41dbd2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov esi, dword ptr [eax + 38h]
        test esi, esi
        ; Exact mapped bytes 75 13: jne 0x41dbd2
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 0A 17 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 DF: jne 0x41dbb1
        __asm _emit 0x75
        __asm _emit 0xdf
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x41dbfb
        __asm _emit 0x74
        __asm _emit 0x25
        test edi, edi
        ; Exact mapped bytes 75 21: jne 0x41dbfb
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 0C C4 43 00: call dword ptr [0x43c40c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E8 16 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x41dbfb
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 95 07 01 00: call 0x42e390
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
