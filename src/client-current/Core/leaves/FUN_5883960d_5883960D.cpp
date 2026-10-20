// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883960D .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_5883960d_5883960D() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 5bd4h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58839628
        __asm _emit 0x74
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes FF 15 B0 42 89 58: call dword ptr [0x588942b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 5bd4h], 0
        mov eax, dword ptr [esi + 5bd0h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58839640
        __asm _emit 0x74
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 5bd0h], 0
        mov byte ptr [esi + 5bd8h], 0
        pop esi
        ret
    }
}
