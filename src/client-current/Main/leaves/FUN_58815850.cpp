// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58815850 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58815850() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 194h]
        cmp eax, 3
        ; Exact mapped bytes 77 3F: ja 0x5881589d
        __asm _emit 0x77
        __asm _emit 0x3f
        ; Exact mapped bytes FF 24 85 D0 58 81 58: jmp dword ptr [eax*4 + 0x588158d0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x81
        __asm _emit 0x58
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0cd0h]
        ; Exact mapped bytes EB 2C: jmp 0x5881589f
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [esi + 198h]
        mov eax, dword ptr [ecx + 0cd4h]
        ; Exact mapped bytes EB 1E: jmp 0x5881589f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 198h]
        mov eax, dword ptr [edx + 0cdch]
        ; Exact mapped bytes EB 10: jmp 0x5881589f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [esi + 198h]
        mov eax, dword ptr [eax + 0cd8h]
        ; Exact mapped bytes EB 02: jmp 0x5881589f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 0ch]
        movzx edx, word ptr [esp + 8]
        push eax
        movzx eax, word ptr [esi + 194h]
        push ecx
        mov ecx, dword ptr [esi + 174h]
        push edx
        push eax
        ; Exact mapped bytes E8 92 3D 00 00: call 0x58819650
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
