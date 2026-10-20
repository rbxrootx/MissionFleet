// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588586BD .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_588586bd_588586BD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 9C FF FF FF: call 0x58858667
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 8]
        push esi
        lea eax, [edi + edi]
        push eax
        lea eax, [esi + 8]
        push eax
        ; Exact mapped bytes E8 20 00 00 00: call 0x588586fc
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588586ed
        __asm _emit 0x74
        __asm _emit 0x0a
        and dword ptr [esi + 0ch], 0
        mov byte ptr [esi + 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x588586f6
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
