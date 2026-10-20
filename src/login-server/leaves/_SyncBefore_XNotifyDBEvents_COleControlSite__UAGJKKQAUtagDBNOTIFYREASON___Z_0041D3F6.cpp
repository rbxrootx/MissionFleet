// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D3F6 .. +0x4A bytes.
extern "C" __declspec(naked) void _SyncBefore_XNotifyDBEvents_COleControlSite__UAGJKKQAUtagDBNOTIFYREASON___Z_0041D3F6() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        push edi
        mov edi, dword ptr [ebp + 8]
        push 3
        push esi
        push dword ptr [ebp + 10h]
        mov ecx, edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 26 01 00 00: call 0x41d537
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 25: jl 0x41d43a
        __asm _emit 0x7c
        __asm _emit 0x25
        mov esi, dword ptr [esi]
        cmp esi, 2
        ; Exact mapped bytes 74 0A: je 0x41d426
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp esi, 3
        ; Exact mapped bytes 74 05: je 0x41d426
        __asm _emit 0x74
        __asm _emit 0x05
        cmp esi, 14h
        ; Exact mapped bytes 75 12: jne 0x41d438
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [edi - 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x41d438
        __asm _emit 0x74
        __asm _emit 0x0b
        test byte ptr [ebp + 0ch], 80h
        ; Exact mapped bytes 74 05: je 0x41d438
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
