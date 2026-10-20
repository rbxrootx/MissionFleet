// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421F41 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00421f41_00421F41() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fbf0h
        push 423118h
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov ebx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebx + 8]
        mov dword ptr [ebp - 1ch], esi
        mov edi, dword ptr [ebp + 10h]
        cmp esi, dword ptr [ebp + 14h]
        ; Exact mapped bytes 74 55: je 0x421fcd
        __asm _emit 0x74
        __asm _emit 0x55
        cmp esi, -1
        ; Exact mapped bytes 7E 05: jle 0x421f82
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp esi, dword ptr [edi + 4]
        ; Exact mapped bytes 7C 05: jl 0x421f87
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E8 04 06 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [edi + 8]
        mov eax, dword ptr [eax + esi*8 + 4]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x421fa2
        __asm _emit 0x74
        __asm _emit 0x0c
        push 103h
        push ebx
        push eax
        ; Exact mapped bytes E8 6E 04 00 00: call 0x422410
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 1A: jmp 0x421fc2
        __asm _emit 0xeb
        __asm _emit 0x1a
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2F 00 00 00: call 0x421fdf
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
        mov esp, dword ptr [ebp - 18h]
        or dword ptr [ebp - 4], 0ffffffffh
        mov edi, dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edi + 8]
    }
}
