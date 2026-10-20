// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785A80 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_58785a80_58785A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        mov byte ptr [eax + 60h], 1
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 89 EE F7 FF: call 0x58704930
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xee
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, 8
        mov esi, eax
        lea edi, [ebp - 3ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 C0 EF D5 FF: call 0x584e4a80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xef
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, al
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        mov edx, 14h
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 22h
        push 0
        push 22h
        lea ecx, [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 80017102h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 6E 0A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3F B5 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
