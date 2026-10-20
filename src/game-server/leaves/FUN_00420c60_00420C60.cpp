// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420C60 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_00420c60_00420C60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a129h
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
        push esi
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A4 83 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 44 E9 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 43 E9 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 25 E9 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 25 E9 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 3B 05 3C 2F 5D 00: cmp eax, dword ptr [0x5d2f3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x420d04
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 0F E9 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 44 FB FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 33 FB FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 25 FB FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 66 F9 FF FF: call 0x420690
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0F: jne 0x420d40
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 57 F9 FF FF: call 0x420690
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x420d98
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F7 FA FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 AC E8 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 1E: jne 0x420d7c
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D9 FA FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 8E E8 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x420d98
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BB FA FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 60 E8 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 5F E8 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8E FA FF FF: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 57 83 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x83
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
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 02 7A 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
