// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420ED0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_00420ed0_00420ED0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a149h
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
        ; Exact mapped bytes E8 35 81 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 13 F9 FF FF: call 0x420830
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 39: jne 0x420f5e
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 10 F9 FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 05 F9 FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 17: jne 0x420f5e
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 AE E6 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 72: jmp 0x420fd0
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 87 E6 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 3C 2F 5D 00: cmp edx, dword ptr [0x5d2f3c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x420f96
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 6F E6 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 94 FB FF FF: call 0x420b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 3A: jmp 0x420fd0
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 9F F8 FF FF: call 0x420840
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
        ; Exact mapped bytes E8 3E E6 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x420fc8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB CE: jmp 0x420f96
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 41 81 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x81
        __asm _emit 0x0a
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
        ; Exact mapped bytes E8 ED 77 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
