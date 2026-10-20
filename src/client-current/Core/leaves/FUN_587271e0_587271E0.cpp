// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587271E0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_587271e0_587271E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 70 9A 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x5872720e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 4B 9A 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 7
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x587272b9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0ach]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 79: jge 0x587272b9
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 240h], 0
        ; Exact mapped bytes 74 33: je 0x58727283
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 09 9A 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 EC D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x587272b4
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 D6 99 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D EC D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x58727205
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
