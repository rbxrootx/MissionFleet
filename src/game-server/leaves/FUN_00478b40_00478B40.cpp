// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478B40 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_00478b40_00478B40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c089h
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C5 04 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 13 F9 FF FF: call 0x4784a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 39: jne 0x478bce
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 10 F9 FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 05 F9 FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 17: jne 0x478bce
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 AE E6 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 72: jmp 0x478c40
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 87 E6 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 54 CB 5D 00: cmp edx, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x478c06
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 6F E6 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 94 FB FF FF: call 0x478790
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 3A: jmp 0x478c40
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 9F F8 FF FF: call 0x4784b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 3E E6 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x478c38
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB CE: jmp 0x478c06
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D1 04 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x05
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
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 7D FB 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
