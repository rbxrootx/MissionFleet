// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F145 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_0045f145_0045F145() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eb64h
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
        sub esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 81 09 00: call 0x4f72d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x45f202
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 F4 BE 68 00: call dword ptr [0x68bef4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 77 5B 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9D E0 06 00: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 14 E0 06 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        push 400h
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 DC 5B 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 77 E1 FF FF: call 0x45d34e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x45f1f1
        __asm _emit 0x75
        __asm _emit 0x16
        push -1
        push 0
        push 0f118h
        ; Exact mapped bytes E8 40 79 09 00: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 81 09 00: call 0x4f73ef
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EC D6 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x45f23d
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 400h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 D9 E2 FF FF: call 0x45d4ee
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 86 5B 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 15 CC 08 00: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 AF D6 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0x06
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
