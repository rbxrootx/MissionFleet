// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1300 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_587b1300_587B1300() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov edx, 11eh
        push esi
        lea eax, [ecx + 94h]
        xor esi, esi
        lea eax, [eax + 4]
        ; Exact mapped bytes 66 89 70 FC: mov word ptr [eax - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xfc
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x587b1310
        __asm _emit 0x75
        __asm _emit 0xf2
        lea eax, [ecx + 988h]
        mov edx, 1eh
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        lea eax, [eax + 4]
        ; Exact mapped bytes 66 89 70 FC: mov word ptr [eax - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xfc
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x587b1330
        __asm _emit 0x75
        __asm _emit 0xf2
        lea eax, [ecx + 0a7ch]
        mov edx, 13h
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        lea eax, [eax + 4]
        ; Exact mapped bytes 66 89 70 FC: mov word ptr [eax - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xfc
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x587b1350
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, 1
        mov dword ptr [ecx + 16ach], edx
        pop esi
        ; Exact mapped bytes 66 89 81 94 04 00 00: mov word ptr [ecx + 0x494], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 16a8h], edx
        mov dword ptr [ecx + 16b0h], edx
        mov dword ptr [ecx + 16a0h], edx
        ret
    }
}
