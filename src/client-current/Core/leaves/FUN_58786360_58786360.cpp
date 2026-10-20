// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786360 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58786360_58786360() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 7C 06: jl 0x58786373
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 63h
        ; Exact mapped bytes 7E 04: jle 0x58786377
        __asm _emit 0x7e
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 0B: jmp 0x58786382
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 60h], ecx
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
