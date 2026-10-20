// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF530 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_100ff530_100FF530() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 64h]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 7E 3F: jle 0x100ff57c
        __asm _emit 0x7e
        __asm _emit 0x3f
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov edx, eax
        sub edx, edi
        cmp edx, ecx
        ; Exact mapped bytes 7D 04: jge 0x100ff54e
        __asm _emit 0x7d
        __asm _emit 0x04
        mov edi, eax
        sub edi, ecx
        mov ecx, dword ptr [esi + 30h]
        sub eax, edi
        test ecx, ecx
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 74 14: je 0x100ff56e
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x100ff56e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, esi
        ; Exact mapped bytes E8 6B 02 00 00: call 0x100ff7e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
