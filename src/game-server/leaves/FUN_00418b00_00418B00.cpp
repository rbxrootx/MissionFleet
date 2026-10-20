// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418B00 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_00418b00_00418B00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579c0fh
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
        push ecx
        push esi
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 D5 83 11 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581138h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x418c4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10110h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10108h]
        push eax
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 71 FC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x418be1
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10110h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 72 4F 0D 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        push 5a1308h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 B7 53 0D 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 A5 53 0D 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 38 54 0D 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 5a130ch
        mov eax, dword ptr [ebp - 10h]
        add eax, 10110h
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 FF FB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10110h
        push ecx
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 FB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 4B: je 0x418c4d
        __asm _emit 0x74
        __asm _emit 0x4b
        push 5a1310h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 40 53 0D 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 2E 53 0D 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 B4 53 0D 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x53
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 00 00 00: call 0x418ca5
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 74 FB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
