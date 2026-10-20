// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0B6D .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004f0b6d_004F0B6D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes E8 88 49 04 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f0b80
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x4f0bd1
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes E8 7B 4A 04 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x4f0bb1
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 0e146h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4f0bb1
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x4f0bd1
        __asm _emit 0xeb
        __asm _emit 0x20
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 0e146h
        ; Exact mapped bytes E8 3D 49 04 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esp, ebp
        pop ebp
        ret
    }
}
