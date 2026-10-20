// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4DD0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_585e4dd0_585E4DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585e4deb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 10: jge 0x585e4e04
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 60h], 0ffffffffh
        ; Exact mapped bytes EB DE: jmp 0x585e4de2
        __asm _emit 0xeb
        __asm _emit 0xde
        mov esp, ebp
        pop ebp
        ret
    }
}
