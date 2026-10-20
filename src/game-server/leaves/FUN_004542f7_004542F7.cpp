// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004542F7 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_004542f7_004542F7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b63ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push edi
        push ecx
        lea edi, [ebp - 40h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 40h], ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E1 B0 FF FF: call 0x44f410
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 440h
        ; Exact mapped bytes E8 58 93 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 450h
        ; Exact mapped bytes E8 42 93 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 460h
        ; Exact mapped bytes E8 2C 93 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 470h
        ; Exact mapped bytes E8 16 93 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 480h
        ; Exact mapped bytes E8 00 93 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 490h
        ; Exact mapped bytes E8 EA 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 4a0h
        ; Exact mapped bytes E8 D4 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 4b0h
        ; Exact mapped bytes E8 BE 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 4c0h
        ; Exact mapped bytes E8 A8 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 4d0h
        ; Exact mapped bytes E8 92 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 4e0h
        ; Exact mapped bytes E8 7C 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 4f0h
        ; Exact mapped bytes E8 66 92 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax], 581a1ch
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 51 01 00 00: call 0x4545a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 43 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
