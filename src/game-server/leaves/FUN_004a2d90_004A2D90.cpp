// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2D90 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004a2d90_004A2D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0dh
        ; Exact mapped bytes E8 37 4F 0A 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x4a2dc8
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 5ccb0ch
        ; Exact mapped bytes E8 3D 1C 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2dc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4a2db1
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4a2ddc
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 03 00 00: call 0x4a3191
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        ; Exact mapped bytes E8 29 50 0A 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
