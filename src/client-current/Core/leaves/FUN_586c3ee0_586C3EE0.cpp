// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C3EE0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_586c3ee0_586C3EE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CB D5 0F 00: call 0x587c14d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 18ch]
        ; Exact mapped bytes E8 3D 22 E8 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x22
        __asm _emit 0xe8
        __asm _emit 0xff
        sub eax, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 70h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 6ch], 5
        ; Exact mapped bytes 75 09: jne 0x586c3f3b
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 7
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 70h]
        add edx, 1
        push edx
        movzx eax, word ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 27 E3 FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 74h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 1A 00 00: call 0x586c5a20
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
