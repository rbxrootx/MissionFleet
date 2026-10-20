// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE300 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100ee300_100EE300() {
    __asm {
        push esi
        ; Exact mapped bytes 8B 35 EC 55 1C 10: mov esi, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov edi, dword ptr [esp + 0ch]
        lea eax, [esi + esi*2]
        lea eax, [esi + eax*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [edi + 4]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        push eax
        lea eax, [esi + esi*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [edi]
        cdq
        idiv ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A4 08 F8 FF: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
