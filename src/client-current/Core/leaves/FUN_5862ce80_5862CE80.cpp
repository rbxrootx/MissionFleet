// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CE80 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_5862ce80_5862CE80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1f8h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1fch], 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 0A 3A 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5862cec9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 33: jae 0x5862cf04
        __asm _emit 0x73
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 10h], edx
        push 0ffffffh
        imul eax, dword ptr [ebp - 4], 1ch
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax]
        push edx
        imul eax, dword ptr [ebp - 4], 1ch
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 36 19 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BC: jmp 0x5862cec0
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 FD FF FF: call 0x5862cc60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
