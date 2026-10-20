// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790970 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_58790970_58790970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b69dch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 74 3D: je 0x587909cb
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x587909b7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x587909be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 5D FF FF: call 0x587866e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
