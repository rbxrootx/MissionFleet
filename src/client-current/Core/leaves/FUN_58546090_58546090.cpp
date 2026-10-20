// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546090 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58546090_58546090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585460ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 5D: jge 0x5854610e
        __asm _emit 0x7d
        __asm _emit 0x5d
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 1D: jne 0x585460d4
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1ach]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BF FE F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x5854610c
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1ach]
        mov dword ptr [ebp - 10h], eax
        push 588a75f1h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF FF F3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1ach]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 85 FE F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 94: jmp 0x585460a2
        __asm _emit 0xeb
        __asm _emit 0x94
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
