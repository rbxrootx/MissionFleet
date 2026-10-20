// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4CD0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_584e4cd0_584E4CD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 45 FD FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 24: jne 0x584e4d0d
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 384h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 02 00 00: call 0x584e4f70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 10 FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x584e4d8d
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 45 FD FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 56: jne 0x584e4d73
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B 70 2D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 74h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], ecx
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 0F FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x584e4d8d
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 44 FD FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 6
        ; Exact mapped bytes 75 02: jne 0x584e4d85
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x584e4d8d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 44 FD FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
