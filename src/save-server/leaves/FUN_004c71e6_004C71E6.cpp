// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C71E6 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_004c71e6_004C71E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0b5h
        push 6747cch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5E 30 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A FF FF FF: call 0x4c717c
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4c721f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 12: jmp 0x4c7231
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
