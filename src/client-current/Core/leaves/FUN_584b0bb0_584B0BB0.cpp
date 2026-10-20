// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0BB0 .. +0x21F bytes.
extern "C" __declspec(naked) void FUN_584b0bb0_584B0BB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 75 05: jne 0x584b0bd4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 ED 01 00 00: jmp 0x584b0dc1
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 04 F7 FF FF: call 0x584b02e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x584b0cc8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 DA 52 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 BB 52 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9D 52 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 38h]
        movzx edx, byte ptr [ecx + 190h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 25 A5 30 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa5
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 38h]
        mov cl, byte ptr [eax + 165h]
        and cl, 7fh
        movzx edx, cl
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F5 A4 30 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa4
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 38h]
        mov cl, byte ptr [eax + 166h]
        and cl, 0fh
        movzx edx, cl
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C9 A4 30 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xa4
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 1F: jne 0x584b0cfb
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 54h], eax
        push 588952e0h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 AB 53 FD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x584b0dc1
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 1bch]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 38h]
        add eax, 0e4h
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A8 61 00 00: call 0x584b6ec0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 1bch]
        ; Exact mapped bytes E8 8A 60 00 00: call 0x584b6db0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 38h]
        add edx, 0e4h
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 0ch
        ; Exact mapped bytes 7E 59: jle 0x584b0d95
        __asm _emit 0x7e
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 1c0h], 1
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0e4h
        push ecx
        push 588952e4h
        push 30h
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 8D 00 00 00: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov byte ptr [ebp - 2ch], 0
        push 588952e8h
        push 30h
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 F6 57 FD FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 5ch], edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 0E 53 FD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2C: jmp 0x584b0dc1
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 1c0h], 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0e4h
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 E0 52 FD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 85 02 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
