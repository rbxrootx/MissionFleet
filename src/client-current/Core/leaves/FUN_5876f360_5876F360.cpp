// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876F360 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_5876f360_5876F360() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ef4h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f387
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 35: jge 0x5876f3ca
        __asm _emit 0x7d
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 23: je 0x5876f3c8
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ef4h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 19 0E D3 FF: call 0x584a01e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B4: jmp 0x5876f37e
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
