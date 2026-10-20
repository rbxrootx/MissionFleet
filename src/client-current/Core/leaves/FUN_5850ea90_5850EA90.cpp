// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850EA90 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5850ea90_5850EA90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10dach]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10dach]
        ; Exact mapped bytes E8 EB 6C F8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 C6 2A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc6
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dc0h]
        mov dword ptr [ebp - 14h], edx
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 10dach]
        ; Exact mapped bytes E8 AD 6C F8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7E C6 2A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc6
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
