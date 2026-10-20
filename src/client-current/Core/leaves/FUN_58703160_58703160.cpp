// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58703160 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_58703160_58703160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5870317b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 7D 3D: jge 0x587031c6
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 0ch], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9A 23 0B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 10h], edx
        push 101h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 ED 23 0B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AC: jmp 0x58703172
        __asm _emit 0xeb
        __asm _emit 0xac
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0fch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 64h
        div ecx
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A5 7F 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
