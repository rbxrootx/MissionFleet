// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58485E80 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58485e80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 48 26: mov word ptr [eax + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 74 16: je 0x58485eb3
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E EE 32 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xee
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 16: je 0x58485ed2
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F ED 32 00: call 0x587b4c00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xed
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret 4
    }
}
