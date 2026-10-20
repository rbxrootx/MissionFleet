// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AB9C0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_586ab9c0_586AB9C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ab9e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7D 17: jge 0x586aba00
        __asm _emit 0x7d
        __asm _emit 0x17
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x586ab9f3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x586aba03
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 06 DE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D8: jmp 0x586ab9d8
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
