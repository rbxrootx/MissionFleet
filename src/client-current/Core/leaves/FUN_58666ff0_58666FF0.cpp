// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58666FF0 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_58666ff0_58666FF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889177h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 7ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], ecx
        push 0b4h
        ; Exact mapped bytes E8 DF 9F 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x9f
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 2D: je 0x58667065
        __asm _emit 0x74
        __asm _emit 0x2d
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 94h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 10 CB E5 FF: call 0x584c3b70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866706c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 84h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 78h], ecx
        mov byte ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 6fh]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D AA: mov word ptr [ebp - 0x56], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xaa
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ebp + eax - 54h], 0
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 28h], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        lea edx, [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A8 DA E5 FF: call 0x584c4b80
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xda
        __asm _emit 0xe5
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 5E ED E1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xed
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 74h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 75 20: jne 0x5866710c
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [edx + 0e8h], eax
        ; Exact mapped bytes EB 33: jmp 0x5866713f
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 59 2C E5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 70h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 0A 87 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x87
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 8B 82 DA 00 00 00: mov ax, word ptr [edx + 0xda]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 89 81 DA 00 00 00: mov word ptr [ecx + 0xda], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 4F 2A 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 D9 9E 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
