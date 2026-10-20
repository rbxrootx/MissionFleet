// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586236F0 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_586236f0_586236F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 25h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 E0 5F F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xff
        sub eax, 7
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 18: jle 0x58623734
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 49 D5 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd5
        __asm _emit 0x19
        __asm _emit 0x00
        imul eax, eax, 46h
        cdq
        idiv dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 25h
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 0E: jge 0x58623750
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 25h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 1A: jmp 0x5862376a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 6bh
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 0C: jle 0x5862376a
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 6bh
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 1F 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1f
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
