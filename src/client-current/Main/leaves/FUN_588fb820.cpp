// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FB820 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_588fb820() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588fb834
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 78h]
        push eax
        ; Exact mapped bytes E8 6C 23 00 00: call 0x588fdba0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588fb845
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 7ch]
        push eax
        ; Exact mapped bytes E8 5B 23 00 00: call 0x588fdba0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
