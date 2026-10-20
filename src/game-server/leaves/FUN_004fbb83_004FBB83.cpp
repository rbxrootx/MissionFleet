// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FBB83 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004fbb83_004FBB83() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 23h
        ; Exact mapped bytes 77 43: ja 0x4fbbdf
        __asm _emit 0x77
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [eax + 4fbc0ah]
        ; Exact mapped bytes FF 24 95 EA BB 4F 00: jmp dword ptr [edx*4 + 0x4fbbea]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xbb
        __asm _emit 0x4f
        __asm _emit 0x00
        mov eax, 5
        ; Exact mapped bytes EB 2F: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, 6
        ; Exact mapped bytes EB 28: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, 0bh
        ; Exact mapped bytes EB 21: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, 4
        ; Exact mapped bytes EB 1A: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, 2
        ; Exact mapped bytes EB 13: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, 0dh
        ; Exact mapped bytes EB 0C: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 0ah
        ; Exact mapped bytes EB 05: jmp 0x4fbbe4
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
