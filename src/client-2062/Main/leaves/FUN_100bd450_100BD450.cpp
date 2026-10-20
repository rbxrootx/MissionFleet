// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BD450 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_100bd450_100BD450() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 DB 69 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        sub edi, eax
        sub edi, 9
        test edi, edi
        ; Exact mapped bytes 7E 35: jle 0x100bd4a3
        __asm _emit 0x7e
        __asm _emit 0x35
        mov eax, dword ptr [esi + 198h]
        mov ecx, dword ptr [eax + 88h]
        lea eax, [edi*8]
        sub eax, edi
        sub ecx, 9
        lea eax, [eax + eax*2]
        shl eax, 2
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 178h]
        sub edx, eax
        sub edx, 0eh
        push edx
        ; Exact mapped bytes E8 1D 19 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 19ch]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 8C 69 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        sub edi, eax
        sub edi, 6
        test edi, edi
        ; Exact mapped bytes 7E 35: jle 0x100bd4f2
        __asm _emit 0x7e
        __asm _emit 0x35
        mov eax, dword ptr [esi + 19ch]
        mov ecx, dword ptr [eax + 88h]
        lea eax, [edi*8]
        sub eax, edi
        sub ecx, 6
        lea eax, [eax + eax*2]
        shl eax, 2
        cdq
        idiv ecx
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 17ch]
        sub edx, eax
        sub edx, 0eh
        push edx
        ; Exact mapped bytes E8 CE 18 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
