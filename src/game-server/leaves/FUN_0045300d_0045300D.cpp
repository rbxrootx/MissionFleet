// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045300D .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0045300d_0045300D() {
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
        ; Exact mapped bytes E8 50 EC FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x45303b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 5D: jmp 0x453098
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 AA A7 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7C 32: jl 0x453085
        __asm _emit 0x7c
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 2
        ; Exact mapped bytes 7D 2A: jge 0x453085
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 94 90 60 04 00 00: call dword ptr [eax + edx*4 + 0x460]
        __asm _emit 0xff
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 57 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x453085
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 13: jmp 0x453098
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 C0 A7 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC C5 FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 3D 57 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
