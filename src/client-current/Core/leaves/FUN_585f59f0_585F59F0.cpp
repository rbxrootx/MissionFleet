// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F59F0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_585f59f0_585F59F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 E5 F2 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 40000000h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 66 7F 17 00: call 0x5876d980
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 75 24: jne 0x585f5a4b
        __asm _emit 0x75
        __asm _emit 0x24
        movzx esi, word ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 0F E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 67 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x67
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 0A: jne 0x585f5a4b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 40000000h
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
