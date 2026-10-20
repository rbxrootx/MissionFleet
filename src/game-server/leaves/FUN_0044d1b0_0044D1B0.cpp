// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D1B0 .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_0044d1b0_0044D1B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b0e9h
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
        ; Exact mapped bytes E8 55 BE 07 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 E3 40 FF FF: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 39: jne 0x44d23e
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 F0 40 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 E5 40 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 17: jne 0x44d23e
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 DE 40 FF FF: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 72: jmp 0x44d2b0
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 A7 40 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 04 78 5D 00: cmp edx, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x44d276
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 8F 40 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 44 42 FF FF: call 0x4414b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 3A: jmp 0x44d2b0
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 7F 40 FF FF: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 5E 40 FF FF: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x44d2a8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB CE: jmp 0x44d276
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 61 BE 07 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbe
        __asm _emit 0x07
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
        ; Exact mapped bytes E8 0D B5 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
