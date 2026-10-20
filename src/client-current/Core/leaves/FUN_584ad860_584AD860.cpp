// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AD860 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_584ad860_584AD860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 20f60h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 20f60h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 23: jne 0x584ad8af
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20fcch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 20f60h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 D8 30 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd8
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
