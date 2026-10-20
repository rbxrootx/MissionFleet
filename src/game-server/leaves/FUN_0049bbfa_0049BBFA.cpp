// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BBFA .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0049bbfa_0049BBFA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 37 05 00: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x49bc2e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 1B: je 0x49bc2e
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [edx + 70h]
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x49bc2e
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x49bc35
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
