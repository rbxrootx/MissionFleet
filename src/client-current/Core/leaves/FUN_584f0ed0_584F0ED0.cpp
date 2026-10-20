// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F0ED0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_584f0ed0_584F0ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 03 00 00: call 0x584f1280
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 04 00 00: call 0x584f1370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        shr eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, eax
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 76 05: jbe 0x584f0f03
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 1B: jmp 0x584f0f1e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        shr edx, 1
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 05: jae 0x584f0f1b
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 03: jmp 0x584f0f1e
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
