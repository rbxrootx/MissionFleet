// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00454472 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_00454472_00454472() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b6f2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581a1ch
        mov dword ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4f0h
        ; Exact mapped bytes E8 2D 92 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4e0h
        ; Exact mapped bytes E8 1B 92 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4d0h
        ; Exact mapped bytes E8 09 92 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4c0h
        ; Exact mapped bytes E8 F7 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4b0h
        ; Exact mapped bytes E8 E5 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4a0h
        ; Exact mapped bytes E8 D3 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 490h
        ; Exact mapped bytes E8 C1 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 480h
        ; Exact mapped bytes E8 AF 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 470h
        ; Exact mapped bytes E8 9D 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 460h
        ; Exact mapped bytes E8 8B 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 450h
        ; Exact mapped bytes E8 79 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 440h
        ; Exact mapped bytes E8 67 91 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C AF FF FF: call 0x44f494
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 44 42 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
