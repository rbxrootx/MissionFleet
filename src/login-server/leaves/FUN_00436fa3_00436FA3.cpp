// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436FA3 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00436fa3_00436FA3() {
    __asm {
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 74 FB 44 00: cmp dword ptr [0x44fb74], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x436fb3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 5D FF FF FF: call 0x436f10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 1D 70 FB 44 00: cmp dword ptr [0x44fb70], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 54: jne 0x43700f
        __asm _emit 0x75
        __asm _emit 0x54
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        cmp dword ptr [edi*4 + 44f97ch], ebx
        ; Exact mapped bytes 8B 1D 7C C1 43 00: mov ebx, dword ptr [0x43c17c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea esi, [edi*4 + 44f97ch]
        ; Exact mapped bytes 75 29: jne 0x437000
        __asm _emit 0x75
        __asm _emit 0x29
        push ebp
        mov ebp, 44f9c0h
        push ebp
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 13: jne 0x436ff8
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [edi + edi*2]
        lea eax, [eax*8 + 44f9d8h]
        push eax
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        inc dword ptr [esi]
        push ebp
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        lea eax, [edi + edi*2]
        lea eax, [eax*8 + 44f9d8h]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
