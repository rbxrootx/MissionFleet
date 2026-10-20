// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851C510 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_5851c510_5851C510() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588813fdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB A2 F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a3f3ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E5 A6 F6 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa6
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D D8 FA FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 80h
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes E8 D4 46 33 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0x33
        __asm _emit 0x00
        cdq
        mov ecx, 6
        idiv ecx
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0fffffffdh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 0fffffeffh
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 97 F6 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C 36 FE FF: call 0x584ffc50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
