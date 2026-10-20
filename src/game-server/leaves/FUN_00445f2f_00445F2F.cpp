// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445F2F .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_00445f2f_00445F2F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x4460a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x445f74
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 7D 23: jge 0x445f9d
        __asm _emit 0x7d
        __asm _emit 0x23
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 28 04 00 00: call 0x4463b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4D 89 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6E 94 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x445f6b
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x445fb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x446091
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 250h
        ; Exact mapped bytes E8 33 97 0F 00: call 0x53f708
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x97
        __asm _emit 0x0f
        __asm _emit 0x00
        shl eax, 8
        or eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 55 F0: mov dx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 9ch]
        mov ecx, dword ptr [ecx + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 90 2E 0A 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x44608c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d78h]
        ; Exact mapped bytes 66 8B 48 66: mov cx, word ptr [eax + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x66
        ; Exact mapped bytes 66 81 E1 FF 00: and cx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        and ecx, 0ffffh
        and ecx, 0fh
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d78h]
        ; Exact mapped bytes 66 8B 48 66: mov cx, word ptr [eax + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x66
        ; Exact mapped bytes 66 81 E1 FF 00: and cx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        and ecx, 0ffffh
        and ecx, 0f0h
        sar ecx, 4
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        push 1
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        imul eax, eax, 5
        lea ecx, [edx + eax + 1]
        push ecx
        ; Exact mapped bytes E8 40 03 00 00: call 0x4463b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 65 88 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 86 93 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x445fad
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        push 43eh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C3 8A 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 32 27 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
