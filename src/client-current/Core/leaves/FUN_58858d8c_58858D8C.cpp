// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858D8C .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58858d8c_58858D8C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 B1 FF FF FF: call 0x58858d4b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 8]
        lea eax, [esi + 8]
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 20 00 00 00: call 0x58858dc8
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58858db9
        __asm _emit 0x74
        __asm _emit 0x0a
        and dword ptr [esi + 0ch], 0
        mov byte ptr [esi + 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58858dc2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov byte ptr [esi + 14h], 1
        xor eax, eax
        mov dword ptr [esi + 0ch], edi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
