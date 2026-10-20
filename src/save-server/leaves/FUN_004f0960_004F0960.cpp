// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0960 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_004f0960_004F0960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        ; Exact mapped bytes E8 36 44 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 04 B9 68 00: call dword ptr [0x68b904]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x4f09b6
        __asm _emit 0x74
        __asm _emit 0x2e
        push 1
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4f09b4
        __asm _emit 0x75
        __asm _emit 0x16
        push 6782a0h
        push 6782cch
        ; Exact mapped bytes E8 68 FC FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x4f09f1
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes EB 36: jmp 0x4f09ec
        __asm _emit 0xeb
        __asm _emit 0x36
        push 1
        mov ecx, dword ptr [ebp - 8]
        add ecx, 20h
        ; Exact mapped bytes E8 E7 43 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4f09ec
        __asm _emit 0x75
        __asm _emit 0x16
        push 6782d0h
        push 6782ech
        ; Exact mapped bytes E8 30 FC FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4f09f1
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
