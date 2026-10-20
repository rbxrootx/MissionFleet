// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004649F8 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004649f8_004649F8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x464a31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 190h
        ; Exact mapped bytes 73 1A: jae 0x464a54
        __asm _emit 0x73
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB D4: jmp 0x464a28
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
