// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881BDF0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_5881bdf0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov edx, eax
        push ecx
        mov dword ptr [esi + 4], eax
        mov eax, ecx
        mov dword ptr [esi + 8], ecx
        mov ecx, dword ptr [esi + 60h]
        push edx
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes E8 7B 74 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 6B 74 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 98h]
        add edx, 42h
        push edx
        add eax, 50h
        push eax
        ; Exact mapped bytes E8 52 74 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 5ah
        push ecx
        mov ecx, dword ptr [esi + 9ch]
        add edx, 50h
        push edx
        ; Exact mapped bytes E8 39 74 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 74h
        add ecx, 50h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 20 74 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0a4h]
        add edx, 82h
        push edx
        add eax, 0b6h
        push eax
        ; Exact mapped bytes E8 02 74 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 82h
        push ecx
        mov ecx, dword ptr [esi + 0a8h]
        add edx, 106h
        push edx
        ; Exact mapped bytes E8 E3 73 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
