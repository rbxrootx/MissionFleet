// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DE30 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_5875de30_5875DE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 DE 00 00 00: ja 0x5875df27
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 54 DF 75 58: jmp dword ptr [ecx*4 + 0x5875df54]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xdf
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10f4h]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10f4h], eax
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x5875df27
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10f8h]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10f8h], eax
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x5875df27
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10fch]
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 10fch], edx
        ; Exact mapped bytes EB 77: jmp 0x5875df27
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10fch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 10fch], eax
        ; Exact mapped bytes EB 4E: jmp 0x5875df27
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10fch]
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 10fch], edx
        ; Exact mapped bytes EB 27: jmp 0x5875df27
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10fch]
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        imul ecx, eax, 3
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 10fch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 8A D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 14: jne 0x5875df4b
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 24 E6 FF: call 0x585c03d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
