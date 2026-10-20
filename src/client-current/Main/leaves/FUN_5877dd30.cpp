// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877DD30 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_5877dd30() {
    __asm {
        mov eax, ecx
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        lea edi, [eax + 50h]
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, 0aah
        ; Exact mapped bytes 66 31 48 58: xor word ptr [eax + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x48
        __asm _emit 0x58
        mov edx, ecx
        ; Exact mapped bytes 66 31 50 5A: xor word ptr [eax + 0x5a], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x50
        __asm _emit 0x5a
        ; Exact mapped bytes 66 31 48 5C: xor word ptr [eax + 0x5c], cx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x48
        __asm _emit 0x5c
        lea edx, [eax + 7ch]
        lea ecx, [eax + 64h]
        mov esi, 0ch
        mov edi, 0aah
        ; Exact mapped bytes 66 31 39: xor word ptr [ecx], di
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x39
        xor byte ptr [edx], 0aah
        add ecx, 2
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 EC: jne 0x5877dd60
        __asm _emit 0x75
        __asm _emit 0xec
        movzx ecx, word ptr [eax + 5eh]
        xor ecx, 0aa0h
        ; Exact mapped bytes 66 89 48 5E: mov word ptr [eax + 0x5e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5e
        mov ecx, 0aaaaaaaah
        xor dword ptr [eax + 0a8h], ecx
        xor dword ptr [eax + 0ach], ecx
        mov edx, edi
        ; Exact mapped bytes 66 31 90 A0 00 00 00: xor word ptr [eax + 0xa0], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4D D4 FF FF: call 0x5877b1f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 3D 53 0F 00: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
