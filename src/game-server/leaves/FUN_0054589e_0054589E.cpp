// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054589E .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_0054589e_0054589E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d410h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push 92h
        push 5c76b8h
        push 8
        ; Exact mapped bytes E8 95 77 FA FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x5458e7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3E 00 00 00: call 0x545920
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5458ee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
