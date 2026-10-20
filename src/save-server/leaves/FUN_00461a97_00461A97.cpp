// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461A97 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00461a97_00461A97() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3D: je 0x461afe
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x461afe
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B 0F 07 00: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 63d430h
        ; Exact mapped bytes E8 0B 87 07 00: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 12: jne 0x461b16
        __asm _emit 0x75
        __asm _emit 0x12
        push 67ca84h
        push 67cac0h
        ; Exact mapped bytes E8 02 EB 03 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
