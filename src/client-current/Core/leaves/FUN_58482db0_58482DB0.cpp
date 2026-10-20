// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482DB0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58482db0_58482DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58482dcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0bh
        ; Exact mapped bytes 7D 1D: jge 0x58482dee
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 0ch], eax
        push 58894693h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B5 32 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x58482dc2
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ret
    }
}
