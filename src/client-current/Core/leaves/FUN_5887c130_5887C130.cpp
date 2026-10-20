// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C130 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_5887c130_5887C130() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 8], 0
        push eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 61 FF FF FF: call 0x5887c0b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x5887c185
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        or edx, 1fh
        mov dword ptr [eax + 4], ecx
        lea eax, [ebp - 8]
        push eax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E8 5D FF FF FF: call 0x5887c0d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x5887c185
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 01 06 00 00: call 0x5887c780
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
