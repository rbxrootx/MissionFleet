// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B5840 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_584b5840_584B5840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 74 2E: je 0x584b5880
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 73 FF FF FF: call 0x584b57d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], eax
        ; Exact mapped bytes 7C 09: jl 0x584b5871
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x584b5878
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584b5887
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
