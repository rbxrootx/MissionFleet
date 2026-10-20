// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585009D0 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_585009d0_585009D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push 104h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 27 C4 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc4
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, 3e9h
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0eh
        ; Exact mapped bytes 0F 87 36 01 00 00: ja 0x58500b3e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 58500b64h]
        ; Exact mapped bytes FF 24 8D 48 0B 50 58: jmp dword ptr [ecx*4 + 0x58500b48]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x0b
        __asm _emit 0x50
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 10h], 1
        xor al, al
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x58500b40
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 588a36a8h
        ; Exact mapped bytes E8 BB 15 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        push eax
        push 104h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 54h
        push ecx
        ; Exact mapped bytes E8 A6 03 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 10h], 1
        xor al, al
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x58500b40
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a36cch
        ; Exact mapped bytes E8 8B 15 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        push eax
        push 104h
        mov eax, dword ptr [ebp + 8]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 76 03 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 1
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x58500b3e
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 FD F8 FF FF: call 0x58500390
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 588a36ech
        ; Exact mapped bytes E8 50 15 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 104h
        mov edx, dword ptr [ebp + 8]
        add edx, 54h
        push edx
        ; Exact mapped bytes E8 31 03 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 10h], 1
        xor al, al
        ; Exact mapped bytes EB 73: jmp 0x58500b40
        __asm _emit 0xeb
        __asm _emit 0x73
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 B9 F8 FF FF: call 0x58500390
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 588a3718h
        ; Exact mapped bytes E8 0C 15 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 104h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 54h
        push ecx
        ; Exact mapped bytes E8 ED 02 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 10h], 1
        xor al, al
        ; Exact mapped bytes EB 2F: jmp 0x58500b40
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 588a3744h
        ; Exact mapped bytes E8 D5 14 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        push eax
        push 104h
        mov eax, dword ptr [ebp + 8]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 C0 02 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 1
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x58500b40
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
