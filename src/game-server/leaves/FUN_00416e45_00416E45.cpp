// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416E45 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_00416e45_00416E45() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push edi
        push ecx
        lea edi, [ebp - 2ch]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 43 48 03 00: call 0x44b6b6
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 51 4A 03 00: call 0x44b8d3
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E0 49 03 00: call 0x44b871
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 20 43 01 00: call 0x42b1d5
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes DF 6D DC: fild qword ptr [ebp - 0x24]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xdc
        ; Exact mapped bytes D8 35 08 11 58 00: fdiv dword ptr [0x581108]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 9F 2A 09 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes DF 6D D4: fild qword ptr [ebp - 0x2c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xd4
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes E8 F9 25 09 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        pop edi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CC 18 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
