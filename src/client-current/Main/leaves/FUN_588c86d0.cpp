// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C86D0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_588c86d0() {
    __asm {
        cmp dword ptr [esp + 4], 1
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes 75 2E: jne 0x588c870e
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes E8 8B FA 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5A: jle 0x588c8743
        __asm _emit 0x7e
        __asm _emit 0x5a
        mov ecx, dword ptr [esi + 24ch]
        cmp dword ptr [ecx + 88h], 9
        ; Exact mapped bytes 7E 4B: jle 0x588c8743
        __asm _emit 0x7e
        __asm _emit 0x4b
        ; Exact mapped bytes E8 73 FA 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 24ch]
        dec eax
        push eax
        ; Exact mapped bytes E8 86 FA 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 56 FA 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, -0ah
        cmp eax, edi
        pop edi
        ; Exact mapped bytes 7D 21: jge 0x588c8743
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 24ch]
        cmp dword ptr [ecx + 88h], 9
        ; Exact mapped bytes 7E 12: jle 0x588c8743
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes E8 3A FA 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 24ch]
        inc eax
        push eax
        ; Exact mapped bytes E8 4D FA 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
