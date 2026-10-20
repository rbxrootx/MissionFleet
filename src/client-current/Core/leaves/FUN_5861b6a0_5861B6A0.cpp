// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861B6A0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_5861b6a0_5861B6A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 3D: je 0x5861b6f2
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x5861b6de
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861b6e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
