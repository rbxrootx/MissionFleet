// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004770A0 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_004770a0_004770A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x4770f3
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        cmp dword ptr [eax], 2dh
        sete cl
        mov edx, dword ptr [ebp + 8]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 1E: jne 0x4770f3
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], 30h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 2dh
        ; Exact mapped bytes 75 0F: jne 0x477110
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 2dh
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7F 1F: jg 0x477138
        __asm _emit 0x7f
        __asm _emit 0x1f
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0C 02 00 00: call 0x477330
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 30h
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0C: jmp 0x477144
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x4771d6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D7 01 00 00: call 0x477330
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8A 15 D0 E0 67 00: mov dl, byte ptr [0x67e0d0]
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7D 5D: jge 0x4771d6
        __asm _emit 0x7d
        __asm _emit 0x5d
        ; Exact mapped bytes 0F BE 55 14: movsx edx, byte ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x14
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x47718e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        neg ecx
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 26: jmp 0x4771b4
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        neg eax
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7D 08: jge 0x4771a3
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x4771ae
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        neg eax
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6F 01 00 00: call 0x477330
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 30h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 ED E6 FE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
