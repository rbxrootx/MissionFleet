// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876F2F0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_5876f2f0_5876F2F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ef0h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f317
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 35: jge 0x5876f35a
        __asm _emit 0x7d
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 23: je 0x5876f358
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ef0h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 D0 DA FF: call 0x5851c360
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B4: jmp 0x5876f30e
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
