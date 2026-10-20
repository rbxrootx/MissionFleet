// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A90D0 .. +0x106 bytes.
extern "C" __declspec(naked) void _DrawSingle_CDragListBox__QAEXH_Z_004A90D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c80fh
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
        sub esp, 28h
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 05: jne 0x4a90f9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x4a91c6
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E 3B 07 00: call 0x51cc0c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BE 90 08 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 46 2A 08 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 71 A6 08 00: call 0x53378e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C5 A6 08 00: call 0x5337f5
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 55 2C 08 00: call 0x52bd8d
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2D DF 03 00: call 0x4e7074
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EF 55 08 00: call 0x52e746
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 2
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 2
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5E D2 03 00: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 5a0049h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 41 91 08 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 22 91 08 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A1 C5 08 00: call 0x535740
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 28 D2 03 00: call 0x4e63d3
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6E 2C 08 00: call 0x52be25
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E7 A5 08 00: call 0x5337ad
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa5
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
