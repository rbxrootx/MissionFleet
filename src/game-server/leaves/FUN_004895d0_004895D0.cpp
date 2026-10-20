// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004895D0 .. +0x233 bytes.
extern "C" __declspec(naked) void FUN_004895d0_004895D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c78h
        ; Exact mapped bytes E8 71 80 0A 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c88h
        ; Exact mapped bytes E8 45 FD FF FF: call 0x489350
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c8ch
        ; Exact mapped bytes E8 D7 FC FF FF: call 0x4892f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c90h
        ; Exact mapped bytes E8 79 FD FF FF: call 0x4893a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 581e28h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 104h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 108h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x48966e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 40h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 BE F9 01 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 43h], 0
        ; Exact mapped bytes EB 07: jmp 0x489675
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 114h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 118h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 F1 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 11ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 128h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 130h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x489713
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0b4h
        ; Exact mapped bytes 7D 52: jge 0x48976e
        __asm _emit 0x7d
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 4]
        shl edx, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 138h], 0
        mov eax, dword ptr [ebp - 4]
        shl eax, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 13ch], 0
        mov edx, dword ptr [ebp - 4]
        shl edx, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 140h], 0
        ; Exact mapped bytes EB 9C: jmp 0x48970a
        __asm _emit 0xeb
        __asm _emit 0x9c
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 20 5C 04 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c78h
        ; Exact mapped bytes E8 28 7F 0A 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        imul edx, edx, 3e8h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0c74h], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0c7ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0c80h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0c84h], 0
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c90h
        ; Exact mapped bytes E8 E3 FB FF FF: call 0x4893c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0c88h
        ; Exact mapped bytes E8 81 FB FF FF: call 0x489370
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 EF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
