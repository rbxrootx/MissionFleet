// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858A680 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_5858a680_5858A680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aacf8h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2b8h], 0
        ; Exact mapped bytes 74 3D: je 0x5858a6db
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x5858a6c7
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
        ; Exact mapped bytes EB 07: jmp 0x5858a6ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2b8h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 14 00 00: call 0x5858bb00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
