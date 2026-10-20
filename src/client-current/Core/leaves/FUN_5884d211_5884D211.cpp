// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D211 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_5884d211_5884D211() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 0C 24 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        cmp esi, dword ptr [eax + 24h]
        ; Exact mapped bytes 75 0E: jne 0x5884d230
        __asm _emit 0x75
        __asm _emit 0x0e
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes E8 FC 23 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 24h], esi
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes E8 F1 23 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 24h]
        add ecx, 4
        ; Exact mapped bytes EB 07: jmp 0x5884d244
        __asm _emit 0xeb
        __asm _emit 0x07
        cmp esi, eax
        ; Exact mapped bytes 74 0B: je 0x5884d24c
        __asm _emit 0x74
        __asm _emit 0x0b
        lea ecx, [eax + 4]
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5884d253
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB F1: jmp 0x5884d23d
        __asm _emit 0xeb
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 4]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB DA: jmp 0x5884d22d
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact mapped bytes E8 B8 54 01 00: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
