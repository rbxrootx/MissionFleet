// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF790 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_100ff790_100FF790() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 64h]
        mov edx, dword ptr [esi + 50h]
        mov ecx, dword ptr [esi + 0ech]
        cmp eax, edx
        ; Exact mapped bytes 7E 35: jle 0x100ff7d8
        __asm _emit 0x7e
        __asm _emit 0x35
        push edi
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        pop edi
        ; Exact mapped bytes 7D 04: jge 0x100ff7b1
        __asm _emit 0x7d
        __asm _emit 0x04
        mov ecx, eax
        sub ecx, edx
        sub eax, ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 74 14: je 0x100ff7d1
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x100ff7d1
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
        ; Exact mapped bytes E8 08 00 00 00: call 0x100ff7e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
