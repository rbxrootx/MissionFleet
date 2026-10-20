// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AA20 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5878aa20_5878AA20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 12: jl 0x5878aa41
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp + 0ch], 18h
        ; Exact mapped bytes 7F 0C: jg 0x5878aa41
        __asm _emit 0x7f
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 7C 06: jl 0x5878aa41
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 64h
        ; Exact mapped bytes 7E 05: jle 0x5878aa46
        __asm _emit 0x7e
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 20: jmp 0x5878aa66
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        shl eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 0F: jl 0x5878aa63
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 7F 09: jg 0x5878aa63
        __asm _emit 0x7f
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
