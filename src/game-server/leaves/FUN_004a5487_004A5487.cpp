// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5487 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_004a5487_004A5487() {
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
        ; Exact mapped bytes 74 3D: je 0x4a54ee
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
        ; Exact mapped bytes 74 1F: je 0x4a54ee
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6B F6 04 00: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 58ae08h
        ; Exact mapped bytes E8 1B 5C 05 00: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 12: jne 0x4a5506
        __asm _emit 0x75
        __asm _emit 0x12
        push 5d02ach
        push 5d02e8h
        ; Exact mapped bytes E8 12 A7 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
