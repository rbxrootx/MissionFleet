// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F79A8 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004f79a8_004F79A8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4f79cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 108h
        push 672eech
        ; Exact mapped bytes E8 7A 13 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f79cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f79b1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 F8 FF FF: call 0x4f72d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 3D: je 0x4f7a25
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F4 BE 68 00: call dword ptr [0x68bef4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x4f7a23
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 672fe0h
        ; Exact mapped bytes E8 F5 8B FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0D: jmp 0x4f7a32
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 11 44 FF FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
