// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FFF70 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_584fff70_584FFF70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 6C F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 74 1B: je 0x584ffff9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 D7 9D FC FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, ax
        cdq
        mov ecx, 24h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x58500000
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 74h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
