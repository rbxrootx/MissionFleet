// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58819BC0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58819bc0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 F5 E5 0E 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 3C: je 0x58819c0c
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 7ch]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58819be2
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x58819be5
        __asm _emit 0xeb
        __asm _emit 0x03
        or ecx, 0ffffffffh
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58819bf7
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x58819bfa
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        push ecx
        mov ecx, dword ptr [esi + 30h]
        push eax
        movzx eax, word ptr [esi + 0a8h]
        push eax
        ; Exact mapped bytes E8 A4 F7 FF FF: call 0x588193b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
