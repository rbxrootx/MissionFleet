// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E820 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0045e820_0045E820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 76 08: jbe 0x45e853
        __asm _emit 0x76
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x45e85a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
