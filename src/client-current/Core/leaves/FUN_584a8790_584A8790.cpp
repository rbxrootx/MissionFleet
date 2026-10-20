// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8790 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_584a8790_584A8790() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0c8h
        ; Exact mapped bytes 7C 48: jl 0x584a87e5
        __asm _emit 0x7c
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 E2 FD FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 CF FE FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 64h
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7F 2E: jg 0x584a87e5
        __asm _emit 0x7f
        __asm _emit 0x2e
        cmp dword ptr [ebp + 0ch], 1b8h
        ; Exact mapped bytes 7C 25: jl 0x584a87e5
        __asm _emit 0x7c
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 E2 FD FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E CF FE FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 0c8h
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7F 09: jg 0x584a87e5
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x584a87ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
