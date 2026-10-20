// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BE810 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_100be810_100BE810() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        mov eax, 66666667h
        push ebp
        imul ebx
        sar edx, 1
        mov eax, edx
        mov ebp, dword ptr [esp + 14h]
        shr eax, 1fh
        push esi
        add edx, eax
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 14h]
        lea ecx, [edx + edx*2]
        mov dword ptr [esi + 0b8h], ecx
        mov ecx, dword ptr [esi + 80h]
        lea eax, [edx + edx]
        push edi
        mov dword ptr [esi + 0b4h], 0
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 90h], edi
        mov dword ptr [esi + 0a4h], ebp
        mov dword ptr [esi + 0b0h], 0ffffffffh
        mov dword ptr [esi + 0bch], eax
        mov dword ptr [esi + 0c0h], edx
        ; Exact mapped bytes E8 A4 0E 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push ebx
        ; Exact mapped bytes E8 98 0E 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push ebx
        push edi
        ; Exact mapped bytes E8 BE BA F6 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        test ebp, ebp
        mov eax, ebp
        ; Exact mapped bytes 75 05: jne 0x100be89d
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 2710h
        mov ecx, dword ptr [esi + 78h]
        push eax
        push ebp
        ; Exact mapped bytes E8 A9 BA F6 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push 0
        ; Exact mapped bytes E8 98 BA F6 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        lea eax, [esi + 9ch]
        mov ecx, 2
        mov dword ptr [eax - 8], edi
        mov dword ptr [eax], edi
        add eax, 4
        dec ecx
        ; Exact mapped bytes 75 F5: jne 0x100be8c3
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ecx, dword ptr [esi + 94h]
        lea eax, [ecx + ecx*2]
        shl eax, 4
        add eax, ecx
        lea edx, [eax + eax*8]
        lea eax, [ecx + edx*2]
        mov ecx, dword ptr [esi + 68h]
        cdq
        idiv dword ptr [esi + 0a8h]
        add eax, 7eh
        push eax
        ; Exact mapped bytes E8 5B 04 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        lea eax, [ecx + ecx*2]
        shl eax, 4
        add eax, ecx
        lea eax, [eax + eax*8]
        lea eax, [ecx + eax*2]
        mov ecx, dword ptr [esi + 6ch]
        cdq
        idiv dword ptr [esi + 0a8h]
        add eax, 7eh
        push eax
        ; Exact mapped bytes E8 34 04 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
