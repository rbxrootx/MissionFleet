// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A44B .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0052a44b_0052A44B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 1C: je 0x52a477
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x52a477
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x52a47f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 33 01 00: call 0x53d87e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
