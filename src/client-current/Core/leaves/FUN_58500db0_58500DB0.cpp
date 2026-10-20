// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500DB0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58500db0_58500DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2D: je 0x58500dee
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x58500dde
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 F4 FF FF: call 0x58500290
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58500de5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
