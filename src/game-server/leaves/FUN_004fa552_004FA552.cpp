// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA552 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_004fa552_004FA552() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 100h
        ; Exact mapped bytes 75 5B: jne 0x4fa5bd
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 70h
        ; Exact mapped bytes 75 52: jne 0x4fa5bd
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x4fa5bd
        __asm _emit 0x75
        __asm _emit 0x36
        push 10h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7C 27: jl 0x4fa5bd
        __asm _emit 0x7c
        __asm _emit 0x27
        push 11h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 7C 18: jl 0x4fa5bd
        __asm _emit 0x7c
        __asm _emit 0x18
        push 12h
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7C 09: jl 0x4fa5bd
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x4fa5c4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
