// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BAA0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_5850baa0_5850BAA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 73 47: jae 0x5850bb04
        __asm _emit 0x73
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF E9 F9 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 FC EA F9 FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 1], 0
        lea edx, [ebp - 1]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 1]
        push edx
        ; Exact mapped bytes E8 E1 EA F9 FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 1A: jmp 0x5850bb1e
        __asm _emit 0xeb
        __asm _emit 0x1a
        xor eax, eax
        mov byte ptr [ebp - 2], al
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 2]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 99 FF FF: call 0x58505510
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x99
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
