// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BCBB0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_100bcbb0_100BCBB0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, 0ch
        xor eax, eax
        lea ebx, [esi + 78h]
        mov edi, ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + 18h]
        ; Exact mapped bytes A3 00 D1 1A 10: mov dword ptr [0x101ad100], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 64h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 E3 13 00 00: call 0x100bdfc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1ch]
        ; Exact mapped bytes A3 04 D1 1A 10: mov dword ptr [0x101ad104], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 64h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 4D 14 00 00: call 0x100be040
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 101ad0e8h
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 118h]
        push ebx
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
