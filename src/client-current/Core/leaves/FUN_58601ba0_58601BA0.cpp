// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58601BA0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_58601ba0_58601BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58601bbb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 6B: jge 0x58601c2e
        __asm _emit 0x7d
        __asm _emit 0x6b
        imul edx, dword ptr [ebp - 8], 180h
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 4A 13 00: call 0x58736640
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4a
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        ; Exact mapped bytes E8 A3 38 EA FF: call 0x584a54c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0A: jne 0x58601c2c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0ffffffffh
        ; Exact mapped bytes EB 84: jmp 0x58601bb2
        __asm _emit 0xeb
        __asm _emit 0x84
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], -1
        ; Exact mapped bytes 75 21: jne 0x58601c58
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 428h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 42 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x42
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB CC FF FF: call 0x585fe930
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1F: jmp 0x58601c77
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 428h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 42 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x42
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA CC FF FF: call 0x585fe930
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
