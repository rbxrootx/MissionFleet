// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF740 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_100ff740_100FF740() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 64h]
        mov eax, dword ptr [esi + 54h]
        mov edx, dword ptr [esi + 0ech]
        cmp ecx, eax
        ; Exact mapped bytes 7D 34: jge 0x100ff787
        __asm _emit 0x7d
        __asm _emit 0x34
        push edi
        lea edi, [ecx + edx]
        cmp edi, eax
        pop edi
        ; Exact mapped bytes 7E 04: jle 0x100ff760
        __asm _emit 0x7e
        __asm _emit 0x04
        sub eax, ecx
        mov edx, eax
        add ecx, edx
        mov dword ptr [esi + 64h], ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x100ff780
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [ecx + 24h]
        shr al, 5
        test al, 1
        ; Exact mapped bytes 74 0A: je 0x100ff780
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
        ; Exact mapped bytes E8 59 00 00 00: call 0x100ff7e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
