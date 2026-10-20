// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4126 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004d4126_004D4126() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 3C DA 05 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0A: jne 0x4d4143
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 686db0h
        ; Exact mapped bytes E8 60 82 00 00: call 0x4dc3a3
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 21 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x4d417d
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 03 B6 FF FF: call 0x4cf75c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 66 80 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D B6 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
