// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7B40 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_587c7b40_587C7B40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1f4h
        ; Exact mapped bytes 7C 09: jl 0x587c7b59
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 7d0h
        ; Exact mapped bytes 7E 02: jle 0x587c7b5b
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x587c7ba9
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 114h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 DD CC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xdd
        __asm _emit 0xcc
        __asm _emit 0xff
        imul eax, eax, 3e8h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 114h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 DD CC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xdd
        __asm _emit 0xcc
        __asm _emit 0xff
        imul eax, eax, 3e8h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 114h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 128h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
