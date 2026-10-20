// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004029F0 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_004029f0_004029F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 E8 FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 72: jne 0x402a87
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 30: jne 0x402a4e
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d78h]
        mov dword ptr [edx + 118h], 0
        push 0
        push 0
        push 10004h
        push 8000000h
        push 80020a00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 70 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 37: jmp 0x402a85
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 1
        ; Exact mapped bytes 75 2E: jne 0x402a85
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d78h]
        mov dword ptr [edx + 118h], 1
        push 0
        push 0
        push 10005h
        push 8000000h
        push 80020a00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 70 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x402ab0
        __asm _emit 0xeb
        __asm _emit 0x29
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 85 E8 FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 30 5D 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 20 5D 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
