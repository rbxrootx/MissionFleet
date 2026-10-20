// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F7D2 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_0044f7d2_0044F7D2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 FD FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D0 8F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x44f822
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b7174h
        ; Exact mapped bytes E8 5F E0 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 C9 E2 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b7190h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 11 E7 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 57 17 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7F 8F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 8A E2 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b71a0h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 D2 E6 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 18 17 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 40 8F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 4B E2 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b71bch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 93 E6 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 D9 16 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 8F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 470h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 474h], 44f922h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 478h], 44fcf3h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 47ch], 44ff46h
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C2 8E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
