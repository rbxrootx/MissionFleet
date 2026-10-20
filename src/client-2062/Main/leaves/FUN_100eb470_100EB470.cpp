// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EB470 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_100eb470_100EB470() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        mov dword ptr [esi + 5c44h], ecx
        shr eax, 1fh
        add edx, eax
        mov byte ptr [esi + 331h], dl
        mov eax, dword ptr [esi + 5c44h]
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 05: jl 0x100eb4a6
        __asm _emit 0x7c
        __asm _emit 0x05
        add eax, 0fffff1f0h
        test eax, eax
        mov dword ptr [esi + 5c44h], eax
        ; Exact mapped bytes 7D 05: jge 0x100eb4b5
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 0e10h
        mov dword ptr [esi + 5c44h], eax
        lea ecx, [eax + 32h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp edx, 24h
        mov dword ptr [esi + 5c40h], edx
        ; Exact mapped bytes 7C 03: jl 0x100eb4dd
        __asm _emit 0x7c
        __asm _emit 0x03
        add edx, -24h
        mov eax, dword ptr [esi + 5cb8h]
        mov dword ptr [esi + 5c40h], edx
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 1054h]
        mov edx, dword ptr [esi + 5c40h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [esi + 5c40h]
        mov ecx, dword ptr [esi + 1058h]
        push eax
        ; Exact mapped bytes E8 83 E9 F3 FF: call 0x10029e90
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0e74h]
        xor eax, eax
        test byte ptr [ecx + 8], 7
        ; Exact mapped bytes 76 27: jbe 0x100eb542
        __asm _emit 0x76
        __asm _emit 0x27
        push edi
        lea ecx, [esi + 5cbch]
        mov edx, dword ptr [ecx]
        mov edi, dword ptr [esi + 5c40h]
        inc eax
        add ecx, 4
        mov dword ptr [edx + 50h], edi
        mov edx, dword ptr [esi + 0e74h]
        mov dl, byte ptr [edx + 8]
        and edx, 7
        cmp eax, edx
        ; Exact mapped bytes 72 E1: jb 0x100eb522
        __asm _emit 0x72
        __asm _emit 0xe1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
