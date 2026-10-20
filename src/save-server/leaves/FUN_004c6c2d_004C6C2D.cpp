// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6C2D .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004c6c2d_004C6C2D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 37 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        push 674790h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 674788h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 1B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 35 1E 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 1B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 F0 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4c6ccc
        __asm _emit 0x7e
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F 08 06 00: call 0x52750c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x4c6ccc
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E FE FF FF: call 0x4c6ab8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 6747a0h
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        push 67479ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 1B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 06 1D 06 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 88 1B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A 1E 06 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x4c6c80
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 6747a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 1B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
