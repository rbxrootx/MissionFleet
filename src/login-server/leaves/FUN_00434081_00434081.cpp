// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434081 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00434081_00434081() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        lea eax, [ebp - 8]
        push edi
        mov esi, ecx
        push eax
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 15 A4 C0 43 00: call dword ptr [0x43c0a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 15 AC C0 43 00: call dword ptr [0x43c0ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2D B9 FE FF: call 0x41f9da
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 23 B9 FE FF: call 0x41f9da
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 3D D0 C1 43 00: mov edi, dword ptr [0x43c1d0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push dword ptr [ebp - 4]
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 0A B9 FE FF: call 0x41f9da
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 00 B9 FE FF: call 0x41f9da
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 4], eax
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
