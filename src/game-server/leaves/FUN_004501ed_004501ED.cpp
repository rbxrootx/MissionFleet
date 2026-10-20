// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004501ED .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_004501ed_004501ED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 70 1A FF FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x45021b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 5D: jmp 0x450278
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 CA D5 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7C 32: jl 0x450265
        __asm _emit 0x7c
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 3
        ; Exact mapped bytes 7D 2A: jge 0x450265
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 94 90 74 04 00 00: call dword ptr [eax + edx*4 + 0x474]
        __asm _emit 0xff
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 85 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x450265
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 13: jmp 0x450278
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 E0 D5 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC F3 FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 5D 85 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
