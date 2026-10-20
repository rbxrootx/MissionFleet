// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584AE0 .. +0x228 bytes.
extern "C" __declspec(naked) void FUN_58584ae0_58584AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aab78h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20ch], 3f716da9h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        push 80h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 210h
        push ecx
        ; Exact mapped bytes E8 F2 82 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x82
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 588aa9a0h
        push 80h
        mov edx, dword ptr [ebp - 4]
        add edx, 210h
        push edx
        ; Exact mapped bytes E8 46 F6 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf6
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        push 200h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 C0 82 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x82
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 0F 87 90 01 00 00: ja 0x58584cff
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 08 4D 58 58: jmp dword ptr [ecx*4 + 0x58584d08]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x4d
        __asm _emit 0x58
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 8], 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 9], 0
        mov ecx, 412h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 0A 02 00 00: mov word ptr [edx + 0x20a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aa9ach
        push 200h
        mov eax, dword ptr [ebp - 4]
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 D4 F5 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x58584cff
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 9], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 0A 02 00 00: mov word ptr [ecx + 0x20a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aa9d2h
        push 200h
        mov edx, dword ptr [ebp - 4]
        add edx, 0ah
        push edx
        ; Exact mapped bytes E8 9C F5 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x58584cff
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 8], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9], 0
        mov edx, 409h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 0A 02 00 00: mov word ptr [eax + 0x20a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aa9d4h
        push 200h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes E8 61 F5 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x58584cff
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 9], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 0A 02 00 00: mov word ptr [edx + 0x20a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aa9f8h
        push 200h
        mov eax, dword ptr [ebp - 4]
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 29 F5 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x58584cff
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 9], 1
        mov eax, 419h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 0A 02 00 00: mov word ptr [ecx + 0x20a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aaa1ch
        push 200h
        mov edx, dword ptr [ebp - 4]
        add edx, 0ah
        push edx
        ; Exact mapped bytes E8 EE F4 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 68: jmp 0x58584cff
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 0A 02 00 00: mov word ptr [eax + 0x20a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aa9d3h
        push 200h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes E8 B9 F4 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 33: jmp 0x58584cff
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 9], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 0A 02 00 00: mov word ptr [edx + 0x20a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 588aa9f7h
        push 200h
        mov eax, dword ptr [ebp - 4]
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 84 F4 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
