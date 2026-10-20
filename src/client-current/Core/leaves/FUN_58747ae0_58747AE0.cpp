// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58747AE0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58747ae0_58747AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58747afb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 1A: jge 0x58747b1b
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 7D D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x58747af2
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 10h], eax
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E 7D D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 FF FF FF: call 0x58747a90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
