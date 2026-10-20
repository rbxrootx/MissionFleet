// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9620 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_004c9620_004C9620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 01 00 00: call 0x4c9780
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 05: jae 0x4c963b
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 05 FE FF FF: call 0x4c9440
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 01 00 00: call 0x4c9780
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 06: jae 0x4c9657
        __asm _emit 0x73
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 28: jne 0x4c9687
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes A1 98 1A 58 00: mov eax, dword ptr [0x581a98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x58
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C 01 00 00: call 0x4c97a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 01 00 00: call 0x4c97a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x4c976f
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 86 9C 00 00 00: jbe 0x4c972d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 00 00 00: call 0x4c9780
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x4c972d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 FF FF FF: call 0x4c95f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D 49 F9 FF: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 0feh
        ; Exact mapped bytes 7D 6E: jge 0x4c972d
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 34 02 00 00: call 0x4c9900
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x4c972d
        __asm _emit 0x74
        __asm _emit 0x55
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 43 F9 FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 FF FF FF: call 0x4c95f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 00 00 00: call 0x4c9780
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 01 00 00: call 0x4c9870
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 48 F9 FF: call 0x45dfd0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB 42: jmp 0x4c976f
        __asm _emit 0xeb
        __asm _emit 0x42
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 47 F9 FF: call 0x45de70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x4c976f
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 FE FF FF: call 0x4c95f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 30 46 F9 FF: call 0x45dd90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 46 F9 FF: call 0x45de10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
