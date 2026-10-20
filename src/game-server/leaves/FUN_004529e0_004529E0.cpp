// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004529E0 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_004529e0_004529E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 CB FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xcb
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
        ; Exact mapped bytes E8 C2 5D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x452a30
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b7fb8h
        ; Exact mapped bytes E8 51 AE 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 BB B0 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b7fd4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 03 B5 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 49 E5 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe5
        __asm _emit 0x0d
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
        ; Exact mapped bytes E8 71 5D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 7C B0 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b7fe0h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 C4 B4 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 0A E5 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0x0d
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
        ; Exact mapped bytes E8 32 5D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 3D B0 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b7ff8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 85 B4 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        ; Exact mapped bytes E8 CB E4 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe4
        __asm _emit 0x0d
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
        ; Exact mapped bytes E8 F3 5C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 460h], 452b16h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 464h], 452d55h
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CE 5C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
