// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FEE0 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_5878fee0_5878FEE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 25 1F 00 00: call 0x58791e30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5878ff9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C0 94 DA FF: call 0x585393e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 20h], eax
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E9 1D 00 00: call 0x58791d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 0F: jne 0x5878ff6e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B5 FE FF FF: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5878ffab
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 96 07 00 00: call 0x58790710
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5E 1D 00 00: call 0x58791cf0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E5 06 00 00: call 0x58790680
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0D: jmp 0x5878ffab
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 76 FE FF FF: call 0x5878fe20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9B 10 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x10
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
