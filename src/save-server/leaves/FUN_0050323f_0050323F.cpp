// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050323F .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0050323f_0050323F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 C5 FC FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E8 0E D4 03 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x5032ad
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 3D: je 0x5032ad
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5032ad
        __asm _emit 0x75
        __asm _emit 0x16
        push 67592ch
        push 675968h
        ; Exact mapped bytes E8 6F D3 F9 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5032b2
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
