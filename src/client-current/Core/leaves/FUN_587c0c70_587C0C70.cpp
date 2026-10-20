// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0C70 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_587c0c70_587C0C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 29: je 0x587c0cb8
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 75 05: jne 0x587c0ca2
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 19: jmp 0x587c0cbb
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 6F CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6f
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D1: jmp 0x587c0c89
        __asm _emit 0xeb
        __asm _emit 0xd1
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
