// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A27C .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_0041a27c_0041A27C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x41a29d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x41a2d2
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x41a2af
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 1B: jge 0x41a2d0
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*8 + 90h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 07: jne 0x41a2ce
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x41a2d2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D6: jmp 0x41a2a6
        __asm _emit 0xeb
        __asm _emit 0xd6
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
