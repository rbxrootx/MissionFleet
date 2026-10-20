// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046CDC0 .. +0x7E bytes.
extern "C" __declspec(naked) void __CrtSetReportFile_0046CDC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x46cdd0
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7C 07: jl 0x46cdd7
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 0fffffffeh
        ; Exact mapped bytes EB 63: jmp 0x46ce3a
        __asm _emit 0xeb
        __asm _emit 0x63
        cmp dword ptr [ebp + 0ch], -6
        ; Exact mapped bytes 75 0C: jne 0x46cde9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax*4 + 67dc5ch]
        ; Exact mapped bytes EB 51: jmp 0x46ce3a
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 67dc5ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 0ch], -4
        ; Exact mapped bytes 75 14: jne 0x46ce10
        __asm _emit 0x75
        __asm _emit 0x14
        push -0bh
        ; Exact mapped bytes FF 15 9C B8 68 00: call dword ptr [0x68b89c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx*4 + 67dc5ch], eax
        ; Exact mapped bytes EB 27: jmp 0x46ce37
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp dword ptr [ebp + 0ch], -5
        ; Exact mapped bytes 75 14: jne 0x46ce2a
        __asm _emit 0x75
        __asm _emit 0x14
        push -0ch
        ; Exact mapped bytes FF 15 9C B8 68 00: call dword ptr [0x68b89c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx*4 + 67dc5ch], eax
        ; Exact mapped bytes EB 0D: jmp 0x46ce37
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax*4 + 67dc5ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
