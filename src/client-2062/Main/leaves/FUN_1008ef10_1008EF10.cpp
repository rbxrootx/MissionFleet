// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008EF10 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_1008ef10_1008EF10() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 208h]
        ; Exact mapped bytes E8 21 4F 07 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008ef37
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x1008ef72
        __asm _emit 0x7e
        __asm _emit 0x47
        mov ecx, dword ptr [esi + 208h]
        lea edi, [eax - 1]
        push edi
        ; Exact mapped bytes EB 17: jmp 0x1008ef4e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 208h]
        mov edx, dword ptr [ecx + 88h]
        sub edx, 5
        cmp eax, edx
        ; Exact mapped bytes 7D 28: jge 0x1008ef72
        __asm _emit 0x7d
        __asm _emit 0x28
        lea edi, [eax + 1]
        push edi
        ; Exact mapped bytes E8 0D 4F 07 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20ch]
        push edi
        ; Exact mapped bytes E8 01 4F 07 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 210h]
        push edi
        ; Exact mapped bytes E8 F5 4E 07 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 CE 00 00 00: call 0x1008f040
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
