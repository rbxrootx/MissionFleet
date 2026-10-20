// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB670 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_587bb670() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ch]
        push edi
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x587bb682
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x587bb689
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esi + 14h]
        sub eax, ecx
        sar eax, 1
        mov edi, dword ptr [esi + 10h]
        mov edx, edi
        sub edx, ecx
        sar edx, 1
        cmp edx, eax
        ; Exact mapped bytes 73 18: jae 0x587bb6ae
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 0F: mov word ptr [edi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0f
        add edi, 2
        mov dword ptr [esi + 10h], edi
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp ecx, edi
        ; Exact mapped bytes 76 05: jbe 0x587bb6b7
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 BB 15 1C 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi]
        push edx
        push edi
        push eax
        lea eax, [esp + 14h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F4 FE FF FF: call 0x587bb5c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
